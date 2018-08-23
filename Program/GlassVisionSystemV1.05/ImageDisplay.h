#pragma once

#include "Structs.h"

public class Imageanalysis {

public:
	ImageInformation IMGInfo;
public:
	void CameraInitialization(int camNumber, std::string CamName);
	void PylonInitialization(int camNumber, std::string Camname);
	void Imageanalysis::OpenCVCamInitialization(int camNumber, std::string camName);
public:
	void Imageanalysis::CustomIDODDetection();
	void ProcessImage();
	void ProcessPylonImage();
private:
	void generateManipulated();
private:
	std::vector<std::vector<cv::Point>> DefectCheck(std::vector<ConcCircles> concCircles, std::vector<std::vector<cv::Point>> defects);
private:
	bool pointInEllipse(cv::Point point, cv::RotatedRect ellipse);
private:
	contourInfo IsContourCircle(std::vector<cv::Point> contour, int SmallestRadius);
private:
	std::vector<ConcCircles> SortCircles(std::vector<contourInfo> circleInfo);
};

extern Imageanalysis CameraA;
extern Imageanalysis CameraB;