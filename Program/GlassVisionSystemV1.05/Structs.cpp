#include "Structs.h"
#include <msclr\marshal_cppstd.h>

SelectedInfoPanelAForm CurrentPannelA = InfoForm;
SelectedInfoPanelBForm CurrentPannelB = cameraForm;

ProductSettings currentProductSettings;
ImageSettings currentImageSettings;
std::vector<LogInfo> logList;
LogInfo currentLog;


std::string workingdir()
{
	char buf[256];
	GetCurrentDirectoryA(256, buf);
	std::string result = std::string(buf);
	result.append("\\");
	return result;
}

void InitialiseProductSettings() {
	currentProductSettings.listOfChuteSpecs.resize(5);
}

std::string sysStringtoStd(System::String^ Str) {
	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(Str);
	return standardString;
}

System::String^ getChuteString(Chute chute) {
	switch (chute) {
	case Tuscos:
		return gcnew System::String("TUSCoS");
	case A:
		return gcnew System::String("Chute A");
	case B:
		return gcnew System::String("Chute B");
	case C:
		return gcnew System::String("Chute C");
	case D:
		return gcnew System::String("Chute D");
	default:
		break;
	}
}