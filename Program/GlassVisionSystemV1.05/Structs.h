#pragma once
#pragma unmanaged
#include "opencv2/highgui/highgui.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/imgproc.hpp"
#include <opencv2/core/core.hpp>
#pragma managed
#include <iostream>
#include <vector>
#include <stdio.h>
#include <windows.h>

//#include <pylon/PylonGUI.h>
#pragma unmanaged
#include <pylon/PylonIncludes.h>
#include <pylon/usb/PylonUsbIncludes.h>
#include <pylon/usb/BaslerUsbInstantCamera.h>
#pragma managed

//5#include <pylon/usb/BaslerUsbInstantCamera.h>
using namespace Basler_UsbCameraParams;
using namespace Pylon;

std::string sysStringtoStd(System::String^ Str);


std::string workingdir();
using namespace System::Collections::Generic;


const double PI = 3.14159265358979323846;


enum Chute {
	Tuscos, A, B, C, D
};

System::String^ getChuteString(Chute chute);

enum SelectedInfoPanelAForm {
	InfoForm,
	Debug,
	ProductSelection,
	ProductCreation,
	LogSelection
};

extern SelectedInfoPanelAForm CurrentPannelA;

enum SelectedInfoPanelBForm {
	cameraForm,
	chuteForm,
	LogView
};

extern SelectedInfoPanelBForm CurrentPannelB;

typedef struct {
	std::vector<cv::Point, std::allocator <cv::Point>> contour; //contour its self
	cv::Point2f center = { 0,0 }; //contour center point
	double radius = 0; //contour estimated radius
	bool isCircle = false; //true if contour is a circle
	int concGroup = 0; //grouping of concentric circles within 2 pixels, 0 = group not assigned
	cv::RotatedRect rect; //minimum area rectangle of contour

} contourInfo;



typedef struct {
	int CannyThresholdA = 0, CannyThresholdB = 0;
	int CircleTolerance = 0, ExposureTime = 100;
	int MeasuredPixels = 1;
	double DesiredOD = 1;
	double PixToMMRatio = 1;

}ImageSettings;

extern ImageSettings currentImageSettings; //loaded values to specify current camera settings for image anaysis

typedef struct {
	int defectCount = 0;
	double totalDefectArea = 0, largestDefectArea = 0;
	int totalPointsCount = 0, largestPointCount = 0;
}DefectParameters;

typedef struct {
	Chute chutetype;

	double IDTolerance = 0, ODTolerance = 0;
	bool reject = false, chip = false, crack = false;
	bool noDefects = false, defectsWithinRange = false, defectsOutOfRange = false;
	bool IDGood = false, IDLower = false, IDHigher = false;
	bool ODGood = false, ODLower = false, ODHigher = false;

}ChuteSpecifications;


typedef struct {
	std::string partNumber = "";
	int numChutes = 1;
	std::string Description = "";
	double targetID = 0, targetOD = 1;

	std::vector<ChuteSpecifications> listOfChuteSpecs;
	std::vector<DefectParameters> listOfDefects;
}ProductSettings;

extern ProductSettings currentProductSettings; //loaded values to specify current product settings and chute information

void InitialiseProductSettings();

typedef struct {
	tm* date;
	std::string execution = "";
	std::string result = "";
	std::string user = "";
	std::string displayString = "";
} LogInfo;

extern LogInfo currentLog;
extern std::vector<LogInfo> logList;

typedef struct {
	cv::VideoCapture ImageCapture;

	cv::Mat original, grayscale, canny, binaryThreshold, manipulated;
	double ID, OD, IDVariance, ODVariance;
	std::vector<std::vector<cv::Point>> defects;
	Chute chute = Tuscos;
	int chutePriority = 10;
	int defectCount, camNumber;
	std::string camName;
	bool multiConcentricCircleDetected = false;

	CBaslerUsbInstantCamera *camera;
}ImageInformation;

typedef struct {
	std::vector<contourInfo> group;
	cv::RotatedRect IDrect, ODrect;
	cv::Point2f IDCenter = cv::Point2f(0,0), ODCenter = cv::Point2f(0,0);

} ConcCircles;
