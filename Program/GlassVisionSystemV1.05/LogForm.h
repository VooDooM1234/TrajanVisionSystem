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
			batchHistory = LoadBatch();
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
	public: System::Windows::Forms::RadioButton^  rbLogs;

	public: System::Windows::Forms::RadioButton^  rbBatch;

	private: System::Windows::Forms::Button^  btnReturn;
	private: System::Windows::Forms::GroupBox^  groupBox2;



	private: System::Windows::Forms::ListBox^  lstItems;


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
			this->lstItems = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cbxMonthFilter = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbLogs = (gcnew System::Windows::Forms::RadioButton());
			this->rbBatch = (gcnew System::Windows::Forms::RadioButton());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
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
			this->groupBox1->Controls->Add(this->rbLogs);
			this->groupBox1->Controls->Add(this->rbBatch);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(3, 101);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(291, 42);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"View";
			// 
			// rbLogs
			// 
			this->rbLogs->AutoSize = true;
			this->rbLogs->Location = System::Drawing::Point(96, 17);
			this->rbLogs->Name = L"rbLogs";
			this->rbLogs->Size = System::Drawing::Size(104, 20);
			this->rbLogs->TabIndex = 1;
			this->rbLogs->TabStop = true;
			this->rbLogs->Text = L"System Logs";
			this->rbLogs->UseVisualStyleBackColor = true;
			this->rbLogs->CheckedChanged += gcnew System::EventHandler(this, &LogForm::radioButton2_CheckedChanged);
			// 
			// rbBatch
			// 
			this->rbBatch->AutoSize = true;
			this->rbBatch->Checked = true;
			this->rbBatch->Location = System::Drawing::Point(6, 17);
			this->rbBatch->Name = L"rbBatch";
			this->rbBatch->Size = System::Drawing::Size(84, 20);
			this->rbBatch->TabIndex = 0;
			this->rbBatch->TabStop = true;
			this->rbBatch->Text = L"Batch Info";
			this->rbBatch->UseVisualStyleBackColor = true;
			this->rbBatch->CheckedChanged += gcnew System::EventHandler(this, &LogForm::radioButton1_CheckedChanged);
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

		private: void AddItem(tm *time, std::string &displayString) {
			DateTime^ dtDate;
			if ((time->tm_year + 1900 == dateTimePicker1->Value.Year && time->tm_mon + 1 == dateTimePicker1->Value.Month)
				|| cbxMonthFilter->Checked == false) {
				dtDate = gcnew DateTime(time->tm_year + 1900, time->tm_mon + 1, time->tm_mday);
				String^ s = dtDate->ToString("dddd - dd, MMMM, yyyy");
				displayString = sysStringtoStd(s);
				//if preview list does not contain the date already, add a new date
				if (!lstItems->Items->Contains(s))
					lstItems->Items->Add(s);
			}
		}
	private: void PopulateList() {
		lstItems->Items->Clear();
		if (rbLogs->Checked == true) {
			for (int i = 0; i < logList.size(); i++)
			{
				AddItem(logList[i].date, logList[i].displayString);
			}
		}
		else {
			for (int i = 0; i < batchHistory.size(); i++) {
				AddItem(batchHistory[i].date, batchHistory[i].displayString);
			}
		}
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		PopulateList();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 //update selection list options if filters changed
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PopulateList();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PopulateList();
	}
	private: System::Void cbxMonthFilter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PopulateList();
	}

	private: System::Void lstItems_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	public: std::vector<LogInfo> LogForm::GetLogs();
			std::vector<BatchInfo> LogForm::GetBatches();

	private: System::Void btnReturn_Click(System::Object^  sender, System::EventArgs^  e) {
		CurrentPannelA = InfoForm;
		CurrentPannelB = cameraForm;
	}
	};
}
