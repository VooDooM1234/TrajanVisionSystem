#include "ImageSettingsForm.h"
#include "IMGProcessing.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void ImageSettingsForm(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GlassVisionSystemV105::ImageSettingsForm form;

}



