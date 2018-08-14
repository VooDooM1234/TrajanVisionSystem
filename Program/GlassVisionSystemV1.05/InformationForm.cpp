#include "InformationForm.h"
#include "IMGProcessing.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void InformationForm(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GlassVisionSystemV105::InformationForm form;

}

