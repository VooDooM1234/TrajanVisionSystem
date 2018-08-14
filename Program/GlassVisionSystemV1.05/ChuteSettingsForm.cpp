#include "ChuteSettingsForm.h"

namespace GlassVisionSystemV105 {
	void ChuteSettingsForm::SetFormVariables(ChuteSpecifications specs) {
		cbxChuteDestination->SelectedIndex = specs.chutetype;
		nudIDTol->Value = (System::Decimal)specs.IDTolerance;
		nudODTol->Value = (System::Decimal)specs.ODTolerance;

		cbxIDlow->Checked = specs.IDLower;
		cbxIDHigh->Checked = specs.IDHigher;
		cbxIDInRange->Checked = specs.IDGood;

		cbxODLow->Checked = specs.ODLower;
		cbxODHigh->Checked = specs.ODHigher;
		cbxODInRange->Checked = specs.ODGood;

		cbxChip->Checked = specs.chip;
		cbxCrack->Checked = specs.crack;
		rbNoDefects->Checked = specs.noDefects;
		rbDefectOutOfRange->Checked = specs.defectsOutOfRange;
		rbDefectsWithinRange->Checked = specs.defectsWithinRange;

	}
}