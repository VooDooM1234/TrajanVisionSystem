#pragma once

//Pannel A Forms
#include "ImageSettingsForm.h"
#include "InformationForm.h"
#include "SaveLoadSettings.h"
#include "ProductSettingsForm.h"
#include "PasswordForm.h"
#include "LogForm.h"
#include "LogPreviewForm.h"

//Pannel B Forms
#include "CameraForm.h"
#include "ChuteSettingsForm.h"

//Image Processing/analysis
#include "ImageDisplay.h"

namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::Threading;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Drawing::Text;


	//#include "IMGProcessing.h"

	/// <summary>
	/// Summary for MyForm
	/// </summary>



	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		//constructer code
		MyForm(void)
		{
			currentLog.execution = "System Launched by {USER}";

			InitializeComponent();

			//improves form loading and reduces image flickering
			DoubleBuffered = true;

			//initialise multi-form screens
			InitialiseFormScreenes();

			//initialise cameras
			CameraA.CameraInitialization(0, "CamA");
			CameraB.CameraInitialization(1, "CamB");

			//load current settings file
			LoadImageSettingsFromFile("ImageSettings/CurrentSettings.txt");
			InitialiseProductSettings();
			infoForm->updateToolTips();
		}

	private:
		ImageSettingsForm ^ CamSettingsForm;
	private: System::Windows::Forms::Panel^  InfoPanelB;
			 InformationForm ^ infoForm;
			 CameraForm ^ CamForm;
			 ProductSettingsForm^ prodSettingForm;
			 PasswordForm^ passForm;
			 LogForm^ logSelectionForm;
	public: LogPreviewForm ^ LPForm;


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	public:
		List< ChuteSettingsForm^>^ lstChuteSettingForms;



	private:
		void InitialiseFormScreenes() {

			//Pannel A Forms
			CamSettingsForm = gcnew ImageSettingsForm();
			CamSettingsForm->TopLevel = false;

			infoForm = gcnew InformationForm;
			infoForm->TopLevel = false;

			prodSettingForm = gcnew ProductSettingsForm();
			prodSettingForm->TopLevel = false;

			logSelectionForm = gcnew LogForm();
			logSelectionForm->TopLevel = false;


			//Pannel B Forms
			CamForm = gcnew CameraForm();
			CamForm->TopLevel = false;

			lstChuteSettingForms = gcnew List< ChuteSettingsForm^>();
			for (int i = 0; i < 5; i++) {
				lstChuteSettingForms->Add(gcnew ChuteSettingsForm());
				lstChuteSettingForms[i]->TopLevel = false;
			}
			LPForm = gcnew LogPreviewForm();
			LPForm->TopLevel = false;

			//other
			passForm = gcnew PasswordForm();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  modifyExistingRecipeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectRecipeToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  reloadCamerasToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  debugToolStripMenuItem;
	private: System::Windows::Forms::Panel^  InfoPanelA;


	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->InfoPanelA = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectRecipeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifyExistingRecipeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reloadCamerasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->debugToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InfoPanelB = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 33;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// InfoPanelA
			// 
			this->InfoPanelA->Location = System::Drawing::Point(0, 27);
			this->InfoPanelA->Name = L"InfoPanelA";
			this->InfoPanelA->Size = System::Drawing::Size(420, 500);
			this->InfoPanelA->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->optionsToolStripMenuItem,
					this->settingsToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1077, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->selectRecipeToolStripMenuItem,
					this->modifyExistingRecipeToolStripMenuItem
			});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->optionsToolStripMenuItem->Text = L"Recipe";
			// 
			// selectRecipeToolStripMenuItem
			// 
			this->selectRecipeToolStripMenuItem->Name = L"selectRecipeToolStripMenuItem";
			this->selectRecipeToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->selectRecipeToolStripMenuItem->Text = L"Select Recipe";
			this->selectRecipeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectRecipeToolStripMenuItem_Click);
			// 
			// modifyExistingRecipeToolStripMenuItem
			// 
			this->modifyExistingRecipeToolStripMenuItem->Name = L"modifyExistingRecipeToolStripMenuItem";
			this->modifyExistingRecipeToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->modifyExistingRecipeToolStripMenuItem->Text = L"Modify/Create Recipe";
			this->modifyExistingRecipeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::modifyExistingRecipeToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reloadCamerasToolStripMenuItem,
					this->debugToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->settingsToolStripMenuItem->Text = L"Camera";
			// 
			// reloadCamerasToolStripMenuItem
			// 
			this->reloadCamerasToolStripMenuItem->Name = L"reloadCamerasToolStripMenuItem";
			this->reloadCamerasToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->reloadCamerasToolStripMenuItem->Text = L"Reload Cameras";
			this->reloadCamerasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reloadCamerasToolStripMenuItem_Click);
			// 
			// debugToolStripMenuItem
			// 
			this->debugToolStripMenuItem->Name = L"debugToolStripMenuItem";
			this->debugToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->debugToolStripMenuItem->Text = L"Change Camera Settings";
			this->debugToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::debugToolStripMenuItem_Click);
			// 
			// InfoPanelB
			// 
			this->InfoPanelB->AutoScroll = true;
			this->InfoPanelB->Location = System::Drawing::Point(426, 27);
			this->InfoPanelB->Name = L"InfoPanelB";
			this->InfoPanelB->Size = System::Drawing::Size(650, 500);
			this->InfoPanelB->TabIndex = 9;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->infoToolStripMenuItem->Text = L"Logs/BatchInfo";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1077, 527);
			this->Controls->Add(this->InfoPanelB);
			this->Controls->Add(this->InfoPanelA);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Trajan Glass Barrel Inspection System";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: void DisplayImage(std::vector<cv::Mat> Images) {

	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}



	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {


		switch (CurrentPannelA)
		{
		case InfoForm:
			//display info form - is the main form on startup
			infoForm->FormUpdate();
			InfoPanelA->Controls->Add(infoForm);
			infoForm->Show();

			//remove other forms
			InfoPanelA->Controls->Remove(CamSettingsForm);
			InfoPanelA->Controls->Remove(prodSettingForm);
			InfoPanelA->Controls->Remove(logSelectionForm);


			break;
		case Debug:
			//display the camera settings form
			InfoPanelA->Controls->Add(CamSettingsForm);
			CamSettingsForm->Show();

			//remove other forms
			InfoPanelA->Controls->Remove(infoForm);
			InfoPanelA->Controls->Remove(prodSettingForm);
			InfoPanelA->Controls->Remove(logSelectionForm);

			break;
		case ProductSelection:
			break;
		case ProductCreation:
			InfoPanelA->Controls->Add(prodSettingForm);
			prodSettingForm->Show();

			//remove other forms
			InfoPanelA->Controls->Remove(infoForm);
			InfoPanelA->Controls->Remove(CamSettingsForm);
			InfoPanelA->Controls->Remove(logSelectionForm);

			break;
		case LogSelection:
			InfoPanelA->Controls->Add(logSelectionForm);
			logSelectionForm->Show();

			//remove other forms
			InfoPanelA->Controls->Remove(infoForm);
			InfoPanelA->Controls->Remove(CamSettingsForm);
			InfoPanelA->Controls->Remove(prodSettingForm);

		default:
			break;
		}

		switch (CurrentPannelB) {
		case cameraForm:
			if (!InfoPanelB->Controls->Contains(CamForm)) {
				InfoPanelB->Controls->Add(CamForm);
				CamForm->Show();
			}
			//remove other forms
			InfoPanelB->Controls->Remove(LPForm);
			for (int i = 0; i < 5; i++) {
				InfoPanelB->Controls->Remove(lstChuteSettingForms[i]);
			}

			break;
		case chuteForm:
			for (int i = 0; i < prodSettingForm->getnumChutes(); i++) {
				if (!InfoPanelB->Controls->Contains(lstChuteSettingForms[i])) {

					InfoPanelB->Controls->Add(lstChuteSettingForms[i]);

					lstChuteSettingForms[i]->Location = System::Drawing::Point(0, ((int)lstChuteSettingForms[i]->Height * i) + InfoPanelB->AutoScrollPosition.Y);
					lstChuteSettingForms[i]->Show();
				}
			}
			//remove other forms
			InfoPanelB->Controls->Remove(LPForm);

			if (InfoPanelB->Controls->Contains(CamForm)) {
				InfoPanelB->Controls->Remove(CamForm);
			}
			for (int i = 4; i >= prodSettingForm->getnumChutes(); i--) {
				if (InfoPanelB->Controls->Contains(lstChuteSettingForms[i]))
					InfoPanelB->Controls->Remove(lstChuteSettingForms[i]);
			}

			break;
		case LogView:
			InfoPanelB->Controls->Add(LPForm);
			LPForm->Show();
			//remove other forms
			if (InfoPanelB->Controls->Contains(CamForm)) {
				InfoPanelB->Controls->Remove(CamForm);
			}
			for (int i = 0; i < 5; i++) {
				InfoPanelB->Controls->Remove(lstChuteSettingForms[i]);
			}
		default:
			break;
		}

		//run the vision data analysis on cameras A & B
		if (infoForm->ImageInspect == true && infoForm->BatchRunning == true || infoForm->BatchRunning == false) {
			infoForm->ImageInspect = false;
			if (CameraA.IMGInfo.ImageCapture.isOpened() || CameraA.IMGInfo.camera != nullptr) {
				if (CameraA.IMGInfo.ImageCapture.isOpened() || CameraA.IMGInfo.camera->IsOpen()) {

					CameraA.ProcessImage();
				}
			}


			if (CameraB.IMGInfo.ImageCapture.isOpened() || CameraB.IMGInfo.camera != nullptr) {
				if (CameraB.IMGInfo.ImageCapture.isOpened() || CameraB.IMGInfo.camera->IsOpen()) {
					CameraB.ProcessImage();
				}
			}
		}

		infoForm->FormUpdate();
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void modifyExistingRecipeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//opens up password input when attempting to view menu
		currentLog.execution = "{USER} Attempted to access recipe creation/Modification Interface";
		Windows::Forms::DialogResult result = passForm->ShowDialog();
		if (result == Windows::Forms::DialogResult::Yes) {
			//if password input successful, display menu
			CurrentPannelA = ProductCreation;
			CurrentPannelB = chuteForm;
		}

	}
	private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void debugToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//opens up password input when attempting to view menu
		currentLog.execution = "{USER} Attempted to access Camera Settings Interface";
		Windows::Forms::DialogResult result = passForm->ShowDialog();
		if (result == Windows::Forms::DialogResult::Yes) {
			//if password input successful, display menu
			CamSettingsForm->loadImageSettingsForm();
			CurrentPannelA = Debug;
			CurrentPannelB = cameraForm;
		}
	}

	private: System::Void rbCamA_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void selectRecipeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//opens up file selection dialog
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{

			msclr::interop::marshal_context context;
			//loadselected recipe and sets it to the current recipe being used.
			std::string standardString = context.marshal_as<std::string>(openFileDialog1->FileName);
			currentLog.execution = "{USER} Loading Recipe: '" + currentProductSettings.partNumber + "'";
			currentProductSettings = LoadProductSettings(standardString);
			infoForm->resetToolTips();
			infoForm->updateToolTips();


		}
	}
	private: System::Void reloadCamerasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		CameraA.IMGInfo = *new ImageInformation();
		CameraA.CameraInitialization(0, "CamA");

		CameraB.IMGInfo = *new ImageInformation();
		CameraB.CameraInitialization(1, "CamA");
	}

	private: System::Void MyForm_FormClosing(Object^ sender, FormClosingEventArgs^ e) {
		currentLog.execution = "{USER} Exiting Application";
		currentLog.result = "Form Shutting Down";
		SaveLog(currentLog);
	}
	private: System::Void infoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		CurrentPannelA = LogSelection;
		CurrentPannelB = LogView;
	}
	};
}