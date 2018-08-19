#include "LogForm.h"
#include "MyForm.h"
#include "LogPreviewForm.h"

namespace GlassVisionSystemV105 {

	System::Void LogForm::lstItems_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		std::vector<LogInfo> DisplayLogs;
		try {
			for each (LogInfo var in logList)
			{
				String^ s = gcnew String(var.displayString.c_str());
				if (this->lstItems->SelectedItem->ToString()->Equals(s)) {
					DisplayLogs.push_back(var);
				}
			}
			//gets the main form
			Form ^ mainform = this->Parent->FindForm();

			LogPreviewForm^ LPForm;
			LPForm = ((MyForm^)mainform)->LPForm;

			LPForm->UpdateDisplay(DisplayLogs);
		}
		catch(...){

		}
	}
}