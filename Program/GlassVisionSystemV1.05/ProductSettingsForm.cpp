#include "ProductSettingsForm.h"
#include "ChuteSettingsForm.h"

#include "MyForm.h"
#include <sstream>
#include <string>
#using <mscorlib.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace GlassVisionSystemV105;
namespace GlassVisionSystemV105 {

	//seporated product save from form header file to prevent compile errors
	void ProductSettingsForm::SaveProduct() {
		ProductSettings savedSettings;

		//gets the main form
		Form ^ mainform =this->Parent->FindForm();

		//gets the chute settings forms from the main form
		List<ChuteSettingsForm^>^ chtSetForms;
		chtSetForms = ((MyForm^)mainform)->lstChuteSettingForms;

		//
		savedSettings.listOfChuteSpecs.resize(5);
		int temp = 0;
		for each (ChuteSettingsForm^ var in chtSetForms)
		{
			savedSettings.listOfChuteSpecs[temp] = var->ChuteSpecs();
			temp++;
		}

		DataGridView^ defectDataGrid = this->dgvDefects;
		try {

			//converts system::string to std::string and records value to the saved settings
			savedSettings.Description = msclr::interop::marshal_as<std::string>(this->tbxDescription->Text->ToString());

			savedSettings.partNumber = msclr::interop::marshal_as<std::string>(this->tbxPartNumber->Text->ToString());
			savedSettings.numChutes = Int32::Parse(this->nudNumChutes->Value.ToString());
			savedSettings.targetID = float::Parse(this->nudID->Value.ToString());
			savedSettings.targetOD = float::Parse(this->nudOD->Value.ToString());

			for (int i = 0; i < defectDataGrid->Rows->Count - 1; i++) {
				DefectParameters tempParameters;
				for (int j = 0; j < defectDataGrid->Rows[i]->Cells->Count; j++) {
					if (defectDataGrid->Rows[i]->Cells[j]->Value == nullptr)
						defectDataGrid->Rows[i]->Cells[j]->Value = (Object^)0;
				}
				tempParameters.defectCount = Int32::Parse(defectDataGrid->Rows[i]->Cells[0]->Value->ToString());
				tempParameters.totalDefectArea = float::Parse(defectDataGrid->Rows[i]->Cells[1]->Value->ToString());
				tempParameters.largestDefectArea = float::Parse(defectDataGrid->Rows[i]->Cells[2]->Value->ToString());
				tempParameters.totalDefectPerimeter = int::Parse(defectDataGrid->Rows[i]->Cells[3]->Value->ToString());
				tempParameters.largestDefectPerimeter = int::Parse(defectDataGrid->Rows[i]->Cells[4]->Value->ToString());
				savedSettings.listOfDefects.push_back(tempParameters);
			}

			SaveProductSettings(savedSettings);
			MessageBox::Show("Save Successful!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		catch(...){
			// Displays the MessageBox.
			MessageBox::Show("Error Saving", "Error Saving - Please Check all inputs and try again", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
	}

	void ProductSettingsForm::populateSettings(ProductSettings settings) {
		tbxPartNumber->Text = gcnew String(settings.partNumber.c_str());
		tbxDescription->Text = gcnew String(settings.Description.c_str());
		nudID->Value = (System::Decimal)settings.targetID;
		nudOD->Value = (System::Decimal)settings.targetOD;
		nudNumChutes->Value = (System::Decimal)settings.numChutes;

		int i = 0;
		dgvDefects->Rows->Clear();
		for each (DefectParameters var in settings.listOfDefects)
		{
			dgvDefects->Rows->Add();
			dgvDefects->Rows[i]->Cells[0]->Value = var.defectCount;
			dgvDefects->Rows[i]->Cells[1]->Value = var.totalDefectArea;
			dgvDefects->Rows[i]->Cells[2]->Value = var.largestDefectArea;
			dgvDefects->Rows[i]->Cells[3]->Value = var.totalDefectPerimeter;
			dgvDefects->Rows[i]->Cells[4]->Value = var.largestDefectPerimeter;
			i++;
		}
		//gets mainform 
		Form ^ mainform = this->Parent->FindForm();
		//gets the chute settings forms from the main form
		List<ChuteSettingsForm^>^ chtSetForms;
		chtSetForms = ((MyForm^)mainform)->lstChuteSettingForms;
		i = 0;
		for each (ChuteSettingsForm^ var in chtSetForms)
		{
			var->SetFormVariables(settings.listOfChuteSpecs[i]);
			i++;
		}
	}


}
