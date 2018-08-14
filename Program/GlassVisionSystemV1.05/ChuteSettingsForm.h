#include "Structs.h"
#pragma once

namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChuteSettingsForm
	/// </summary>
	public ref class ChuteSettingsForm : public System::Windows::Forms::Form
	{
	public:
		ChuteSettingsForm(void)
		{
			InitializeComponent();
			cbxChuteDestination->SelectedIndex = 0;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChuteSettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cbxChuteDestination;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  nudIDTol;
	private: System::Windows::Forms::NumericUpDown^  nudODTol;
	private: System::Windows::Forms::CheckBox^  cbxIDlow;
	private: System::Windows::Forms::CheckBox^  cbxIDHigh;
	private: System::Windows::Forms::CheckBox^  cbxODHigh;
	private: System::Windows::Forms::CheckBox^  cbxODLow;
	private: System::Windows::Forms::CheckBox^  cbxODInRange;
	private: System::Windows::Forms::CheckBox^  cbxIDInRange;
	private: System::Windows::Forms::CheckBox^  cbxCrack;
	private: System::Windows::Forms::CheckBox^  cbxChip;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  rbDefectOutOfRange;

	private: System::Windows::Forms::RadioButton^  rbDefectsWithinRange;
	private: System::Windows::Forms::RadioButton^  rbNoDefects;
	private: System::Windows::Forms::Panel^  panel1;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbxChuteDestination = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nudIDTol = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudODTol = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbxIDlow = (gcnew System::Windows::Forms::CheckBox());
			this->cbxIDHigh = (gcnew System::Windows::Forms::CheckBox());
			this->cbxODHigh = (gcnew System::Windows::Forms::CheckBox());
			this->cbxODLow = (gcnew System::Windows::Forms::CheckBox());
			this->cbxODInRange = (gcnew System::Windows::Forms::CheckBox());
			this->cbxIDInRange = (gcnew System::Windows::Forms::CheckBox());
			this->cbxCrack = (gcnew System::Windows::Forms::CheckBox());
			this->cbxChip = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbDefectOutOfRange = (gcnew System::Windows::Forms::RadioButton());
			this->rbDefectsWithinRange = (gcnew System::Windows::Forms::RadioButton());
			this->rbNoDefects = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudIDTol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudODTol))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Chute Destination:";
			// 
			// cbxChuteDestination
			// 
			this->cbxChuteDestination->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxChuteDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cbxChuteDestination->FormattingEnabled = true;
			this->cbxChuteDestination->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"TUSCoS", L"Chute A", L"Chute B", L"Chute C",
					L"Chute D"
			});
			this->cbxChuteDestination->Location = System::Drawing::Point(131, 3);
			this->cbxChuteDestination->Name = L"cbxChuteDestination";
			this->cbxChuteDestination->Size = System::Drawing::Size(121, 24);
			this->cbxChuteDestination->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Inner Diameter Tolerance (%):";
			this->label2->Click += gcnew System::EventHandler(this, &ChuteSettingsForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Outer Diameter Tolerance (%):";
			// 
			// nudIDTol
			// 
			this->nudIDTol->DecimalPlaces = 1;
			this->nudIDTol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudIDTol->Location = System::Drawing::Point(207, 18);
			this->nudIDTol->Name = L"nudIDTol";
			this->nudIDTol->Size = System::Drawing::Size(50, 22);
			this->nudIDTol->TabIndex = 5;
			this->nudIDTol->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// nudODTol
			// 
			this->nudODTol->DecimalPlaces = 1;
			this->nudODTol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudODTol->Location = System::Drawing::Point(207, 47);
			this->nudODTol->Name = L"nudODTol";
			this->nudODTol->Size = System::Drawing::Size(50, 22);
			this->nudODTol->TabIndex = 6;
			this->nudODTol->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// cbxIDlow
			// 
			this->cbxIDlow->AutoSize = true;
			this->cbxIDlow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxIDlow->Location = System::Drawing::Point(16, 77);
			this->cbxIDlow->Name = L"cbxIDlow";
			this->cbxIDlow->Size = System::Drawing::Size(50, 20);
			this->cbxIDlow->TabIndex = 7;
			this->cbxIDlow->Text = L"< ID";
			this->cbxIDlow->UseVisualStyleBackColor = true;
			// 
			// cbxIDHigh
			// 
			this->cbxIDHigh->AutoSize = true;
			this->cbxIDHigh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxIDHigh->Location = System::Drawing::Point(16, 100);
			this->cbxIDHigh->Name = L"cbxIDHigh";
			this->cbxIDHigh->Size = System::Drawing::Size(50, 20);
			this->cbxIDHigh->TabIndex = 8;
			this->cbxIDHigh->Text = L"> ID";
			this->cbxIDHigh->UseVisualStyleBackColor = true;
			// 
			// cbxODHigh
			// 
			this->cbxODHigh->AutoSize = true;
			this->cbxODHigh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxODHigh->Location = System::Drawing::Point(87, 100);
			this->cbxODHigh->Name = L"cbxODHigh";
			this->cbxODHigh->Size = System::Drawing::Size(57, 20);
			this->cbxODHigh->TabIndex = 10;
			this->cbxODHigh->Text = L"> OD";
			this->cbxODHigh->UseVisualStyleBackColor = true;
			this->cbxODHigh->CheckedChanged += gcnew System::EventHandler(this, &ChuteSettingsForm::cbxODHigh_CheckedChanged);
			// 
			// cbxODLow
			// 
			this->cbxODLow->AutoSize = true;
			this->cbxODLow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxODLow->Location = System::Drawing::Point(87, 77);
			this->cbxODLow->Name = L"cbxODLow";
			this->cbxODLow->Size = System::Drawing::Size(57, 20);
			this->cbxODLow->TabIndex = 9;
			this->cbxODLow->Text = L"< OD";
			this->cbxODLow->UseVisualStyleBackColor = true;
			this->cbxODLow->CheckedChanged += gcnew System::EventHandler(this, &ChuteSettingsForm::cbxODLow_CheckedChanged);
			// 
			// cbxODInRange
			// 
			this->cbxODInRange->AutoSize = true;
			this->cbxODInRange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxODInRange->Location = System::Drawing::Point(168, 100);
			this->cbxODInRange->Name = L"cbxODInRange";
			this->cbxODInRange->Size = System::Drawing::Size(130, 20);
			this->cbxODInRange->TabIndex = 12;
			this->cbxODInRange->Text = L"OD Within Range";
			this->cbxODInRange->UseVisualStyleBackColor = true;
			// 
			// cbxIDInRange
			// 
			this->cbxIDInRange->AutoSize = true;
			this->cbxIDInRange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxIDInRange->Location = System::Drawing::Point(168, 77);
			this->cbxIDInRange->Name = L"cbxIDInRange";
			this->cbxIDInRange->Size = System::Drawing::Size(123, 20);
			this->cbxIDInRange->TabIndex = 11;
			this->cbxIDInRange->Text = L"ID Within Range";
			this->cbxIDInRange->UseVisualStyleBackColor = true;
			// 
			// cbxCrack
			// 
			this->cbxCrack->AutoSize = true;
			this->cbxCrack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxCrack->Location = System::Drawing::Point(22, 70);
			this->cbxCrack->Name = L"cbxCrack";
			this->cbxCrack->Size = System::Drawing::Size(62, 20);
			this->cbxCrack->TabIndex = 14;
			this->cbxCrack->Text = L"Crack";
			this->cbxCrack->UseVisualStyleBackColor = true;
			// 
			// cbxChip
			// 
			this->cbxChip->AutoSize = true;
			this->cbxChip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxChip->Location = System::Drawing::Point(22, 47);
			this->cbxChip->Name = L"cbxChip";
			this->cbxChip->Size = System::Drawing::Size(54, 20);
			this->cbxChip->TabIndex = 13;
			this->cbxChip->Text = L"Chip";
			this->cbxChip->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbDefectOutOfRange);
			this->groupBox1->Controls->Add(this->rbDefectsWithinRange);
			this->groupBox1->Controls->Add(this->rbNoDefects);
			this->groupBox1->Controls->Add(this->cbxChip);
			this->groupBox1->Controls->Add(this->cbxCrack);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(363, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 127);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Defect Options for Chute";
			// 
			// rbDefectOutOfRange
			// 
			this->rbDefectOutOfRange->AutoSize = true;
			this->rbDefectOutOfRange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rbDefectOutOfRange->Location = System::Drawing::Point(101, 82);
			this->rbDefectOutOfRange->Name = L"rbDefectOutOfRange";
			this->rbDefectOutOfRange->Size = System::Drawing::Size(106, 36);
			this->rbDefectOutOfRange->TabIndex = 17;
			this->rbDefectOutOfRange->Text = L"Defects\r\nOut Of Range";
			this->rbDefectOutOfRange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbDefectOutOfRange->UseVisualStyleBackColor = true;
			// 
			// rbDefectsWithinRange
			// 
			this->rbDefectsWithinRange->AutoSize = true;
			this->rbDefectsWithinRange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rbDefectsWithinRange->Location = System::Drawing::Point(101, 46);
			this->rbDefectsWithinRange->Name = L"rbDefectsWithinRange";
			this->rbDefectsWithinRange->Size = System::Drawing::Size(106, 36);
			this->rbDefectsWithinRange->TabIndex = 16;
			this->rbDefectsWithinRange->Text = L"Defects\r\nWithin Range";
			this->rbDefectsWithinRange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbDefectsWithinRange->UseVisualStyleBackColor = true;
			// 
			// rbNoDefects
			// 
			this->rbNoDefects->AutoSize = true;
			this->rbNoDefects->Checked = true;
			this->rbNoDefects->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbNoDefects->Location = System::Drawing::Point(101, 23);
			this->rbNoDefects->Name = L"rbNoDefects";
			this->rbNoDefects->Size = System::Drawing::Size(93, 20);
			this->rbNoDefects->TabIndex = 15;
			this->rbNoDefects->TabStop = true;
			this->rbNoDefects->Text = L"No Defects";
			this->rbNoDefects->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cbxIDInRange);
			this->groupBox2->Controls->Add(this->cbxIDlow);
			this->groupBox2->Controls->Add(this->nudODTol);
			this->groupBox2->Controls->Add(this->cbxODInRange);
			this->groupBox2->Controls->Add(this->nudIDTol);
			this->groupBox2->Controls->Add(this->cbxIDHigh);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->cbxODLow);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->cbxODHigh);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(15, 45);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(342, 127);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ID/OD  Chute Specifications";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->cbxChuteDestination);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(630, 200);
			this->panel1->TabIndex = 17;
			// 
			// ChuteSettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 200);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ChuteSettingsForm";
			this->Text = L"ChuteSettingsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudIDTol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudODTol))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	public: ChuteSpecifications ChuteSpecs() {
		ChuteSpecifications result;
		//Chute Destination
		result.chutetype = GetDestination();
		//Defect options
		result.chip = cbxChip->Checked;
		result.crack = cbxCrack->Checked;
		result.defectsOutOfRange = rbDefectOutOfRange->Checked;
		result.defectsWithinRange = rbDefectsWithinRange->Checked;
		result.noDefects = rbNoDefects->Checked;
		//ID Options
		result.IDGood = cbxIDInRange->Checked;
		result.IDHigher = cbxIDHigh->Checked;
		result.IDLower = cbxIDlow->Checked;
		result.IDTolerance = (float)nudIDTol->Value;
		//OD Options
		result.ODGood = cbxODInRange->Checked;
		result.ODHigher = cbxODHigh->Checked;
		result.ODLower = cbxODLow->Checked;
		result.ODTolerance = (float)nudODTol->Value;

		//result.reject //not used as of yet

		return result;
	}

	public: Chute GetDestination() {
		Chute result = Tuscos;
		switch (cbxChuteDestination->SelectedIndex) {
		case 0:
			result = Tuscos;
			break;
		case 1:
			result = A;
			break;
		case 2:
			result = B;
			break;
		case 3:
			result = C;
			break;
		case 4:
			result = D;
			break;
		default:
			result = Tuscos;
			break;
		}
		return result;
	}

	public: void SetFormVariables(ChuteSpecifications specs);
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cbxODHigh_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cbxODLow_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
