#include "LogForm.h"
#include "MyForm.h"
#include "LogPreviewForm.h"

namespace GlassVisionSystemV105 {

	std::vector<LogInfo> LogForm::GetLogs() {
		std::vector<LogInfo> DisplayLogs;
		try {
			for each (LogInfo var in logList)
			{
				String^ s = gcnew String(var.displayString.c_str());
				if (this->lstItems->SelectedItem->ToString()->Equals(s)) {
					DisplayLogs.push_back(var);
				}
			}
		}
		catch(...){}
		return DisplayLogs;
	}

	std::vector<BatchInfo> LogForm::GetBatches() {
		std::vector<BatchInfo> DisplayLogs;
		try {
			for each (BatchInfo var in batchHistory)
			{
				String^ s = gcnew String(var.displayString.c_str());
				if (this->lstItems->SelectedItem->ToString()->Equals(s)) {
					DisplayLogs.push_back(var);
				}
			}
		}
		catch (...) {}
		return DisplayLogs;
	}

	System::Void LogForm::lstItems_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		if (rbLogs->Checked == true) {
			std::vector<LogInfo> DisplayLogs;
			try {
				DisplayLogs = GetLogs();
				//gets the main form
				Form ^ mainform = this->Parent->FindForm();

				LogPreviewForm^ LPForm;
				LPForm = ((MyForm^)mainform)->LPForm;
				LPForm->clearTimeFilter();
				LPForm->UpdateLogDisplay(DisplayLogs);
			}
			catch (...) {

			}
		}
		else {
			std::vector<BatchInfo> batches;
			try {
				batches = GetBatches();
				//gets the main form
				Form ^ mainform = this->Parent->FindForm();

				LogPreviewForm^ LPForm;
				LPForm = ((MyForm^)mainform)->LPForm;
				LPForm->clearTimeFilter();
				LPForm->UpdateBatchDisplay(batches);
			}
			catch (...) {

			}
		}
	}
}