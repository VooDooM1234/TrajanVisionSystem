#include "MyForm.h"
#include "IMGProcessing.h"

using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GlassVisionSystemV105::MyForm form;
	Application::Run(%form);

}

