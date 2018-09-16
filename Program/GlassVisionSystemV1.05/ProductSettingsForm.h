#pragma once
#include "Structs.h"
#include <msclr\marshal_cppstd.h>
#include "ChuteSettingsForm.h"
#include "SaveLoadSettings.h"
#include "ImageDisplay.h"
//#include "MyForm.h"

namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProductSettingsForm
	/// </summary>
	public ref class ProductSettingsForm : public System::Windows::Forms::Form
	{
	public:
		ProductSettingsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductSettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnMainMenu;
	protected:
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TextBox^  tbxPartNumber;
	public: System::Windows::Forms::TextBox^  tbxDescription;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::NumericUpDown^  nudNumChutes;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbViewChuteSettings;
	private: System::Windows::Forms::RadioButton^  rbViewCam;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	public: System::Windows::Forms::DataGridView^  dgvDefects;

	private: System::Windows::Forms::Button^  btnAutoPopulate;
	private: System::Windows::Forms::Button^  btnLoad;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::NumericUpDown^  nudOD;
	public: System::Windows::Forms::NumericUpDown^  nudID;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col1DefectCnt;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col2TtlArea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col3LargestArea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col4TotalPoints;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col5LargestPtCnt;
	public:


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
			this->BtnMainMenu = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbxPartNumber = (gcnew System::Windows::Forms::TextBox());
			this->tbxDescription = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nudNumChutes = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbViewChuteSettings = (gcnew System::Windows::Forms::RadioButton());
			this->rbViewCam = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->nudOD = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvDefects = (gcnew System::Windows::Forms::DataGridView());
			this->btnAutoPopulate = (gcnew System::Windows::Forms::Button());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Col1DefectCnt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col2TtlArea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col3LargestArea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col4TotalPoints = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col5LargestPtCnt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumChutes))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudOD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDefects))->BeginInit();
			this->SuspendLayout();
			// 
			// BtnMainMenu
			// 
			this->BtnMainMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnMainMenu->Location = System::Drawing::Point(12, 11);
			this->BtnMainMenu->Name = L"BtnMainMenu";
			this->BtnMainMenu->Size = System::Drawing::Size(75, 24);
			this->BtnMainMenu->TabIndex = 0;
			this->BtnMainMenu->Text = L"Main Menu";
			this->BtnMainMenu->UseVisualStyleBackColor = true;
			this->BtnMainMenu->Click += gcnew System::EventHandler(this, &ProductSettingsForm::BtnMainMenu_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(120, 11);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 24);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &ProductSettingsForm::btnClear_Click);
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(333, 11);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 24);
			this->btnSave->TabIndex = 2;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &ProductSettingsForm::btnSave_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Part Number:";
			// 
			// tbxPartNumber
			// 
			this->tbxPartNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxPartNumber->Location = System::Drawing::Point(98, 25);
			this->tbxPartNumber->Name = L"tbxPartNumber";
			this->tbxPartNumber->Size = System::Drawing::Size(168, 22);
			this->tbxPartNumber->TabIndex = 4;
			// 
			// tbxDescription
			// 
			this->tbxDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxDescription->Location = System::Drawing::Point(98, 51);
			this->tbxDescription->Multiline = true;
			this->tbxDescription->Name = L"tbxDescription";
			this->tbxDescription->Size = System::Drawing::Size(168, 46);
			this->tbxDescription->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Description:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Number of Chutes:";
			this->label3->Click += gcnew System::EventHandler(this, &ProductSettingsForm::label3_Click);
			// 
			// nudNumChutes
			// 
			this->nudNumChutes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudNumChutes->Location = System::Drawing::Point(129, 131);
			this->nudNumChutes->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->nudNumChutes->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudNumChutes->Name = L"nudNumChutes";
			this->nudNumChutes->Size = System::Drawing::Size(28, 22);
			this->nudNumChutes->TabIndex = 8;
			this->nudNumChutes->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudNumChutes->ValueChanged += gcnew System::EventHandler(this, &ProductSettingsForm::nudNumChutes_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbViewChuteSettings);
			this->groupBox1->Controls->Add(this->rbViewCam);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(301, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(118, 70);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"View";
			// 
			// rbViewChuteSettings
			// 
			this->rbViewChuteSettings->AutoSize = true;
			this->rbViewChuteSettings->Checked = true;
			this->rbViewChuteSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rbViewChuteSettings->Location = System::Drawing::Point(6, 19);
			this->rbViewChuteSettings->Name = L"rbViewChuteSettings";
			this->rbViewChuteSettings->Size = System::Drawing::Size(111, 20);
			this->rbViewChuteSettings->TabIndex = 1;
			this->rbViewChuteSettings->TabStop = true;
			this->rbViewChuteSettings->Text = L"Chute Settings";
			this->rbViewChuteSettings->UseVisualStyleBackColor = true;
			this->rbViewChuteSettings->CheckedChanged += gcnew System::EventHandler(this, &ProductSettingsForm::rbViewChuteSettings_CheckedChanged);
			// 
			// rbViewCam
			// 
			this->rbViewCam->AutoSize = true;
			this->rbViewCam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbViewCam->Location = System::Drawing::Point(6, 42);
			this->rbViewCam->Name = L"rbViewCam";
			this->rbViewCam->Size = System::Drawing::Size(74, 20);
			this->rbViewCam->TabIndex = 0;
			this->rbViewCam->Text = L"Camera";
			this->rbViewCam->UseVisualStyleBackColor = true;
			this->rbViewCam->CheckedChanged += gcnew System::EventHandler(this, &ProductSettingsForm::rbViewCam_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->nudOD);
			this->groupBox2->Controls->Add(this->nudID);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->tbxPartNumber);
			this->groupBox2->Controls->Add(this->nudNumChutes);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->tbxDescription);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 50);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(283, 160);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Settings";
			// 
			// nudOD
			// 
			this->nudOD->DecimalPlaces = 2;
			this->nudOD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudOD->Location = System::Drawing::Point(81, 103);
			this->nudOD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->nudOD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudOD->Name = L"nudOD";
			this->nudOD->Size = System::Drawing::Size(55, 22);
			this->nudOD->TabIndex = 13;
			this->nudOD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// nudID
			// 
			this->nudID->DecimalPlaces = 2;
			this->nudID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudID->Location = System::Drawing::Point(217, 103);
			this->nudID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->nudID->Name = L"nudID";
			this->nudID->Size = System::Drawing::Size(55, 22);
			this->nudID->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Target OD:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(142, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Target ID:";
			// 
			// dgvDefects
			// 
			this->dgvDefects->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDefects->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Col1DefectCnt,
					this->Col2TtlArea, this->Col3LargestArea, this->Col4TotalPoints, this->Col5LargestPtCnt
			});
			this->dgvDefects->Location = System::Drawing::Point(1, 216);
			this->dgvDefects->Name = L"dgvDefects";
			this->dgvDefects->Size = System::Drawing::Size(418, 283);
			this->dgvDefects->TabIndex = 11;
			this->dgvDefects->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSettingsForm::dataGridView1_CellContentClick);
			// 
			// btnAutoPopulate
			// 
			this->btnAutoPopulate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAutoPopulate->Location = System::Drawing::Point(311, 155);
			this->btnAutoPopulate->Name = L"btnAutoPopulate";
			this->btnAutoPopulate->Size = System::Drawing::Size(108, 55);
			this->btnAutoPopulate->TabIndex = 12;
			this->btnAutoPopulate->Text = L"Auto Populate Defect Entry";
			this->btnAutoPopulate->UseVisualStyleBackColor = true;
			this->btnAutoPopulate->Click += gcnew System::EventHandler(this, &ProductSettingsForm::btnAutoPopulate_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoad->Location = System::Drawing::Point(224, 11);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(75, 24);
			this->btnLoad->TabIndex = 13;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &ProductSettingsForm::btnLoad_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Col1DefectCnt
			// 
			this->Col1DefectCnt->HeaderText = L"Defect Count";
			this->Col1DefectCnt->Name = L"Col1DefectCnt";
			this->Col1DefectCnt->Width = 75;
			// 
			// Col2TtlArea
			// 
			this->Col2TtlArea->HeaderText = L"Total Defect Area (px)";
			this->Col2TtlArea->Name = L"Col2TtlArea";
			this->Col2TtlArea->Width = 75;
			// 
			// Col3LargestArea
			// 
			this->Col3LargestArea->HeaderText = L"Largest Defect Area (px)";
			this->Col3LargestArea->Name = L"Col3LargestArea";
			this->Col3LargestArea->Width = 75;
			// 
			// Col4TotalPoints
			// 
			this->Col4TotalPoints->HeaderText = L"Total Defect Perimeter (px)";
			this->Col4TotalPoints->Name = L"Col4TotalPoints";
			this->Col4TotalPoints->Width = 75;
			// 
			// Col5LargestPtCnt
			// 
			this->Col5LargestPtCnt->HeaderText = L"Largest Defect Perimeter (px)";
			this->Col5LargestPtCnt->Name = L"Col5LargestPtCnt";
			this->Col5LargestPtCnt->Width = 75;
			// 
			// ProductSettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 500);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->btnAutoPopulate);
			this->Controls->Add(this->dgvDefects);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->BtnMainMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductSettingsForm";
			this->Text = L"ProductSettingsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumChutes))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudOD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDefects))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void nudNumChutes_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void rbViewChuteSettings_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		CurrentPannelB = chuteForm;
	}
	private: System::Void rbViewCam_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		CurrentPannelB = cameraForm;
	}
	public:
		int getnumChutes() {
			return ((int)nudNumChutes->Value);
		}

	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {

		SaveProduct();
	}
	private: System::Void BtnMainMenu_Click(System::Object^  sender, System::EventArgs^  e) {
		CurrentPannelA = InfoForm;
		CurrentPannelB = cameraForm;
	}

	private: void SaveProduct();

	private: void populateSettings(ProductSettings settings);

	private: System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			msclr::interop::marshal_context context;
			std::string standardString = context.marshal_as<std::string>(openFileDialog1->FileName);
			ProductSettings tempsettings = LoadProductSettings(standardString);
			populateSettings(tempsettings);
		}
	}

	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
		ProductSettings blank;
		blank.listOfChuteSpecs.resize(5);
		populateSettings(blank);
	}
	private: System::Void btnAutoPopulate_Click(System::Object^  sender, System::EventArgs^  e) {
		dgvDefects->Rows->Add(
			CameraA.IMGInfo.IMGDefects.defectCount,
			CameraA.IMGInfo.IMGDefects.totalDefectArea,
			CameraA.IMGInfo.IMGDefects.largestDefectArea,
			CameraA.IMGInfo.IMGDefects.totalDefectPerimeter,
			CameraA.IMGInfo.IMGDefects.largestDefectPerimeter);
	}
};
}
