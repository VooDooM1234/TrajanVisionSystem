#include "LogPreviewForm.h"
#include "MyForm.h"
#include "LogForm.h"
namespace GlassVisionSystemV105 {

	std::vector<LogInfo> LogPreviewForm::GetDisplayLogs() {
		try {
			std::vector<LogInfo> result;
			Form^ mainform = this->Parent->FindForm();
			LogForm^ logForm;
			logForm = ((MyForm^)mainform)->logSelectionForm;
			result = logForm->GetLogs();
			return result;
		}
		catch(...)
		{ }
	}

}