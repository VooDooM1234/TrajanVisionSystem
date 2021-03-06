#include <math.h>
#include "ImageDisplay.h"
#include <memory>
#include "Structs.h"
#include "SaveLoadSettings.h"
#include "MyForm.h"

using namespace std;

//processInfo imageInfo;
Imageanalysis CameraA;
Imageanalysis CameraB;

int camWidth = 10000;
int camHeight = 10000;

//Runs this first, tries to run PylonInit, if no pylon cam, runs OpenCVInit
void Imageanalysis::CameraInitialization(int camNumber, string camName) {
	
	PylonInitialization(camNumber, camName);
	if (IMGInfo.camera != nullptr) {
		if (IMGInfo.camera->IsOpen() == false) {
			OpenCVCamInitialization(camNumber, camName);
		}
	}
	else {
		OpenCVCamInitialization(camNumber, camName);
	}

}
void Imageanalysis::OpenCVCamInitialization(int camNumber, string camName) {
	//attempt to open camera for capturing image
	IMGInfo.ImageCapture.open(camNumber);
	IMGInfo.camNumber = camNumber;
	IMGInfo.camName = camName;

	if (!IMGInfo.ImageCapture.isOpened()) { //Show Error if Failed to Open
		cerr << "Failed to open Camera " << IMGInfo.camName << endl;
		currentLog.result = "Opening Camera: " + camName + " On Port Number: '" + std::to_string(IMGInfo.camNumber) + "'  using OpenCV Method Failed";
		SaveLog(currentLog);

	}
	else {

		//sets the camera to the correct resolution for inspection
		IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_WIDTH, camWidth);
		IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_HEIGHT, camHeight);
		camWidth = int(IMGInfo.ImageCapture.get(cv::CAP_PROP_FRAME_WIDTH));
		camHeight = int(IMGInfo.ImageCapture.get(cv::CAP_PROP_FRAME_HEIGHT));
		IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_WIDTH, camWidth);
		IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_HEIGHT, camHeight);

		currentLog.result = "Opening Camera: " + camName + " On Port Number: '" + std::to_string(IMGInfo.camNumber) + "'  using OpenCV Method worked Successfully";
		SaveLog(currentLog);
	}
}


void Imageanalysis::PylonInitialization(int camNumber, string camName) {
	Pylon::PylonInitialize();
	try
	{
		CDeviceInfo info;

		info.SetDeviceClass(CBaslerUsbInstantCamera::DeviceClass());
		
		IMGInfo.camera = new CBaslerUsbInstantCamera(CTlFactory::GetInstance().CreateFirstDevice());
		IMGInfo.camera->Open();
		cout << "Using Device:" << IMGInfo.camera->GetDeviceInfo().GetModelName() << endl;
		IMGInfo.camName = IMGInfo.camera->GetDeviceInfo().GetModelName();
		IMGInfo.camNumber = camNumber;
		if (IsWritable(IMGInfo.camera->OffsetX))
		{
			IMGInfo.camera->OffsetX.SetValue(IMGInfo.camera->OffsetX.GetMin());
		}
		if (IsWritable(IMGInfo.camera->OffsetY))
		{
			IMGInfo.camera->OffsetY.SetValue(IMGInfo.camera->OffsetY.GetMin());
		}

		IMGInfo.camera->ExposureTime.SetValue(currentImageSettings.ExposureTime);
		IMGInfo.camera->AcquisitionFrameRate.SetValue(60);

		camWidth = (int)IMGInfo.camera->Width();
		camHeight = (int)IMGInfo.camera->Height();
	}
	catch (const GenericException &e) {
		currentLog.result = "Failed Loading " + camName + ": " + std::string(e.GetDescription());
		SaveLog(currentLog);
	}
}

//process Image from OpenCV Working Camera
void Imageanalysis::ProcessImage()
{
	//Store original Image display the oridinal image
	if (IMGInfo.ImageCapture.isOpened()) {
		
		IMGInfo.ImageCapture >> IMGInfo.original;
		IMGInfo.ImageCapture >> IMGInfo.original;

	}
	else {
		IMGInfo.camera->ExposureTime.SetValue(currentImageSettings.ExposureTime);
		ProcessPylonImage();
	}
	try
	{
		//crops and scals original image to fit form window - rect(x, y, width, height)
		/*cv::Rect rect((int)(camWidth * 0.125),(int)( camHeight * 0.125),(int)(camWidth * 0.75),(int)(camHeight * 0.75));
		IMGInfo.original = IMGInfo.original(rect).clone();*/

		//process image data
		Imageanalysis::generateManipulated();
	}
	catch (const std::exception&)
	{
		IMGInfo.ImageCapture.release();
		if (IMGInfo.camera != nullptr)
			IMGInfo.camera->Close();
	}
	//Imageanalysis::generateManipulated();
}

//convert pylon camera display to open CV Image
void Imageanalysis::ProcessPylonImage() {
	CImageFormatConverter PylonToCVFormatConverter;
	PylonToCVFormatConverter.OutputPixelFormat = PixelType_BGR8packed;
	CPylonImage PylonImage;
	CGrabResultPtr PtrGrabResult;
	IMGInfo.camera->GrabOne(500, PtrGrabResult);	//EXPOSURE TIME CANNOT EXCEED (timeoutMS-27)
	if (PtrGrabResult->GrabSucceeded()) {
		PylonToCVFormatConverter.Convert(PylonImage, PtrGrabResult);
		IMGInfo.original = cv::Mat(PtrGrabResult->GetHeight(), PtrGrabResult->GetWidth(), CV_8UC3, (uint8_t *)PylonImage.GetBuffer()).clone();
	}
}

void Imageanalysis::generateManipulated() {
	ImagePreProcessing();
	CustomIDODDetection();
	ChuteDetermination();
}

void Imageanalysis::ChuteDetermination() {
	int priority = 0;
	for each (ChuteSpecifications var in currentProductSettings.listOfChuteSpecs)
	{
		priority++;
		double lower = 0;
		double upper = 0;
		//set initial upper and lower limits for the ID
		lower = (currentProductSettings.targetID * (1 - (var.IDTolerance / 100))) / currentImageSettings.PixToMMRatio;
		upper = (currentProductSettings.targetID * (1 + (var.IDTolerance / 100))) / currentImageSettings.PixToMMRatio;

		if (var.IDGood && IMGInfo.ID - IMGInfo.IDVariance > lower && IMGInfo.ID + IMGInfo.IDVariance < upper) {
				goto ODSETUP;
		}
		else if (var.IDLower && IMGInfo.ID - IMGInfo.IDVariance <= lower) {
			goto CHUTEDETERMINATION;
		}
		else if (var.IDHigher && IMGInfo.ID + IMGInfo.IDVariance >= upper) {
			goto CHUTEDETERMINATION;
		}
		else if (!var.IDGood && !var.IDLower && !var.IDHigher) {
			goto ODSETUP;
		}
		else {
			continue;
		}

		ODSETUP:
		//set initial upper and lower limits for the OD
		lower = (currentProductSettings.targetOD * (1 - (var.ODTolerance / 100))) / currentImageSettings.PixToMMRatio;
		upper = (currentProductSettings.targetOD * (1 + (var.ODTolerance / 100))) / currentImageSettings.PixToMMRatio;

		if (var.ODGood && IMGInfo.OD - IMGInfo.ODVariance > lower && IMGInfo.OD + IMGInfo.ODVariance < upper) {
				goto CHUTEDETERMINATION;
		}
		else if (var.ODLower && IMGInfo.OD - IMGInfo.ODVariance <= lower) {
				goto CHUTEDETERMINATION;
		}
		else if (var.ODHigher && IMGInfo.OD + IMGInfo.ODVariance >= upper) {
				goto CHUTEDETERMINATION;
		}
		else if (!var.ODGood && !var.ODLower && !var.ODHigher) {
			goto CHUTEDETERMINATION;
		}
		else {
			continue;
		}
		CHUTEDETERMINATION:
		IMGInfo.chutePriority = priority;
		IMGInfo.chute = var.chutetype;
		return;
	}
}

void Imageanalysis::ImagePreProcessing() {
	cv::cvtColor(IMGInfo.original, IMGInfo.grayscale, CV_BGR2GRAY);


	cv::blur(IMGInfo.grayscale, IMGInfo.blurred, cv::Size(currentImageSettings.blurMapSize, currentImageSettings.blurMapSize));

	
	cv::threshold(IMGInfo.blurred, IMGInfo.binaryThreshold, currentImageSettings.CannyThresholdA, 255, cv::THRESH_BINARY);
	
	cv::Canny(IMGInfo.binaryThreshold, IMGInfo.canny, currentImageSettings.CannyThresholdA, currentImageSettings.CannyThresholdB, 3);
	
	cv::Mat element = getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(currentImageSettings.dilation, currentImageSettings.dilation), cv::Point(-1, -1));
	cv::dilate(IMGInfo.canny, IMGInfo.canny, element);
	cv::erode(IMGInfo.canny, IMGInfo.canny, element);
}

void Imageanalysis::CustomIDODDetection() {
	/// Find contours using canny method
	vector<vector<cv::Point> > contours;
	vector<cv::Vec4i> hierarchy;
	
	cv::findContours(IMGInfo.canny, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
	
	// Draw contours (IS THIS ACTUALLY DOING ANYTHING???)
	//cv::Mat drawing = cv::Mat::zeros(IMGInfo.canny.size(), CV_8UC3);

	vector<contourInfo> Circles(0);
	contourInfo continfo;
	vector<vector<cv::Point>> otherPoints;


	for (int i = 0; i < int(contours.size()); i++)
	{
		contourInfo continfo = IsContourCircle(contours[i], 20);
		//for every contour found, if it is a circle, add it to a new array of circles
		if (continfo.isCircle == true) {
			int j = int(Circles.size());
			Circles.resize(j + 1);
			Circles[j].center = continfo.center;
			Circles[j].concGroup = continfo.concGroup;
			Circles[j].contour = continfo.contour;
			Circles[j].isCircle = continfo.isCircle;
			Circles[j].radius = continfo.radius;
			cv::RotatedRect rect = cv::minAreaRect(contours[i]);
			Circles[j].rect = rect;
		}
		else
		{
			//otherwise store the contour in a new array for later use
			otherPoints.resize(otherPoints.size() + 1);
			otherPoints[otherPoints.size() - 1] = continfo.contour;

		}
	}

	vector<ConcCircles> concCircles;
	//sort the found circles into concentric groupes
	concCircles = SortCircles(Circles);

	vector<vector<cv::Point>> defects;

	//checks if there are any found 'otherPoints' within the regions of the concentric circles
	defects = DefectCheck(concCircles, otherPoints);

	IMGInfo.manipulated = IMGInfo.original.clone();

	//determines the ID and OD of the Concentric Circles (used for ID/OD of the syringe)
	for (int i = 0; i < int(concCircles.size()); i++)
	{
		float tolleranceOD = 0, tolleranceID = 0;
		float ID = 0, OD = 0;

		//takes average of width/height of enclosing rectangle
		ID = (concCircles[i].IDrect.size.width + concCircles[i].IDrect.size.height) / 2;
		tolleranceID = abs(ID - concCircles[i].IDrect.size.width);
		OD = (concCircles[i].ODrect.size.width + concCircles[i].ODrect.size.height) / 2;
		tolleranceOD = abs(OD - concCircles[i].ODrect.size.width);

		for (int j = 0; j < int(concCircles[i].group.size()); j++)
		{
			//Draws over the manipulated image yellow circles for where it found the ID/OD
			polylines(IMGInfo.manipulated, concCircles[i].group[j].contour, true, cv::Scalar(0, 255, 255), 1, 8, 0);
		}
		if (i == 0) {
			IMGInfo.ID = ID;
			IMGInfo.OD = OD;
			IMGInfo.IDVariance = tolleranceID;
			IMGInfo.ODVariance = tolleranceOD;
			IMGInfo.multiConcentricCircleDetected = false;
			cv::circle(IMGInfo.manipulated, concCircles[0].IDCenter, (int)ID / 2, cv::Scalar(255,255,255), 1, 8, 0);
			cv::circle(IMGInfo.manipulated, concCircles[0].ODCenter, (int)OD / 2, cv::Scalar(255, 255, 255), 1, 8, 0);

		}
		else
		{
			IMGInfo.multiConcentricCircleDetected = true;
			IMGInfo.ID = NULL;
			IMGInfo.OD = NULL;
			IMGInfo.IDVariance = NULL;
			IMGInfo.ODVariance = NULL;
		}
	}

	//calculate defecct properties
	for (int i = 0; i < defects.size(); i++) {
		IMGInfo.IMGDefects.defectCount++;
		IMGInfo.IMGDefects.totalDefectPerimeter += (int)defects[i].size();
		if (defects[i].size() > IMGInfo.IMGDefects.largestDefectPerimeter)
			IMGInfo.IMGDefects.largestDefectPerimeter =(int)defects[i].size();
		IMGInfo.IMGDefects.largestDefectArea = IMGInfo.IMGDefects.largestDefectPerimeter * currentImageSettings.PixToMMRatio;
		IMGInfo.IMGDefects.totalDefectArea = IMGInfo.IMGDefects.totalDefectPerimeter * currentImageSettings.PixToMMRatio;
		//Draws over the manipulated image the defects it found in red
		polylines(IMGInfo.manipulated, defects[i], true, cv::Scalar(0, 0, 255), 1, 8, 0);
	}

}

//checks that for every point inside a defect it is somewhere within the concentric circle
vector<vector<cv::Point>> Imageanalysis::DefectCheck(vector<ConcCircles> concCircles, vector<vector<cv::Point>> defects) {
	vector<vector<cv::Point>> result(0);

	for (int i = 0; i < int(concCircles.size()); i++)
	{
		for (int j = 0; j < int(defects.size()); j++) {
			for (int k = 0; k < int(defects[j].size()); k++) {
				if (pointInEllipse(defects[j][k], concCircles[i].ODrect) == true) {
					if ((pointInEllipse(defects[j][k], concCircles[i].IDrect) == false && concCircles[i].group.size() > 1) || /*concCircles[i].ID == concCircles[i].OD ||*/
						(concCircles[i].IDrect.size == concCircles[i].ODrect.size)) {
						result.resize(result.size() + 1);
						result[result.size() - 1] = defects[j];
						break;
					}
				}
			}
		}
	}
	return(result);
}

//checks if given point if located within ellipse area
bool Imageanalysis::pointInEllipse(cv::Point point, cv::RotatedRect ellipse) {
	bool result = false;
	cv::Point2f newPoint = { point.x - ellipse.center.x, point.y - ellipse.center.y };
	double cosAngle = cos((180 - ellipse.angle) * (PI / 180));
	double sinAngle = sin((180 - ellipse.angle) * (PI / 180));

	double xval = (newPoint.x * cosAngle) - (newPoint.y * sinAngle);
	double yval = (newPoint.x * sinAngle) + (newPoint.y * cosAngle);

	double ans = (pow(xval, 2) / pow(ellipse.size.width / 2, 2)) + (pow(yval, 2) / pow(ellipse.size.height / 2, 2));

	if (ans < 1)
		result = true;
	return (result);
}

contourInfo Imageanalysis::IsContourCircle(std::vector<cv::Point> contour, int SmallestRadius) {
	contourInfo info;

	double height = cv::minAreaRect(contour).size.height;
	double width = cv::minAreaRect(contour).size.width;

	if (height < SmallestRadius || width < SmallestRadius)
		return info;

	minEnclosingCircle(contour, info.center,  info.radius); //enclose the individual contour lines within a circle

	double circleCheck = fabs(info.radius - height / 2); //gets the absolute value of the measured circle area difference
	double circleCheck2 = fabs(info.radius - width / 2);

	info.contour = contour;

	//if the difference of the circle area is within the tollerance range then the contour is a circle
	if (circleCheck < (info.radius / currentImageSettings.CircleTolerance) && circleCheck2 < (info.radius / currentImageSettings.CircleTolerance)) {
		if (info.radius >= SmallestRadius)
			info.isCircle = true;
	}

	return (info);//return contourinfo
}

vector<ConcCircles> Imageanalysis::SortCircles(vector<contourInfo> circleInfo) {

	int concGroupPos = 0;
	vector<ConcCircles> concentricCircles(0);

	for (int i = 0; i < int(circleInfo.size()) - 1; i++) {
		//if the circle is of a unique group assign it to a new group
		if (circleInfo[i].concGroup == 0) {
			concGroupPos++;
			circleInfo[i].concGroup = concGroupPos;
			concentricCircles.resize(concentricCircles.size() + 1);
			concentricCircles[concentricCircles.size() - 1].group.resize(concentricCircles[concentricCircles.size() - 1].group.size() + 1);
			concentricCircles[concentricCircles.size() - 1].group[concentricCircles[concentricCircles.size() - 1].group.size() - 1] = circleInfo[i];
		}
		//for every second circle inside the data array
		for (int j = i + 1; j < int(circleInfo.size()); j++) {
			//if two circles have the same center point within a tollerance of +/- 20 pixels assign the circles to the same group
			if ((fabs(circleInfo[i].center.x - circleInfo[j].center.x) < 20 && fabs(circleInfo[i].center.y - circleInfo[j].center.y) < 20) ||		
				(circleInfo[i].center.x == circleInfo[j].center.x && circleInfo[i].center.y == circleInfo[j].center.y)) {

				circleInfo[j].concGroup = circleInfo[i].concGroup; //mark the circle to have the same concentric grouping as what it is compared to
				concentricCircles[concentricCircles.size() - 1].group.resize(concentricCircles[concentricCircles.size() - 1].group.size() + 1);
				concentricCircles[concentricCircles.size() - 1].group[concentricCircles[concentricCircles.size() - 1].group.size() - 1] = circleInfo[j];
			}
			//assign the last circle in the array to a new group if it is a unique concentric circle
			else if (j == int(circleInfo.size()) - 1) {
				concGroupPos++;
				circleInfo[i].concGroup = concGroupPos;
				concentricCircles.resize(concentricCircles.size() + 1);
				concentricCircles[concentricCircles.size() - 1].group.resize(concentricCircles[concentricCircles.size() - 1].group.size() + 1);
				concentricCircles[concentricCircles.size() - 1].group[concentricCircles[concentricCircles.size() - 1].group.size() - 1] = circleInfo[j];
			}
		}
	}
	// sort the returned value of the concentric circles to determine the ID and OD

	for (int i = 0; i < int(concentricCircles.size()); i++) {
		double ID = (float)999999999;
		double OD = 0;
		//finds the largest OD and smallest ID (WOULDN'T AN AVERAGE OF THE ID's  OD's GIVE US THE MOST ACCURATE RESULT?)
		for (int j = 0; j < int(concentricCircles[i].group.size()); j++) {
			if (ID > (concentricCircles[i].group[j].radius * 2)) {
				ID = (concentricCircles[i].group[j].radius * 2);
				concentricCircles[i].IDrect = concentricCircles[i].group[j].rect;
				concentricCircles[i].IDCenter = concentricCircles[i].group[j].center;
			}
			if (OD < (concentricCircles[i].group[j].radius * 2)) {
				OD = (concentricCircles[i].group[j].radius * 2);
				concentricCircles[i].ODrect = concentricCircles[i].group[j].rect;
				concentricCircles[i].ODCenter = concentricCircles[i].group[j].center;
			}
		}
	}
	return concentricCircles;
}