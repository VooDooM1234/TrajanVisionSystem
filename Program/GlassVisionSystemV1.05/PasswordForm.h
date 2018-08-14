#pragma once
#include "Structs.h"
#include "SaveLoadSettings.h"

namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PasswordForm
	/// </summary>
	public ref class PasswordForm : public System::Windows::Forms::Form
	{
	public:
		PasswordForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->DialogResult = Windows::Forms::DialogResult::No;
			this->ActiveControl = tbxPassword;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tbxPassword;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			this->tbxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbxPassword
			// 
			this->tbxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxPassword->Location = System::Drawing::Point(15, 28);
			this->tbxPassword->Name = L"tbxPassword";
			this->tbxPassword->Size = System::Drawing::Size(157, 22);
			this->tbxPassword->TabIndex = 0;
			this->tbxPassword->UseSystemPasswordChar = true;
			this->tbxPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &PasswordForm::tbxPasswordEnterKey);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Please Enter Password to Continue:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(191, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PasswordForm::button1_Click);
			// 
			// PasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(277, 55);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbxPassword);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"PasswordForm";
			this->Text = L"PasswordForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int attempt = 0;

	private:
		void checkPassword() {
			attempt++;
			if (tbxPassword->Text == "159357") {

				currentLog.result = "Correct Password Was Entered on attempt #" + std::to_string(attempt) + ", Proceeding to display UI for {USER}";
				this->DialogResult = Windows::Forms::DialogResult::Yes;
				attempt = 0;
				SaveLog(currentLog);
				this->Close();



			}
			else {
				System::Windows::Forms::DialogResult dialogResult = System::Windows::Forms::MessageBox::Show("Incorrect Password - Please Try again", "PASSWORD INCORRECT!", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
				if (dialogResult == Windows::Forms::DialogResult::Retry)
				{
					currentLog.result = "Incorrect Password Entered - {USER} Attempting to Retry, Attempt #" + std::to_string(attempt);
					tbxPassword->Text = "";
					SaveLog(currentLog);

					//do something
				}
				else {
					currentLog.result = "Incorrect Password Entered - {USER} Closing Password Prompt, Attempt #" + std::to_string(attempt);
					attempt = 0;
					//return (Windows::Forms::DialogResult::No);
					SaveLog(currentLog);

					this->Close();
				}

			}
		}

	private: System::Void tbxPasswordEnterKey(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (e->KeyCode == Keys::Enter)
		{
			//Do something
			e->Handled = true;
			checkPassword();
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		checkPassword();
	}
	};
}
