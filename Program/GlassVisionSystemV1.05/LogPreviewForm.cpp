#include "LogPreviewForm.h"
#include "MyForm.h"
#include "LogForm.h"
namespace GlassVisionSystemV105 {

	std::vector<LogInfo> LogPreviewForm::GetDisplayLogs() {
		std::vector<LogInfo> result;

		try {
			Form^ mainform = this->Parent->FindForm();
			LogForm^ logForm;
			logForm = ((MyForm^)mainform)->logSelectionForm;
			if (logForm->rbBatch->Enabled == true)
				result = logForm->GetLogs();
			return result;
		}
		catch (...)
		{
			return result;
			//return result;
		}
	}
	std::vector<BatchInfo> LogPreviewForm::GetDisplayBatches() {
		std::vector<BatchInfo> result;
		try {
			Form^ mainform = this->Parent->FindForm();
			LogForm^ logForm;
			logForm = ((MyForm^)mainform)->logSelectionForm;
			if (logForm->rbBatch->Enabled == true)
				result = logForm->GetBatches();
			return result;
		}
		catch (...)
		{
			return result;
			//return NULL;
		}
	}
}