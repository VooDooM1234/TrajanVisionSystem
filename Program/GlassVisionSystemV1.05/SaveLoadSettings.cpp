#include "Structs.h"
#include <iostream>
#include <fstream>
#include <direct.h>
#include "SaveLoadSettings.h"
#include <ctime>

#include <windows.h>
#include <Lmcons.h>


using namespace std;

void LoadImageSettingsFromFile(string filename) {
	ImageSettings result;
	string line;
	ifstream myfile(filename);
	if (!myfile.is_open()) {
		std::string directory = workingdir();
		directory.append("ImageSettings\\");
		mkdir(directory.c_str());
		myfile.open(filename);
		if (!myfile.is_open()) {
			ImageSettings temp;
			temp.CannyThresholdA = 10;
			temp.CannyThresholdB = 20;
			temp.CircleTolerance = 10;
			temp.ExposureTime = 100000;
			temp.MeasuredPixels = 1;
			temp.DesiredOD = 1;

			SaveImageSettings(temp, "CurrentSettings");
			myfile.open("ImageSettings/CurrentSettings.txt");
			
		}
	}
	getline(myfile, line);
	result.CannyThresholdA = atoi(line.c_str());

	getline(myfile, line);
	result.CannyThresholdB = atoi(line.c_str());

	getline(myfile, line);
	result.CircleTolerance = atoi(line.c_str());

	getline(myfile, line);
	result.ExposureTime = atoi(line.c_str());

	getline(myfile, line);
	result.MeasuredPixels = atoi(line.c_str());

	getline(myfile, line);
	result.DesiredOD = atoi(line.c_str());

	myfile.close();
	currentImageSettings = result;
	currentImageSettings.PixToMMRatio = result.DesiredOD / result.MeasuredPixels;

}
void LoadImageSettingsFromGUI() {

}
void SaveImageSettings(ImageSettings settings, string filename) {
	std::string fileLocation = "ImageSettings/" + filename + ".txt";
	std::replace(fileLocation.begin(), fileLocation.end(), ' ', '_');
	std::replace(fileLocation.begin(), fileLocation.end(), ':', '-');

	ofstream myfile(fileLocation);
	if (!myfile.is_open())
	{
		std::string directory = workingdir();
		directory.append(fileLocation);
		mkdir(directory.c_str());
		myfile.open(fileLocation);
	}
	myfile << settings.CannyThresholdA << std::endl;
	myfile << settings.CannyThresholdB << std::endl;
	myfile << settings.CircleTolerance << std::endl;
	myfile << settings.ExposureTime << std::endl;
	myfile << settings.MeasuredPixels << std::endl;
	myfile << settings.DesiredOD << std::endl;

	myfile.close();
}
ProductSettings LoadProductSettings(string filename) {
	ProductSettings result;
	string line;
	ifstream myfile(filename);
	if (!myfile.is_open()) {
		std::string directory = workingdir();
		directory.append("ProductSettings\\");
		mkdir(directory.c_str());
		myfile.open(filename);
		if (!myfile.is_open()) {
			currentLog.result = "No File Selected/Failed Loading Settings";
			SaveLog(currentLog);
			return result;
		}
	}

	getline(myfile, line);
	result.partNumber = line.c_str();

	getline(myfile, line);
	result.Description = line.c_str();

	getline(myfile, line);
	result.numChutes = atoi(line.c_str());

	getline(myfile, line);
	result.targetID = atof(line.c_str());

	getline(myfile, line);
	result.targetOD = atof(line.c_str());
	result.listOfChuteSpecs.resize(5);
	getline(myfile, line);

	for (int i = 0; i < 5; i++) {
		result.listOfChuteSpecs[i].chutetype = (Chute)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].IDTolerance = atof(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].ODTolerance = atof(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].chip = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].crack = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].noDefects = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].defectsOutOfRange = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].defectsWithinRange = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].IDGood = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].IDHigher = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].IDLower = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].ODGood = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].ODHigher = (bool)atoi(line.c_str());

		getline(myfile, line);
		result.listOfChuteSpecs[i].ODLower = (bool)atoi(line.c_str());

		getline(myfile, line);
		if (line.c_str() == "{EOCS}") {
			break;
		}
	}
	int a = 0;
	DefectParameters newParameter;
	while (!myfile.eof())
	{
		result.listOfDefects.push_back(newParameter);
		getline(myfile, line);
		result.listOfDefects[a].defectCount = atoi(line.c_str());

		getline(myfile, line);
		result.listOfDefects[a].totalDefectArea = atof(line.c_str());

		getline(myfile, line);
		result.listOfDefects[a].largestDefectArea = atof(line.c_str());

		getline(myfile, line);
		result.listOfDefects[a].totalPointsCount = atoi(line.c_str());

		getline(myfile, line);
		result.listOfDefects[a].largestPointCount = atoi(line.c_str());

		a++;
	}

	currentLog.result = "Loading '" + result.partNumber + "' Successful!";
	return result;

}

void SaveProductSettings(ProductSettings settings) {
	SaveProductSettings(settings, "ProductSettings");
}

void SaveProductSettings(ProductSettings settings, std::string folderLocation) {

	LogInfo newLog;
	newLog.execution = "{USER} Attempting to Save PartNumber: " + settings.partNumber;
	std::string fileLocation;
	std::string fileName;
	if (folderLocation != "ProductSettings") {
		time_t _tm = time(NULL);
		tm* time = localtime(&_tm);
		std::string currentTime = asctime(time);
		currentTime = currentTime.substr(0, currentTime.size() - 1);
		fileLocation = folderLocation + "/" + settings.partNumber + "---" + currentTime + ".txt";
		fileName = settings.partNumber + "---" + asctime(time) + ".txt";
	}
	else {
		fileLocation = folderLocation + "/" + settings.partNumber + ".txt";
		fileName = settings.partNumber + ".txt";
	}
	std::replace(fileLocation.begin(), fileLocation.end(), ' ', '_');
	std::replace(fileLocation.begin(), fileLocation.end(), ':', '-');

	struct stat buffer;
	//checks if file to be saved currently exists
	if (stat(fileLocation.c_str(), &buffer) == 0) {
		//is file currently exists, display message asking the user if they wish to override current settings
		const int result = MessageBox(NULL, L"Overrite Existing Part Number Variables?", L"Part Number Already Exists", MB_YESNO | MB_ICONQUESTION);
		if (result == IDYES) {
			if (folderLocation == "ProductSettings") {
				newLog.result = "Part Number already Exists, {USER} Decided to override existing settings";
				SaveLog(newLog);
				//previous settings will be backuped before overriding.
				ProductSettings temp = LoadProductSettings(fileLocation);
				SaveProductSettings(temp, "RecipeBackup");
			}
		}
		else {
			//record log stating the user decided to abort save
			newLog.result = "Part Number already Exists, {USER} Decided to abort Save";
			SaveLog(newLog);
			return;
		}
	}
	else {
		//record log stating either backup file made or new recipe created
		if (folderLocation != "ProductSettings") {
			newLog.result = "Backing up Previous recipe '" + settings.partNumber + "', backup file location: " + fileLocation;
		}
		else {
			newLog.result = "No existing Part Number Found, A New Recipe has been created, Saving to: " + fileLocation;
		}
		SaveLog(newLog);
	}

	ofstream file(fileLocation);
	//if file directory is not found, create the directory
	if (!file.is_open())
	{
		std::string directory = workingdir();
		directory.append(folderLocation + "\\");
		mkdir(directory.c_str());
		file.close();
		newLog.result = "Error locating folder directory, Creating Folder Location";
		SaveLog(newLog);
	}
	else
		file.close();

	//override/save new recipe data
	ofstream myfile(fileLocation);


	myfile << settings.partNumber << std::endl;
	myfile << settings.Description << std::endl;
	myfile << settings.numChutes << std::endl;
	myfile << settings.targetID << std::endl;
	myfile << settings.targetOD << std::endl;

	for each (ChuteSpecifications var in settings.listOfChuteSpecs)
	{
		myfile << var.chutetype << std::endl;
		myfile << var.IDTolerance << std::endl;
		myfile << var.ODTolerance << std::endl;

		myfile << var.chip << std::endl;
		myfile << var.crack << std::endl;

		myfile << var.noDefects << std::endl;
		myfile << var.defectsOutOfRange << std::endl;
		myfile << var.defectsWithinRange << std::endl;

		myfile << var.IDGood << std::endl;
		myfile << var.IDHigher << std::endl;
		myfile << var.IDLower << std::endl;

		myfile << var.ODGood << std::endl;
		myfile << var.ODHigher << std::endl;
		myfile << var.ODLower << std::endl;
	}
	//End Of Chute Settings
	myfile << "{EOCS}" << std::endl;
	for (int i = 0; i < settings.listOfDefects.size(); i++) {

		myfile << settings.listOfDefects[i].defectCount << std::endl;
		myfile << settings.listOfDefects[i].totalDefectArea << std::endl;
		myfile << settings.listOfDefects[i].largestDefectArea << std::endl;
		myfile << settings.listOfDefects[i].totalPointsCount << std::endl;
		myfile << settings.listOfDefects[i].largestPointCount;
		if (i != settings.listOfDefects.size() - 1) {
			myfile << std::endl;
		}
	}

	myfile.close();

}

std::vector<LogInfo> LoadLog() {
	std::vector<LogInfo> result;
	string line;
	ifstream myfile("LOG.log");
	if (!myfile.is_open()) {
			currentLog.result = "No System Logs Exist, Log File Cannot be found.";
			SaveLog(currentLog);
			return result;
		}
	
while (!myfile.eof())
{
	//get line of single log and split it at first ;
	getline(myfile, line,  ';');
	if (line == "") {
		break;
	}
	LogInfo newInfo;

	istringstream f(line);
	std::string s;
	//time_t _tm = time(NULL);
	tm logTime;

	getline(f, s, ',');
	logTime.tm_year = stoi(s);
	getline(f, s, ',');
	logTime.tm_mon = stoi(s);
	getline(f, s, ',');
	logTime.tm_mday = stoi(s);
	getline(f, s, ',');
	logTime.tm_hour = stoi(s);
	getline(f, s, ',');
	logTime.tm_min = stoi(s);
	getline(f, s, ',');
	logTime.tm_sec = stoi(s);
	getline(f, s, ',');
	logTime.tm_wday = stoi(s);
	newInfo.date = new tm(logTime);

	getline(myfile, line, ';');
	newInfo.user = line;

	getline(myfile, line, ';');
	newInfo.execution = line;

	getline(myfile, line, '\n');
	newInfo.result = line;

	result.push_back(newInfo);
}
	return result;
}


void SaveLog(LogInfo log) {
	time_t _tm = time(NULL);
	//log.execution.find("{USER}");
	log.user = sysStringtoStd(System::Environment::UserName);
	//replase {USER} with windows system login username for log files

	while (true) {
		if (log.execution.find("{USER}") != std::string::npos)
			log.execution.replace(log.execution.find("{USER}"), std::strlen("{USER}"), log.user);
		else
			break;
	}
	while (true) {
		if (log.result.find("{USER}") != std::string::npos)
			log.result.replace(log.result.find("{USER}"), std::strlen("{USER}"), log.user);
		else
			break;
	}
	log.date = localtime(&_tm);

	std::ofstream file;

	// std::ios::app is the open mode "append", will not overwrite file
	file.open("LOG.log", std::ios::app);

	std::string str = std::to_string(log.date->tm_year);
	str += "," + std::to_string(log.date->tm_mon);
	str += "," + std::to_string(log.date->tm_mday);
	str += "," + std::to_string(log.date->tm_hour);
	str += "," + std::to_string(log.date->tm_min);
	str += "," + std::to_string(log.date->tm_sec);
	str += "," + std::to_string(log.date->tm_wday);

	str = str + ";" + log.user;

	str = str + ";" + log.execution;
	str = str + ";" + log.result;

	file << str << std::endl;
	file.close();
}

