#include "Structs.h"
#include "ImageDisplay.h"
#include <chrono>
#include "SaveLoadSettings.h"
#include <msclr\marshal_cppstd.h>

#pragma once


namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for DebugForm
	/// </summary>
	public ref class ImageSettingsForm : public System::Windows::Forms::Form
	{
		//SelectedInfoPanelForm currentForm;
	private:
		//placeholder values for past settings
		int PCA, PCB, PCT, ExpTime, DesOD;
		double MeasPixel;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::NumericUpDown^  numExposureTime;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lblCalculatedRatio;
	private: System::Windows::Forms::NumericUpDown^  nudMeasuredOD;
	private: System::Windows::Forms::NumericUpDown^  nudDesiredOD;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnPixelTomm;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::HScrollBar^  hScrollBar4;

	public:
		//ImageSettingsForm(SelectedInfoPanelForm& selectedForm) {

		//	InitializeComponent();
		//	//currentForm = selectedForm;
		//}
		ImageSettingsForm(void)
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
		~ImageSettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;


	protected:


	private: System::Windows::Forms::HScrollBar^  hScrollBar1;



	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::HScrollBar^  hScrollBar2;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  btnBack;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::HScrollBar^  hScrollBar3;
	private: System::Windows::Forms::NumericUpDown^  numCircleTolerance;
	private: System::Windows::Forms::NumericUpDown^  numCannyTolB;
	private: System::Windows::Forms::NumericUpDown^  numCannyTolA;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  btnReset;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ImageSettingsForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblCalculatedRatio = (gcnew System::Windows::Forms::Label());
			this->nudMeasuredOD = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudDesiredOD = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnPixelTomm = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numExposureTime = (gcnew System::Windows::Forms::NumericUpDown());
			this->hScrollBar4 = (gcnew System::Windows::Forms::HScrollBar());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numCircleTolerance = (gcnew System::Windows::Forms::NumericUpDown());
			this->hScrollBar3 = (gcnew System::Windows::Forms::HScrollBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numCannyTolB = (gcnew System::Windows::Forms::NumericUpDown());
			this->hScrollBar2 = (gcnew System::Windows::Forms::HScrollBar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numCannyTolA = (gcnew System::Windows::Forms::NumericUpDown());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMeasuredOD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDesiredOD))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numExposureTime))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCircleTolerance))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCannyTolB))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCannyTolA))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->btnReset);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnBack);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(420, 500);
			this->panel1->TabIndex = 0;
			this->panel1->Tag = L"";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ImageSettingsForm::panel1_Paint);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->lblCalculatedRatio);
			this->groupBox5->Controls->Add(this->nudMeasuredOD);
			this->groupBox5->Controls->Add(this->nudDesiredOD);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->btnPixelTomm);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(196, 158);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(217, 129);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Pixel to milimeter Ratio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(87, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L" - Using Camera A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Calculated Ratio:";
			// 
			// lblCalculatedRatio
			// 
			this->lblCalculatedRatio->AutoSize = true;
			this->lblCalculatedRatio->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCalculatedRatio->Location = System::Drawing::Point(146, 95);
			this->lblCalculatedRatio->Name = L"lblCalculatedRatio";
			this->lblCalculatedRatio->Size = System::Drawing::Size(17, 18);
			this->lblCalculatedRatio->TabIndex = 5;
			this->lblCalculatedRatio->Text = L"0";
			// 
			// nudMeasuredOD
			// 
			this->nudMeasuredOD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudMeasuredOD->Location = System::Drawing::Point(146, 69);
			this->nudMeasuredOD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2500, 0, 0, 0 });
			this->nudMeasuredOD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudMeasuredOD->Name = L"nudMeasuredOD";
			this->nudMeasuredOD->Size = System::Drawing::Size(65, 22);
			this->nudMeasuredOD->TabIndex = 4;
			this->nudMeasuredOD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudMeasuredOD->ValueChanged += gcnew System::EventHandler(this, &ImageSettingsForm::nudMeasuredOD_ValueChanged);
			// 
			// nudDesiredOD
			// 
			this->nudDesiredOD->DecimalPlaces = 1;
			this->nudDesiredOD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudDesiredOD->Location = System::Drawing::Point(146, 46);
			this->nudDesiredOD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->nudDesiredOD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudDesiredOD->Name = L"nudDesiredOD";
			this->nudDesiredOD->Size = System::Drawing::Size(65, 22);
			this->nudDesiredOD->TabIndex = 3;
			this->nudDesiredOD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudDesiredOD->ValueChanged += gcnew System::EventHandler(this, &ImageSettingsForm::nudDesiredOD_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Measured OD(Pixels)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Desired OD (mm)";
			// 
			// btnPixelTomm
			// 
			this->btnPixelTomm->Location = System::Drawing::Point(6, 21);
			this->btnPixelTomm->Name = L"btnPixelTomm";
			this->btnPixelTomm->Size = System::Drawing::Size(75, 23);
			this->btnPixelTomm->TabIndex = 0;
			this->btnPixelTomm->Text = L"Calculate";
			this->btnPixelTomm->UseVisualStyleBackColor = true;
			this->btnPixelTomm->Click += gcnew System::EventHandler(this, &ImageSettingsForm::btnPixelTomm_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numExposureTime);
			this->groupBox4->Controls->Add(this->hScrollBar4);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(10, 318);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(178, 59);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Exposure Time";
			// 
			// numExposureTime
			// 
			this->numExposureTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numExposureTime->Location = System::Drawing::Point(107, 35);
			this->numExposureTime->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2500, 0, 0, 0 });
			this->numExposureTime->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numExposureTime->Name = L"numExposureTime";
			this->numExposureTime->Size = System::Drawing::Size(65, 22);
			this->numExposureTime->TabIndex = 2;
			this->numExposureTime->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numExposureTime->ValueChanged += gcnew System::EventHandler(this, &ImageSettingsForm::nudExposureTime_ValueChanged);
			// 
			// hScrollBar4
			// 
			this->hScrollBar4->Dock = System::Windows::Forms::DockStyle::Top;
			this->hScrollBar4->Location = System::Drawing::Point(3, 18);
			this->hScrollBar4->Maximum = 2500;
			this->hScrollBar4->Minimum = 1;
			this->hScrollBar4->Name = L"hScrollBar4";
			this->hScrollBar4->Size = System::Drawing::Size(172, 16);
			this->hScrollBar4->TabIndex = 0;
			this->hScrollBar4->Value = 1;
			this->hScrollBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ImageSettingsForm::hScrollBar4_Scroll);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(85, 4);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 13;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &ImageSettingsForm::btnReset_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(407, 66);
			this->label1->TabIndex = 12;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->Click += gcnew System::EventHandler(this, &ImageSettingsForm::label1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(293, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Load Settings";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ImageSettingsForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(196, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Save Settings";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ImageSettingsForm::button2_Click);
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->Location = System::Drawing::Point(4, 4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 23);
			this->btnBack->TabIndex = 9;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &ImageSettingsForm::btnBack_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numCircleTolerance);
			this->groupBox3->Controls->Add(this->hScrollBar3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(10, 253);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(178, 59);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Circle Detection Tolerance";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &ImageSettingsForm::groupBox3_Enter);
			// 
			// numCircleTolerance
			// 
			this->numCircleTolerance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numCircleTolerance->Location = System::Drawing::Point(107, 35);
			this->numCircleTolerance->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCircleTolerance->Name = L"numCircleTolerance";
			this->numCircleTolerance->Size = System::Drawing::Size(65, 22);
			this->numCircleTolerance->TabIndex = 2;
			this->numCircleTolerance->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCircleTolerance->ValueChanged += gcnew System::EventHandler(this, &ImageSettingsForm::numCircleTolerance_ValueChanged);
			// 
			// hScrollBar3
			// 
			this->hScrollBar3->Dock = System::Windows::Forms::DockStyle::Top;
			this->hScrollBar3->Location = System::Drawing::Point(3, 18);
			this->hScrollBar3->Minimum = 1;
			this->hScrollBar3->Name = L"hScrollBar3";
			this->hScrollBar3->Size = System::Drawing::Size(172, 16);
			this->hScrollBar3->TabIndex = 0;
			this->hScrollBar3->Value = 1;
			this->hScrollBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ImageSettingsForm::hScrollBar3_Scroll);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numCannyTolB);
			this->groupBox2->Controls->Add(this->hScrollBar2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(10, 188);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(178, 59);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Canny Tolerance B";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &ImageSettingsForm::groupBox2_Enter);
			// 
			// numCannyTolB
			// 
			this->numCannyTolB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCannyTolB->Location = System::Drawing::Point(107, 35);
			this->numCannyTolB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCannyTolB->Name = L"numCannyTolB";
			this->numCannyTolB->Size = System::Drawing::Size(65, 22);
			this->numCannyTolB->TabIndex = 2;
			this->numCannyTolB->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCannyTolB->ValueChanged += gcnew System::EventHandler(this, &ImageSettingsForm::numCannyTolB_ValueChanged);
			// 
			// hScrollBar2
			// 
			this->hScrollBar2->Dock = System::Windows::Forms::DockStyle::Top;
			this->hScrollBar2->Location = System::Drawing::Point(3, 18);
			this->hScrollBar2->Minimum = 1;
			this->hScrollBar2->Name = L"hScrollBar2";
			this->hScrollBar2->Size = System::Drawing::Size(172, 16);
			this->hScrollBar2->TabIndex = 0;
			this->hScrollBar2->Value = 1;
			this->hScrollBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ImageSettingsForm::hScrollBar2_Scroll);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numCannyTolA);
			this->groupBox1->Controls->Add(this->hScrollBar1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(10, 123);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(178, 59);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Canny Tolerance A";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ImageSettingsForm::groupBox1_Enter);
			// 
			// numCannyTolA
			// 
			this->numCannyTolA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCannyTolA->Location = System::Drawing::Point(107, 35);
			this->numCannyTolA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCannyTolA->Name = L"numCannyTolA";
			this->numCannyTolA->Size = System::Drawing::Size(65, 22);
			this->numCannyTolA->TabIndex = 1;
			this->numCannyTolA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCannyTolA->ValueChanged += gcnew System::EventHandler(this, &ImageSettingsForm::numCannyTolA_ValueChanged);
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Dock = System::Windows::Forms::DockStyle::Top;
			this->hScrollBar1->Location = System::Drawing::Point(3, 18);
			this->hScrollBar1->Minimum = 1;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(172, 16);
			this->hScrollBar1->TabIndex = 0;
			this->hScrollBar1->Value = 1;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ImageSettingsForm::hScrollBar1_Scroll);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &ImageSettingsForm::openFileDialog1_FileOk);
			// 
			// ImageSettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 500);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ImageSettingsForm";
			this->Text = L"DebugForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMeasuredOD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDesiredOD))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numExposureTime))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCircleTolerance))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCannyTolB))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCannyTolA))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void hScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		numCannyTolA->Value = hScrollBar1->Value;
	}
	private: System::Void hScrollBar2_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		numCannyTolB->Value = hScrollBar2->Value;
	}
	private: System::Void hScrollBar3_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		numCircleTolerance->Value = hScrollBar3->Value;
	}
	private: System::Void numCannyTolA_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		hScrollBar1->Value = (int)numCannyTolA->Value;
		currentImageSettings.CannyThresholdA = (int)numCannyTolA->Value;
	}
	private: System::Void numCannyTolB_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		hScrollBar2->Value = (int)numCannyTolB->Value;
		currentImageSettings.CannyThresholdB = (int)numCannyTolB->Value;
	}
	private: System::Void numCircleTolerance_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		hScrollBar3->Value = (int)numCircleTolerance->Value;
		currentImageSettings.CircleTolerance = (int)numCircleTolerance->Value;
	}
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
		RevertSettings();
		CurrentPannelA = InfoForm;
	}
	public:
		void loadImageSettingsForm() {
			PCA = currentImageSettings.CannyThresholdA;
			PCB = currentImageSettings.CannyThresholdB;
			PCT = currentImageSettings.CircleTolerance;
			ExpTime = currentImageSettings.ExposureTime/1000;
			MeasPixel = currentImageSettings.MeasuredPixels;
			DesOD = currentImageSettings.DesiredOD;
			updateDisplayNumbers();
		}

		//save image settings button
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		ImageSettings tempSettings;
		tempSettings.CannyThresholdA = (int)numCannyTolA->Value;
		tempSettings.CannyThresholdB = (int)numCannyTolB->Value;
		tempSettings.CircleTolerance = (int)numCircleTolerance->Value;
		tempSettings.ExposureTime = (int)numExposureTime->Value * 1000;
		tempSettings.MeasuredPixels = (int)nudMeasuredOD->Value;
		tempSettings.DesiredOD = Convert::ToDouble( nudDesiredOD->Value);
		tempSettings.PixToMMRatio = Convert::ToDouble(lblCalculatedRatio->Text);

		SaveImageSettings(tempSettings, "CurrentSettings");

		time_t _tm = time(NULL);
		struct tm * curtime = localtime(&_tm);
		std::string Currentdate = asctime(curtime);
		Currentdate = Currentdate.substr(0, Currentdate.size() - 1);
		SaveImageSettings(tempSettings, Currentdate);
		CurrentPannelA = InfoForm;
		currentImageSettings = tempSettings;
	}

	private: void updateDisplayNumbers() {
		numCannyTolA->Value = currentImageSettings.CannyThresholdA;
		numCannyTolB->Value = currentImageSettings.CannyThresholdB;
		numCircleTolerance->Value = currentImageSettings.CircleTolerance;
		numExposureTime->Value = currentImageSettings.ExposureTime/1000;

		nudMeasuredOD->Value = currentImageSettings.MeasuredPixels;
		nudDesiredOD->Value = Convert::ToDecimal( currentImageSettings.DesiredOD);
		lblCalculatedRatio->Text = Convert::ToString(currentImageSettings.PixToMMRatio);
	}
	private:
		void updateSettingPreview() {
			currentImageSettings.CannyThresholdA = (int)numCannyTolA->Value;
			currentImageSettings.CannyThresholdB = (int)numCannyTolB->Value;
			currentImageSettings.CircleTolerance = (int)numCircleTolerance->Value;
			currentImageSettings.ExposureTime = (int)numExposureTime->Value * 1000;

			currentImageSettings.MeasuredPixels = (int)nudMeasuredOD->Value;
			currentImageSettings.DesiredOD = Convert::ToDouble(nudDesiredOD->Value);
			currentImageSettings.PixToMMRatio = currentImageSettings.DesiredOD / currentImageSettings.MeasuredPixels;

		}
		void RevertSettings() {
			currentImageSettings.CannyThresholdA = PCA;
			currentImageSettings.CannyThresholdB = PCB;
			currentImageSettings.CircleTolerance = PCT;
			currentImageSettings.ExposureTime = ExpTime;

			currentImageSettings.MeasuredPixels = MeasPixel;
			currentImageSettings.DesiredOD = DesOD;
			currentImageSettings.PixToMMRatio = DesOD/ MeasPixel;

		}



	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			msclr::interop::marshal_context context;
			std::string standardString = context.marshal_as<std::string>(openFileDialog1->FileName);
			LoadImageSettingsFromFile(standardString);

			updateDisplayNumbers();
		}
	}
	private: void updateimageSettings() {

	}

	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
		RevertSettings();
		updateDisplayNumbers();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void nudExposureTime_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	hScrollBar4->Value = (int)numExposureTime->Value;
	currentImageSettings.ExposureTime = (int)numExposureTime->Value * 1000;
}
private: System::Void hScrollBar4_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
	numExposureTime->Value = hScrollBar4->Value;

}

		 private: void calculatePtoMMRatio() {
			 currentImageSettings.PixToMMRatio = Convert::ToDouble( nudDesiredOD->Value / nudMeasuredOD->Value);
			 lblCalculatedRatio->Text = Convert::ToString(currentImageSettings.PixToMMRatio);
		 }
		 //auto calculate pixel to mm button pressed
private: System::Void btnPixelTomm_Click(System::Object^  sender, System::EventArgs^  e) {
	nudMeasuredOD->Value = Convert::ToDecimal(CameraA.IMGInfo.OD);
}
private: System::Void nudMeasuredOD_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	calculatePtoMMRatio();
}
private: System::Void nudDesiredOD_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	calculatePtoMMRatio();
}
};
}
