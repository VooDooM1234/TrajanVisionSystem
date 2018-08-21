#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
//#include "RobotComms.h"
#include "opencv2/imgproc.hpp"
#include "ImageDisplay.h"
#include <memory>
#include "Structs.h"
#include "SaveLoadSettings.h"

using namespace std;

//processInfo imageInfo;
Imageanalysis CameraA;
Imageanalysis CameraB;

void Imageanalysis::CameraInitialization(int camNumber, string camName) {
	////attempt to open camera for capturing image
	//IMGInfo.ImageCapture.open(camNumber);
	//IMGInfo.camNumber = camNumber;
	//IMGInfo.camName = CamName;

	//if (!IMGInfo.ImageCapture.isOpened()) { //Show Error if Failed to Open
	//	cerr << "Failed to open Camera A\n" << endl;
	//	currentLog.result = "Opening Camera: " + CamName + " On Port Number: '" + std::to_string(IMGInfo.camNumber) + "'  using OpenCV Method Failed, Attempting to open camera using Pylon Class Method";
	//	SaveLog(currentLog);

	//	//if attempt failed try to open via Pylon Method
	//	Imageanalysis::PylonInitialization(camNumber, CamName);
	//}
	//else {

	//	IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_WIDTH, 2448/2);
	//	IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_HEIGHT, 2048/2);
	//	Imageanalysis::PylonInitialization(camNumber, CamName);

	//	currentLog.result = "Opening Camera: " + CamName + " On Port Number: '" + std::to_string(IMGInfo.camNumber) + "'  using OpenCV Method worked Successfully";
	//	SaveLog(currentLog);
	//}
	OpenCVCamInitialization(camNumber, camName);
	/*PylonInitialization(camNumber, camName);
	if (IMGInfo.camera != nullptr) {
		if (IMGInfo.camera->IsOpen() == false) {
			OpenCVCamInitialization(camNumber, camName);
		}
	}
	else {
		OpenCVCamInitialization(camNumber, camName);
	}*/

}
void Imageanalysis::OpenCVCamInitialization(int camNumber, string camName) {
	//attempt to open camera for capturing image
	IMGInfo.ImageCapture.open(camNumber);
	IMGInfo.camNumber = camNumber;
	IMGInfo.camName = camName;

	if (!IMGInfo.ImageCapture.isOpened()) { //Show Error if Failed to Open
		cerr << "Failed to open Camera A\n" << endl;
		currentLog.result = "Opening Camera: " + camName + " On Port Number: '" + std::to_string(IMGInfo.camNumber) + "'  using OpenCV Method Failed";
		SaveLog(currentLog);

		//if attempt failed try to open via Pylon Method
		//Imageanalysis::PylonInitialization(camNumber, camName);
	}
	else {

		IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_WIDTH, 2448);
		IMGInfo.ImageCapture.set(CV_CAP_PROP_FRAME_HEIGHT, 2048);
		//Imageanalysis::PylonInitialization(camNumber, camName);

		currentLog.result = "Opening Camera: " + camName + " On Port Number: '" + std::to_string(IMGInfo.camNumber) + "'  using OpenCV Method worked Successfully";
		SaveLog(currentLog);
	}
}


void Imageanalysis::PylonInitialization(int camNumber, string camName) {
	Pylon::PylonAutoInitTerm();
	Pylon::PylonInitialize();
	try
	{
		//CBaslerUsbInstantCamera camera(CTlFactory::GetInstance().CreateFirstDevice(IMGInfo.baslerInfo));
		//IMGInfo.camera = &camera;

		IMGInfo.baslerInfo.SetDeviceClass(CBaslerUsbInstantCamera::DeviceClass());
		IPylonDevice* device = Pylon::CTlFactory::GetInstance().CreateFirstDevice(IMGInfo.baslerInfo);
		//IMGInfo.camera->Attach(device); //<-- CODY THIS COMPILES FOR ME SEE IF IT WORKS LOADING THE CAMERA
										//IMGInfo.camera = new CBaslerUsbInstantCamera(device);//<--- IM HAVING THE ISSUE WITH THIS CODY, SEE IF U CAN GET IT TO WORK 
										//IMGInfo.camera = new Pylon::CBaslerUsbInstantCamera(Pylon::CTlFactory::GetInstance().CreateFirstDevice(IMGInfo.baslerInfo));
		cout << "Using Device:" << IMGInfo.camera->GetDeviceInfo().GetModelName() << endl;
		IMGInfo.camera->Open();
		//camera.AutoBacklightCompensation();
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
		//original width 2448
		//original height 2048
		//IMGInfo.original.adjustROI(2448 / 100, 2048 / 100, 2448 / 100, 2048 / 100);
		//resize(IMGInfo.original, IMGInfo.original, IMGInfo.original.size(), 0.5, 0.5);
		//IMGInfo.original.resize();

	}
	else {
		ProcessPylonImage();
	}
	try
	{
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
	IMGInfo.camera->GrabOne(500, PtrGrabResult);
	if (PtrGrabResult->GrabSucceeded()) {

		PylonToCVFormatConverter.Convert(PylonImage, PtrGrabResult);
		IMGInfo.original = cv::Mat(PtrGrabResult->GetHeight(), PtrGrabResult->GetWidth(), CV_8UC3, (uint8_t *)PylonImage.GetBuffer());

	}
}

void Imageanalysis::generateManipulated() {
	//converts the colored image to grayscale (0-255 single color image)
	cv::cvtColor(IMGInfo.original, IMGInfo.grayscale, CV_BGR2GRAY);

	//blurs the image to remove sharp edges, helps canny processing method
	cv::blur(IMGInfo.grayscale, IMGInfo.grayscale, cv::Size(3, 3));

	cv::Canny(IMGInfo.grayscale, IMGInfo.canny, currentImageSettings.CannyThresholdA, currentImageSettings.CannyThresholdB, 3);
	
	//Hough Circle Method
	vector<cv::Vec3f> circles;
	//vector<Vec3f> circles;
	//HoughCircles(gray, circles, HOUGH_GRADIENT, 1,
	//	gray.rows / 16,  // change this value to detect circles with different distances to each other
	//	100, 30, 1, 30 // change the last two parameters
 //  // (min_radius & max_radius) to detect larger circles
	cv::HoughCircles(IMGInfo.canny,circles, cv::HOUGH_GRADIENT, 1, 20, 50, 30, 0, 100); // minRange, maxRange to be change (last two)
	for (size_t i = 0; i < circles.size(); i++)
	{
		cv::Vec3i c = circles[i];
		cv::Point center = cv::Point(c[0], c[1]);
		// circle center
		circle(IMGInfo.original, center, 1, cv::Scalar(0, 100, 100), 3, cv::LINE_AA);
		// circle outline
		int radius = c[2];
		circle(IMGInfo.original, center, radius, cv::Scalar(255, 0, 255), 3, cv::LINE_AA);
	}
	//end of Hough
	/// Find contours using canny method
	vector<vector<cv::Point> > contours;
	vector<cv::Vec4i> hierarchy;
	cv::findContours(IMGInfo.canny, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
	/// Draw contours
	cv::Mat drawing = cv::Mat::zeros(IMGInfo.canny.size(), CV_8UC3);

	vector<contourInfo> Circles(0);
	contourInfo continfo;
	vector<vector<cv::Point>> otherPoints;


	for (int i = 0; i < int(contours.size()); i++)
	{
		contourInfo continfo = IsContourCircle(contours[i]);
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

	IMGInfo.manipulated = IMGInfo.original;

	//determines the ID and OD of the Concentric Circles (used for ID/OD of the syringe)
	for (int i = 0; i < int(concCircles.size()); i++)
	{
		float tolleranceOD = 0, tolleranceID = 0;
		float ID = 0;
		float OD = 0;
		ID = (concCircles[i].IDrect.size.width + concCircles[i].IDrect.size.height) / 2;
		tolleranceID = abs(ID - concCircles[i].IDrect.size.width);
		OD = (concCircles[i].ODrect.size.width + concCircles[i].ODrect.size.height) / 2;
		tolleranceOD = abs(OD - concCircles[i].ODrect.size.width);
		if (concCircles[i].group.size() == 1 || concCircles[i].IDrect.size == concCircles[i].ODrect.size) {
			cerr << "circle " << to_string(i + 1) << ": diameter = " << to_string(OD) << "(+/-: " << to_string(tolleranceOD) << ")" << endl;
		}
		else {
			cerr << "circle " << to_string(i + 1) << ": ID = " << to_string(ID) << "(+/-: " << to_string(tolleranceID) << "), OD = " << to_string(OD) << "(+/-: " << to_string(tolleranceOD) << ")" << endl;
		}
		for (int j = 0; j < int(concCircles[i].group.size()); j++)
		{

			//Drawsover the manipulated image yellow circles for where it found the ID/OD
			polylines(IMGInfo.manipulated, concCircles[i].group[j].contour, true, cv::Scalar(0, 255, 255), 1, 8, 0);
		}
		if (i == 0) {
			IMGInfo.ID = ID;
			IMGInfo.OD = OD;
			IMGInfo.IDVariance = tolleranceID;
			IMGInfo.ODVariance = tolleranceOD;
			IMGInfo.multiConcentricCircleDetected = false;
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

	for (int i = 0; i < int(defects.size()); i++) {
		//Draws over the manipulated image the defects it found in red
		polylines(IMGInfo.manipulated, defects[i], true, cv::Scalar(0, 0, 255), 1, 8, 0);
	}


}

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

contourInfo Imageanalysis::IsContourCircle(std::vector<cv::Point> contour) {
	double height = cv::minAreaRect(contour).size.height;
	double width = cv::minAreaRect(contour).size.width;

	cv::Point2f center;
	float radius = 0;
	minEnclosingCircle(contour, center, radius); //enclose the individual contour lines within a circle

	double circleCheck = fabs(radius - height / 2); //gets the absolute value of the measured circle area difference
	double circleCheck2 = fabs(radius - width / 2);

	contourInfo info;
	info.center = center;
	info.contour = contour;
	info.radius = radius;

	//if the difference of the circle area is within the tollerance range then the contour is a circle
	if (circleCheck < (radius / currentImageSettings.CircleTolerance) && circleCheck2 < (radius / currentImageSettings.CircleTolerance)) {
		info.isCircle = true;
	}

	return (info);//return contourinfo
}

vector<ConcCircles> Imageanalysis::SortCircles(vector<contourInfo> circleInfo) {
	int concGroupPos = 0;

	vector<ConcCircles> concentricCircles(0);
	//for every circle inside data array
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
			//if two circles have the same center point within a tollerance of +/- 2 pixels assign the circles to the same group
			if (fabs(circleInfo[i].center.x - circleInfo[j].center.x) < 10 && fabs(circleInfo[i].center.x - circleInfo[j].center.x) < 10) {

				circleInfo[j].concGroup = circleInfo[i].concGroup; //mark the circle to hage the same concentric grouping as what it is compared to
																   //concentricCircles.resize(concentricCircles.size() + 1);
				concentricCircles[concentricCircles.size() - 1].group.resize(concentricCircles[concentricCircles.size() - 1].group.size() + 1);
				concentricCircles[concentricCircles.size() - 1].group[concentricCircles[concentricCircles.size() - 1].group.size() - 1] = circleInfo[i];
			}
			//assign the last circle in the array to a new group if it is a unique concentric circle
			else if (j == int(circleInfo.size()) - 1) {
				concGroupPos++;
				circleInfo[i].concGroup = concGroupPos;
				concentricCircles.resize(concentricCircles.size() + 1);
				concentricCircles[concentricCircles.size() - 1].group.resize(concentricCircles[concentricCircles.size() - 1].group.size() + 1);
				concentricCircles[concentricCircles.size() - 1].group[concentricCircles[concentricCircles.size() - 1].group.size() - 1] = circleInfo[i];
			}
		}
	}
	// sort the returned value of the concentric circles to determine the ID and OD

	for (int i = 0; i < int(concentricCircles.size()); i++) {
		double ID = (float)999999999;
		double OD = 0;
		for (int j = 0; j < int(concentricCircles[i].group.size()); j++) {
			if (ID > (concentricCircles[i].group[j].radius * 2)) {
				ID = (concentricCircles[i].group[j].radius * 2);
				concentricCircles[i].IDrect = concentricCircles[i].group[j].rect;
			}
			if (OD < (concentricCircles[i].group[j].radius * 2)) {
				OD = (concentricCircles[i].group[j].radius * 2);
				concentricCircles[i].ODrect = concentricCircles[i].group[j].rect;
			}
		}
	}
	return concentricCircles;
}


