#pragma once
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
			this->tbxDisplay = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->tbxDisplay);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(650, 500);
			this->panel1->TabIndex = 0;
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
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void UpdateDisplay(std::vector<LogInfo> info) {
		tbxDisplay->Clear();
		tm* lastTime;
		std::string lastUser = "";
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
					tbxDisplay->SelectionAlignment = HorizontalAlignment::Center;
					tbxDisplay->SelectedText = "---------------------------------------------------------\n";
					tbxDisplay->SelectionAlignment = HorizontalAlignment::Left;
					tbxDisplay->SelectionFont = gcnew System::Drawing::Font("Lucinda Console", 12);
					DateTime^ dtDate;
					lastTime = var.date;
					dtDate = gcnew DateTime(var.date->tm_year + 1900, var.date->tm_mon, var.date->tm_mday, var.date->tm_hour, var.date->tm_min, var.date->tm_sec);
					tbxDisplay->SelectedText =dtDate->ToString("--HH:mm:ss--") + "\n";
				}
			}
			else {
				lastTime = var.date;
			}
			tbxDisplay->SelectionAlignment = HorizontalAlignment::Left;
			tbxDisplay->SelectionFont = gcnew System::Drawing::Font("Lucinda Console", 12);
			String^ s1 = gcnew String(var.execution.c_str());
			String^ s2 = gcnew String(var.result.c_str());

			tbxDisplay->SelectedText = s1 + " --> " + s2 + "\n";
		}
	}

	private: System::Void tbxDisplay_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
