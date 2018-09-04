#pragma once
#include <msclr\marshal_cppstd.h>
#include "Structs.h"

namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogPreviewForm
	/// </summary>
	public ref class LogPreviewForm : public System::Windows::Forms::Form
	{
	public:
		LogPreviewForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			clearTimeFilter();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogPreviewForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RichTextBox^  tbxDisplay;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cbxTimeSelection;
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
			this->cbxTimeSelection = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbxDisplay = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->cbxTimeSelection);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->tbxDisplay);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(650, 500);
			this->panel1->TabIndex = 0;
			// 
			// cbxTimeSelection
			// 
			this->cbxTimeSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxTimeSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxTimeSelection->FormattingEnabled = true;
			this->cbxTimeSelection->Location = System::Drawing::Point(136, 35);
			this->cbxTimeSelection->Name = L"cbxTimeSelection";
			this->cbxTimeSelection->Size = System::Drawing::Size(142, 28);
			this->cbxTimeSelection->TabIndex = 2;
			this->cbxTimeSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &LogPreviewForm::cbxTimeSelection_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filter Time:";
			// 
			// tbxDisplay
			// 
			this->tbxDisplay->Location = System::Drawing::Point(3, 88);
			this->tbxDisplay->Name = L"tbxDisplay";
			this->tbxDisplay->ReadOnly = true;
			this->tbxDisplay->Size = System::Drawing::Size(640, 405);
			this->tbxDisplay->TabIndex = 0;
			this->tbxDisplay->Text = L"";
			// 
			// LogPreviewForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 500);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LogPreviewForm";
			this->Text = L"LogPreviewForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		std::vector<LogInfo> GetDisplayLogs();

	public: void clearTimeFilter() {
		//reset time selection filter to filter all times
		cbxTimeSelection->Items->Clear();
		int i = cbxTimeSelection->Items->Add("--ALL--");
		cbxTimeSelection->SelectedIndex = i;
	}
	public: void UpdateBatchDisplay(std::vector<BatchInfo> info) {
		//clear display text
		tbxDisplay->Clear();

		tm* lastTime;
		String^ timeString;

		tbxDisplay->SelectionAlignment = HorizontalAlignment::Center;
		String ^date = gcnew String(info[0].displayString.c_str());
		tbxDisplay->SelectedText = "--Date: " + date + "--\n";

		for each (BatchInfo var in info)
		{
			DateTime^ dtDate;
			dtDate = gcnew DateTime(var.date->tm_year + 1900, var.date->tm_mon, var.date->tm_mday, var.date->tm_hour, var.date->tm_min, var.date->tm_sec);
			timeString = dtDate->ToString("HH:mm:ss");
			if (!cbxTimeSelection->Items->Contains(timeString))
				cbxTimeSelection->Items->Add(timeString);
			if (cbxTimeSelection->Text == "--ALL--" || timeString == cbxTimeSelection->Text) {
				tbxDisplay->SelectionAlignment = HorizontalAlignment::Center;
				tbxDisplay->SelectedText = "-- " + timeString + " --" + "\n";
				tbxDisplay->SelectionAlignment = HorizontalAlignment::Left;

				//tbxDisplay->SelectionAlignment = HorizontalAlignment::Center;
				//String ^ s = gcnew String(var.PartNumber.c_str());
				tbxDisplay->SelectedText = "--Part Number: " + msclr::interop::marshal_as<String^>(var.PartNumber) + "\n";
				tbxDisplay->SelectedText = "--Description: " + msclr::interop::marshal_as<String^>(var.Description) + "\n";
				tbxDisplay->SelectedText = "--Target ID: " + msclr::interop::marshal_as<String^>(var.ID) + "\n";
				tbxDisplay->SelectedText = "--Target OD: " + msclr::interop::marshal_as<String^>(var.OD) + "\n";
				tbxDisplay->SelectedText = "--Run Time: " + msclr::interop::marshal_as<String^>(var.RunTime) + "\n";
				tbxDisplay->SelectedText = "--Number of Inspections: " + msclr::interop::marshal_as<String^>(var.Inspections) + "\n";
				tbxDisplay->SelectedText = "--Number of Rejections: " + msclr::interop::marshal_as<String^>(var.Rejections) + "\n";
				tbxDisplay->SelectedText = "--Failure Rate: " + msclr::interop::marshal_as<String^>(var.FailureRate) + "\n";

				if (var.ChuteCountT != "0")
					tbxDisplay->SelectedText = "--Number of barrels passed to TUSCOS: " + msclr::interop::marshal_as<String^>(var.ChuteCountT) + "\n";
				if (var.ChuteCountA != "0")
					tbxDisplay->SelectedText = "--Number of barrels passed to chute A: " + msclr::interop::marshal_as<String^>(var.ChuteCountA) + "\n";
				if (var.ChuteCountB != "0")
					tbxDisplay->SelectedText = "--Number of barrels passed to chute B: " + msclr::interop::marshal_as<String^>(var.ChuteCountB) + "\n";
				if (var.ChuteCountC != "0")
					tbxDisplay->SelectedText = "--Number of barrels passed to chute C: " + msclr::interop::marshal_as<String^>(var.ChuteCountC) + "\n";
				if (var.ChuteCountD != "0")
					tbxDisplay->SelectedText = "--Number of barrels passed to chute D: " + msclr::interop::marshal_as<String^>(var.ChuteCountD) + "\n"
					;
				tbxDisplay->SelectedText = "--TUSCOS Selection Information: \n" + msclr::interop::marshal_as<String^>(var.ChuteInformationT) + "\n";

				tbxDisplay->SelectedText = "-------------------------------------\n";
				tbxDisplay->SelectedText = "--Chute A Selection Information: \n" + msclr::interop::marshal_as<String^>(var.ChuteInformationA) + "\n";
				tbxDisplay->SelectedText = "-------------------------------------\n";
				tbxDisplay->SelectedText = "--Chute B Selection Information: \n" + msclr::interop::marshal_as<String^>(var.ChuteInformationB) + "\n";
				tbxDisplay->SelectedText = "-------------------------------------\n";
				tbxDisplay->SelectedText = "--Chute C Selection Information: \n" + msclr::interop::marshal_as<String^>(var.ChuteInformationC) + "\n";
				tbxDisplay->SelectedText = "-------------------------------------\n";
				tbxDisplay->SelectedText = "--Chute D Selection Information: \n" + msclr::interop::marshal_as<String^>(var.ChuteInformationD) + "\n";
			}
			

		}
	}

	public: void UpdateLogDisplay(std::vector<LogInfo> info) {
		//clear display text
		tbxDisplay->Clear();

		tm* lastTime;
		std::string lastUser = "";
		String^ timeString;

		tbxDisplay->SelectionAlignment = HorizontalAlignment::Center;
		String ^date = gcnew String(info[0].displayString.c_str());
		tbxDisplay->SelectedText = "--Date: " + date + "--\n";
		for each (LogInfo var in info)
		{

			if (lastUser != var.user) {
				tbxDisplay->SelectionAlignment = HorizontalAlignment::Center;
				String^ s = gcnew String(var.user.c_str());
				tbxDisplay->SelectedText = "--Operator: " + s + "--\n";
				lastUser = var.user;
			}

			if (lastTime != nullptr) {
				if (lastTime->tm_sec == var.date->tm_sec &&
					lastTime->tm_min == var.date->tm_min &&
					lastTime->tm_hour == var.date->tm_hour) {
				}
				else {

					DateTime^ dtDate;
					lastTime = var.date;
					dtDate = gcnew DateTime(var.date->tm_year + 1900, var.date->tm_mon, var.date->tm_mday, var.date->tm_hour, var.date->tm_min, var.date->tm_sec);
					timeString = dtDate->ToString("HH:mm:ss");
					if (cbxTimeSelection->Text == "--ALL--" || timeString == cbxTimeSelection->Text) {
						//add line seporator
						tbxDisplay->SelectionAlignment = HorizontalAlignment::Center;
						tbxDisplay->SelectedText = "---------------------------------------------------------\n";
						//add time
						tbxDisplay->SelectionAlignment = HorizontalAlignment::Left;
						tbxDisplay->SelectionFont = gcnew System::Drawing::Font("Lucinda Console", 12);
						tbxDisplay->SelectedText = "-- " + timeString + " --" + "\n";
					}
					//add time to filter
					if (!cbxTimeSelection->Items->Contains(timeString))
						cbxTimeSelection->Items->Add(timeString);

				}
			}
			else {
				lastTime = var.date;
			}
			if (cbxTimeSelection->Text == "--ALL--" || timeString == cbxTimeSelection->Text) {
				tbxDisplay->SelectionAlignment = HorizontalAlignment::Left;
				tbxDisplay->SelectionFont = gcnew System::Drawing::Font("Lucinda Console", 12);
				String^ s1 = gcnew String(var.execution.c_str());
				String^ s2 = gcnew String(var.result.c_str());

				tbxDisplay->SelectedText = s1 + " --> " + s2 + "\n";
			}
		}
	}

	private: System::Void tbxDisplay_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
			 std::vector<BatchInfo> LogPreviewForm::GetDisplayBatches();
	private: System::Void cbxTimeSelection_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		try {
			std::vector<LogInfo> info = GetDisplayLogs();
			if (info.size() > 0)
				UpdateLogDisplay(info);
		}
		catch (...) {

		}
		try {
			std::vector<BatchInfo> info = GetDisplayBatches();
			if (info.size() > 0)
				UpdateBatchDisplay(info);
		}
		catch (...) {

		}
	}
	};
}
