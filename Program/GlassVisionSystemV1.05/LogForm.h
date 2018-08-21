#pragma once
#include "Structs.h"
#include "SaveLoadSettings.h"
#include "LogPreviewForm.h"


namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogForm
	/// </summary>
	public ref class LogForm : public System::Windows::Forms::Form
	{
	public:
		LogForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			// Set the Format type and the CustomFormat string.
			this->dateTimePicker1->Format = DateTimePickerFormat::Custom;
			this->dateTimePicker1->CustomFormat = "MMMM yyyy";
			this->dateTimePicker1->MaxDate = DateTime::Now;

			dateTimePicker1->ShowUpDown = true;
			logList = LoadLog();
			this->dateTimePicker1->Value = this->dateTimePicker1->MaxDate;

			//PopulateList();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  btnReturn;
	private: System::Windows::Forms::GroupBox^  groupBox2;



	private: System::Windows::Forms::ListBox^  lstItems;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  cbxMonthFilter;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lstItems = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cbxMonthFilter = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->lstItems);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->btnReturn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(420, 500);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(331, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lstItems
			// 
			this->lstItems->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstItems->FormattingEnabled = true;
			this->lstItems->ItemHeight = 20;
			this->lstItems->Location = System::Drawing::Point(3, 149);
			this->lstItems->Name = L"lstItems";
			this->lstItems->Size = System::Drawing::Size(410, 344);
			this->lstItems->TabIndex = 6;
			this->lstItems->SelectedIndexChanged += gcnew System::EventHandler(this, &LogForm::lstItems_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cbxMonthFilter);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(91, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(322, 92);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Filter:";
			// 
			// cbxMonthFilter
			// 
			this->cbxMonthFilter->AutoSize = true;
			this->cbxMonthFilter->Location = System::Drawing::Point(6, 21);
			this->cbxMonthFilter->Name = L"cbxMonthFilter";
			this->cbxMonthFilter->Size = System::Drawing::Size(66, 20);
			this->cbxMonthFilter->TabIndex = 5;
			this->cbxMonthFilter->Text = L"Month:";
			this->cbxMonthFilter->UseVisualStyleBackColor = true;
			this->cbxMonthFilter->CheckedChanged += gcnew System::EventHandler(this, &LogForm::cbxMonthFilter_CheckedChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(96, 19);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(172, 22);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->Value = System::DateTime(2018, 8, 13, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &LogForm::dateTimePicker1_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(3, 101);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(291, 42);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"View";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(96, 17);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(104, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"System Logs";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &LogForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 17);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(84, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Batch Info";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &LogForm::radioButton1_CheckedChanged);
			// 
			// btnReturn
			// 
			this->btnReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReturn->Location = System::Drawing::Point(10, 10);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 0;
			this->btnReturn->Text = L"Return";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &LogForm::btnReturn_Click);
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 500);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LogForm";
			this->Text = L"LogForm";
			this->panel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void PopulateList() {
		lstItems->Items->Clear();

		for(int i = 0; i < logList.size(); i++)
		{
			DateTime^ dtDate;
			if ((logList[i].date->tm_year + 1900 == dateTimePicker1->Value.Year && logList[i].date->tm_mon + 1 == dateTimePicker1->Value.Month)
				|| cbxMonthFilter->Checked == false) {
				dtDate = gcnew DateTime(logList[i].date->tm_year + 1900, logList[i].date->tm_mon + 1, logList[i].date->tm_mday);
				String^ s = dtDate->ToString("dddd - dd, MMMM, yyyy");
				 logList[i].displayString = sysStringtoStd(s);
				if (!lstItems->Items->Contains(s))
					lstItems->Items->Add(s);
			}
		}
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		PopulateList();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cbxMonthFilter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PopulateList();
	}

	private: System::Void lstItems_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnReturn_Click(System::Object^  sender, System::EventArgs^  e) {
		CurrentPannelA = InfoForm;
		CurrentPannelB = cameraForm;
	}
};
}
