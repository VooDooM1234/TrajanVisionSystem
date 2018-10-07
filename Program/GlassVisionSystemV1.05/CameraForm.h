#pragma once
#include "Structs.h"
#include "ImageDisplay.h"

namespace GlassVisionSystemV105 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CameraForm
	/// </summary>
	public ref class CameraForm : public System::Windows::Forms::Form
	{
	public:
		CameraForm(void)
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
		~CameraForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::RadioButton^  rbCamModeManipulated;
	private: System::Windows::Forms::RadioButton^  rbCamModeCanny;
	private: System::Windows::Forms::RadioButton^  rbCamModeTH;

	private: System::Windows::Forms::RadioButton^  rbCamModeOriginal;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbCamAll;
	private: System::Windows::Forms::RadioButton^  rbCamB;
	private: System::Windows::Forms::RadioButton^  rbCamA;
	private: System::Windows::Forms::GroupBox^  groupBox6;


















	private: System::Windows::Forms::Label^  LBLODCamA;
	private: System::Windows::Forms::Label^  LBLIDCamA;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  PBCamB;
	private: System::Windows::Forms::PictureBox^  PBCamA;

	private: System::Windows::Forms::Timer^  timer1;



	private: System::Windows::Forms::Label^  LBLLDACamA;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  LBLTDACamA;

	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  LBLNDCamA;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label12;










	private: System::Windows::Forms::Label^  LBLLDPCamA;

	private: System::Windows::Forms::Label^  LBLTDPCamA;





	private: System::Windows::Forms::Label^  LBLLDPCamB;
	private: System::Windows::Forms::Label^  LBLTDPCamB;
	private: System::Windows::Forms::Label^  LBLLDACamB;
	private: System::Windows::Forms::Label^  LBLTDACamB;
	private: System::Windows::Forms::Label^  LBLNDCamB;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  LBLODCamB;
	private: System::Windows::Forms::Label^  LBLIDCamB;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  lblDestination;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::PictureBox^  pictureBox1;







	private: System::ComponentModel::IContainer^  components;

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
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->rbCamModeManipulated = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamModeCanny = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamModeTH = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamModeOriginal = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbCamAll = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamB = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamA = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->LBLLDPCamA = (gcnew System::Windows::Forms::Label());
			this->LBLTDPCamA = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->LBLLDACamA = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->LBLTDACamA = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->LBLNDCamA = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LBLODCamA = (gcnew System::Windows::Forms::Label());
			this->LBLIDCamA = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PBCamB = (gcnew System::Windows::Forms::PictureBox());
			this->PBCamA = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->LBLLDPCamB = (gcnew System::Windows::Forms::Label());
			this->LBLTDPCamB = (gcnew System::Windows::Forms::Label());
			this->LBLLDACamB = (gcnew System::Windows::Forms::Label());
			this->LBLTDACamB = (gcnew System::Windows::Forms::Label());
			this->LBLNDCamB = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->LBLODCamB = (gcnew System::Windows::Forms::Label());
			this->LBLIDCamB = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblDestination = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamA))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->rbCamModeManipulated);
			this->groupBox8->Controls->Add(this->rbCamModeCanny);
			this->groupBox8->Controls->Add(this->rbCamModeTH);
			this->groupBox8->Controls->Add(this->rbCamModeOriginal);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->Location = System::Drawing::Point(174, 436);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(314, 60);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Mode";
			// 
			// rbCamModeManipulated
			// 
			this->rbCamModeManipulated->AutoSize = true;
			this->rbCamModeManipulated->Checked = true;
			this->rbCamModeManipulated->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rbCamModeManipulated->Location = System::Drawing::Point(98, 38);
			this->rbCamModeManipulated->Name = L"rbCamModeManipulated";
			this->rbCamModeManipulated->Size = System::Drawing::Size(100, 20);
			this->rbCamModeManipulated->TabIndex = 0;
			this->rbCamModeManipulated->TabStop = true;
			this->rbCamModeManipulated->Text = L"Manipulated";
			this->rbCamModeManipulated->UseVisualStyleBackColor = true;
			// 
			// rbCamModeCanny
			// 
			this->rbCamModeCanny->AutoSize = true;
			this->rbCamModeCanny->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCamModeCanny->Location = System::Drawing::Point(98, 15);
			this->rbCamModeCanny->Name = L"rbCamModeCanny";
			this->rbCamModeCanny->Size = System::Drawing::Size(64, 20);
			this->rbCamModeCanny->TabIndex = 0;
			this->rbCamModeCanny->Text = L"Canny";
			this->rbCamModeCanny->UseVisualStyleBackColor = true;
			this->rbCamModeCanny->CheckedChanged += gcnew System::EventHandler(this, &CameraForm::rbCamModeCanny_CheckedChanged);
			// 
			// rbCamModeTH
			// 
			this->rbCamModeTH->AutoSize = true;
			this->rbCamModeTH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCamModeTH->Location = System::Drawing::Point(14, 38);
			this->rbCamModeTH->Name = L"rbCamModeTH";
			this->rbCamModeTH->Size = System::Drawing::Size(87, 20);
			this->rbCamModeTH->TabIndex = 0;
			this->rbCamModeTH->Text = L"Threshold";
			this->rbCamModeTH->UseVisualStyleBackColor = true;
			// 
			// rbCamModeOriginal
			// 
			this->rbCamModeOriginal->AutoSize = true;
			this->rbCamModeOriginal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rbCamModeOriginal->Location = System::Drawing::Point(14, 15);
			this->rbCamModeOriginal->Name = L"rbCamModeOriginal";
			this->rbCamModeOriginal->Size = System::Drawing::Size(72, 20);
			this->rbCamModeOriginal->TabIndex = 0;
			this->rbCamModeOriginal->Text = L"Original";
			this->rbCamModeOriginal->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbCamAll);
			this->groupBox1->Controls->Add(this->rbCamB);
			this->groupBox1->Controls->Add(this->rbCamA);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 436);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(152, 60);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Camera";
			// 
			// rbCamAll
			// 
			this->rbCamAll->AutoSize = true;
			this->rbCamAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCamAll->Location = System::Drawing::Point(105, 15);
			this->rbCamAll->Name = L"rbCamAll";
			this->rbCamAll->Size = System::Drawing::Size(41, 20);
			this->rbCamAll->TabIndex = 0;
			this->rbCamAll->Text = L"All";
			this->rbCamAll->UseVisualStyleBackColor = true;
			this->rbCamAll->CheckedChanged += gcnew System::EventHandler(this, &CameraForm::rbCamAll_CheckedChanged);
			// 
			// rbCamB
			// 
			this->rbCamB->AutoSize = true;
			this->rbCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCamB->Location = System::Drawing::Point(14, 38);
			this->rbCamB->Name = L"rbCamB";
			this->rbCamB->Size = System::Drawing::Size(86, 20);
			this->rbCamB->TabIndex = 0;
			this->rbCamB->Text = L"Camera B";
			this->rbCamB->UseVisualStyleBackColor = true;
			this->rbCamB->CheckedChanged += gcnew System::EventHandler(this, &CameraForm::rbCamB_CheckedChanged);
			// 
			// rbCamA
			// 
			this->rbCamA->AutoSize = true;
			this->rbCamA->Checked = true;
			this->rbCamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCamA->Location = System::Drawing::Point(14, 15);
			this->rbCamA->Name = L"rbCamA";
			this->rbCamA->Size = System::Drawing::Size(86, 20);
			this->rbCamA->TabIndex = 0;
			this->rbCamA->TabStop = true;
			this->rbCamA->Text = L"Camera A";
			this->rbCamA->UseVisualStyleBackColor = true;
			this->rbCamA->CheckedChanged += gcnew System::EventHandler(this, &CameraForm::rbCamA_CheckedChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->LBLLDPCamA);
			this->groupBox6->Controls->Add(this->LBLTDPCamA);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->LBLLDACamA);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->LBLTDACamA);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->LBLNDCamA);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->LBLODCamA);
			this->groupBox6->Controls->Add(this->LBLIDCamA);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(6, 253);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(308, 179);
			this->groupBox6->TabIndex = 26;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Cam A Info";
			this->groupBox6->Visible = false;
			this->groupBox6->Enter += gcnew System::EventHandler(this, &CameraForm::groupBox6_Enter);
			// 
			// LBLLDPCamA
			// 
			this->LBLLDPCamA->AutoSize = true;
			this->LBLLDPCamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLLDPCamA->Location = System::Drawing::Point(173, 147);
			this->LBLLDPCamA->Name = L"LBLLDPCamA";
			this->LBLLDPCamA->Size = System::Drawing::Size(32, 16);
			this->LBLLDPCamA->TabIndex = 53;
			this->LBLLDPCamA->Text = L"XXX";
			// 
			// LBLTDPCamA
			// 
			this->LBLTDPCamA->AutoSize = true;
			this->LBLTDPCamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLTDPCamA->Location = System::Drawing::Point(173, 131);
			this->LBLTDPCamA->Name = L"LBLTDPCamA";
			this->LBLTDPCamA->Size = System::Drawing::Size(32, 16);
			this->LBLTDPCamA->TabIndex = 52;
			this->LBLTDPCamA->Text = L"XXX";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(15, 147);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(159, 16);
			this->label12->TabIndex = 51;
			this->label12->Text = L"Largest Defect Perimeter:";
			this->label12->Click += gcnew System::EventHandler(this, &CameraForm::label12_Click);
			// 
			// LBLLDACamA
			// 
			this->LBLLDACamA->AutoSize = true;
			this->LBLLDACamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLLDACamA->Location = System::Drawing::Point(173, 115);
			this->LBLLDACamA->Name = L"LBLLDACamA";
			this->LBLLDACamA->Size = System::Drawing::Size(32, 16);
			this->LBLLDACamA->TabIndex = 50;
			this->LBLLDACamA->Text = L"XXX";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(15, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 16);
			this->label11->TabIndex = 49;
			this->label11->Text = L"Total Defect Perimeter:";
			// 
			// LBLTDACamA
			// 
			this->LBLTDACamA->AutoSize = true;
			this->LBLTDACamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLTDACamA->Location = System::Drawing::Point(173, 99);
			this->LBLTDACamA->Name = L"LBLTDACamA";
			this->LBLTDACamA->Size = System::Drawing::Size(32, 16);
			this->LBLTDACamA->TabIndex = 48;
			this->LBLTDACamA->Text = L"XXX";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(15, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 16);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Largest Defect Area:";
			this->label9->Click += gcnew System::EventHandler(this, &CameraForm::label9_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 99);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 16);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Total Defect Area:";
			// 
			// LBLNDCamA
			// 
			this->LBLNDCamA->AutoSize = true;
			this->LBLNDCamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLNDCamA->Location = System::Drawing::Point(173, 83);
			this->LBLNDCamA->Name = L"LBLNDCamA";
			this->LBLNDCamA->Size = System::Drawing::Size(32, 16);
			this->LBLNDCamA->TabIndex = 44;
			this->LBLNDCamA->Text = L"XXX";
			this->LBLNDCamA->Click += gcnew System::EventHandler(this, &CameraForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 16);
			this->label5->TabIndex = 43;
			this->label5->Text = L"No. Defects:";
			this->label5->Click += gcnew System::EventHandler(this, &CameraForm::label5_Click);
			// 
			// LBLODCamA
			// 
			this->LBLODCamA->AutoSize = true;
			this->LBLODCamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLODCamA->Location = System::Drawing::Point(36, 48);
			this->LBLODCamA->Name = L"LBLODCamA";
			this->LBLODCamA->Size = System::Drawing::Size(80, 16);
			this->LBLODCamA->TabIndex = 26;
			this->LBLODCamA->Text = L"XXXXXXXXX";
			// 
			// LBLIDCamA
			// 
			this->LBLIDCamA->AutoSize = true;
			this->LBLIDCamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLIDCamA->Location = System::Drawing::Point(37, 32);
			this->LBLIDCamA->Name = L"LBLIDCamA";
			this->LBLIDCamA->Size = System::Drawing::Size(80, 16);
			this->LBLIDCamA->TabIndex = 25;
			this->LBLIDCamA->Text = L"XXXXXXXXX";
			this->LBLIDCamA->Click += gcnew System::EventHandler(this, &CameraForm::LBLIDCamA_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(7, 48);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(31, 16);
			this->label19->TabIndex = 18;
			this->label19->Text = L"OD:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(14, 32);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(24, 16);
			this->label21->TabIndex = 17;
			this->label21->Text = L"ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(460, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Camera B";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &CameraForm::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(129, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 18);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Camera A";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &CameraForm::label1_Click);
			// 
			// PBCamB
			// 
			this->PBCamB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PBCamB->Location = System::Drawing::Point(379, 31);
			this->PBCamB->Name = L"PBCamB";
			this->PBCamB->Size = System::Drawing::Size(216, 216);
			this->PBCamB->TabIndex = 23;
			this->PBCamB->TabStop = false;
			this->PBCamB->Visible = false;
			this->PBCamB->Click += gcnew System::EventHandler(this, &CameraForm::PBCamB_Click);
			// 
			// PBCamA
			// 
			this->PBCamA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PBCamA->Location = System::Drawing::Point(47, 31);
			this->PBCamA->Name = L"PBCamA";
			this->PBCamA->Size = System::Drawing::Size(216, 216);
			this->PBCamA->TabIndex = 22;
			this->PBCamA->TabStop = false;
			this->PBCamA->Visible = false;
			this->PBCamA->Click += gcnew System::EventHandler(this, &CameraForm::PBCamA_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 33;
			this->timer1->Tick += gcnew System::EventHandler(this, &CameraForm::timer1_Tick);
			// 
			// LBLLDPCamB
			// 
			this->LBLLDPCamB->AutoSize = true;
			this->LBLLDPCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLLDPCamB->Location = System::Drawing::Point(167, 147);
			this->LBLLDPCamB->Name = L"LBLLDPCamB";
			this->LBLLDPCamB->Size = System::Drawing::Size(32, 16);
			this->LBLLDPCamB->TabIndex = 81;
			this->LBLLDPCamB->Text = L"XXX";
			// 
			// LBLTDPCamB
			// 
			this->LBLTDPCamB->AutoSize = true;
			this->LBLTDPCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLTDPCamB->Location = System::Drawing::Point(167, 131);
			this->LBLTDPCamB->Name = L"LBLTDPCamB";
			this->LBLTDPCamB->Size = System::Drawing::Size(32, 16);
			this->LBLTDPCamB->TabIndex = 80;
			this->LBLTDPCamB->Text = L"XXX";
			// 
			// LBLLDACamB
			// 
			this->LBLLDACamB->AutoSize = true;
			this->LBLLDACamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLLDACamB->Location = System::Drawing::Point(167, 115);
			this->LBLLDACamB->Name = L"LBLLDACamB";
			this->LBLLDACamB->Size = System::Drawing::Size(32, 16);
			this->LBLLDACamB->TabIndex = 79;
			this->LBLLDACamB->Text = L"XXX";
			// 
			// LBLTDACamB
			// 
			this->LBLTDACamB->AutoSize = true;
			this->LBLTDACamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLTDACamB->Location = System::Drawing::Point(167, 99);
			this->LBLTDACamB->Name = L"LBLTDACamB";
			this->LBLTDACamB->Size = System::Drawing::Size(32, 16);
			this->LBLTDACamB->TabIndex = 78;
			this->LBLTDACamB->Text = L"XXX";
			// 
			// LBLNDCamB
			// 
			this->LBLNDCamB->AutoSize = true;
			this->LBLNDCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLNDCamB->Location = System::Drawing::Point(167, 83);
			this->LBLNDCamB->Name = L"LBLNDCamB";
			this->LBLNDCamB->Size = System::Drawing::Size(32, 16);
			this->LBLNDCamB->TabIndex = 77;
			this->LBLNDCamB->Text = L"XXX";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(12, 147);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(159, 16);
			this->label17->TabIndex = 76;
			this->label17->Text = L"Largest Defect Perimeter:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(12, 131);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(145, 16);
			this->label20->TabIndex = 75;
			this->label20->Text = L"Total Defect Perimeter:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(12, 115);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(130, 16);
			this->label24->TabIndex = 74;
			this->label24->Text = L"Largest Defect Area:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(12, 99);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(116, 16);
			this->label25->TabIndex = 73;
			this->label25->Text = L"Total Defect Area:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(12, 83);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(81, 16);
			this->label27->TabIndex = 72;
			this->label27->Text = L"No. Defects:";
			// 
			// LBLODCamB
			// 
			this->LBLODCamB->AutoSize = true;
			this->LBLODCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLODCamB->Location = System::Drawing::Point(40, 48);
			this->LBLODCamB->Name = L"LBLODCamB";
			this->LBLODCamB->Size = System::Drawing::Size(80, 16);
			this->LBLODCamB->TabIndex = 70;
			this->LBLODCamB->Text = L"XXXXXXXXX";
			// 
			// LBLIDCamB
			// 
			this->LBLIDCamB->AutoSize = true;
			this->LBLIDCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLIDCamB->Location = System::Drawing::Point(40, 32);
			this->LBLIDCamB->Name = L"LBLIDCamB";
			this->LBLIDCamB->Size = System::Drawing::Size(80, 16);
			this->LBLIDCamB->TabIndex = 69;
			this->LBLIDCamB->Text = L"XXXXXXXXX";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(5, 48);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(31, 16);
			this->label32->TabIndex = 68;
			this->label32->Text = L"OD:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(12, 32);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 16);
			this->label33->TabIndex = 67;
			this->label33->Text = L"ID:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->LBLODCamB);
			this->groupBox3->Controls->Add(this->LBLLDPCamB);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->LBLTDPCamB);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->LBLLDACamB);
			this->groupBox3->Controls->Add(this->LBLIDCamB);
			this->groupBox3->Controls->Add(this->LBLTDACamB);
			this->groupBox3->Controls->Add(this->LBLNDCamB);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(336, 253);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(308, 179);
			this->groupBox3->TabIndex = 82;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cam B Info";
			this->groupBox3->Visible = false;
			// 
			// lblDestination
			// 
			this->lblDestination->AutoSize = true;
			this->lblDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDestination->Location = System::Drawing::Point(10, 24);
			this->lblDestination->Name = L"lblDestination";
			this->lblDestination->Size = System::Drawing::Size(80, 24);
			this->lblDestination->TabIndex = 5;
			this->lblDestination->Text = L"XXXXX";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblDestination);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(494, 436);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(150, 60);
			this->groupBox2->TabIndex = 83;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Destination";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(6, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(638, 425);
			this->pictureBox1->TabIndex = 84;
			this->pictureBox1->TabStop = false;
			// 
			// CameraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 500);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PBCamB);
			this->Controls->Add(this->PBCamA);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CameraForm";
			this->Text = L"CameraForm";
			this->Load += gcnew System::EventHandler(this, &CameraForm::CameraForm_Load);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamA))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PBCamA->CreateGraphics()->Clear(Color::Gray);
		PBCamB->CreateGraphics()->Clear(Color::Gray);
		//PBCamC->CreateGraphics()->Clear(Color::Gray);
		pictureBox1->CreateGraphics()->Clear(Color::Gray);

		if (rbCamAll->Checked == true) {
			//AllCamPanel->Visible = true;
		}
		else
		{
			//AllCamPanel->Visible = false;
		}
	}

	private:
		System::Drawing::Bitmap^ ConvertMatToBitmap(cv::Mat matToConvert) {
			System::Drawing::Bitmap^ result;
			if (matToConvert.empty() == false)
				result = gcnew System::Drawing::Bitmap(matToConvert.cols, matToConvert.rows, (int)matToConvert.step1(), System::Drawing::Imaging::PixelFormat::Format24bppRgb, System::IntPtr(matToConvert.data));
			return result;
		}

	private: Void DrawImage(ImageInformation CamInfo, System::Windows::Forms::PictureBox ^PicBox) {
		cv::Mat DisplayImage;
		if (rbCamModeManipulated->Checked == true) {
			DisplayImage = CamInfo.manipulated;
		}
		else if (rbCamModeCanny->Checked == true) {
			//DisplayImage = CamInfo.canny;
			cv::cvtColor(CamInfo.canny, DisplayImage, CV_GRAY2RGB);
		}
		else if (rbCamModeTH->Checked == true) {
			cv::cvtColor(CamInfo.binaryThreshold, DisplayImage, CV_GRAY2RGB);
		}
		else {
			DisplayImage = CamInfo.original;
		}
		System::Drawing::Bitmap^ bitmap;
		bitmap = ConvertMatToBitmap(DisplayImage);
		System::Drawing::RectangleF rect((float)0, (float)0, (float)PicBox->Width, (float)PicBox->Height);
		System::Drawing::Graphics^ graphics = PicBox->CreateGraphics();
		if (bitmap == nullptr || (!CamInfo.ImageCapture.isOpened() && !CamInfo.camera->IsOpen())) {
		
			graphics->Clear(System::Drawing::Color::Gray);
			graphics->DrawString("Camera Is Not Connected!", gcnew System::Drawing::Font("Arial", 24, FontStyle::Bold), SystemBrushes::WindowText, rect/*new Point(100, 250)*/);
		}
		else
		{
			graphics->DrawImage(bitmap, rect);
		}
		delete bitmap;
	}


	private: Void ImageShow() {
		
		try {
			if (rbCamA->Checked == true) {
				DrawImage(CameraA.IMGInfo, pictureBox1);
			}
		}
		catch (...) {
			System::Drawing::RectangleF rect((float)0, (float)0, (float)pictureBox1->Width, (float)pictureBox1->Height);
			System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
			graphics->Clear(System::Drawing::Color::Gray);
			graphics->DrawString("Camera Is Not Connected!", gcnew System::Drawing::Font("Arial", 24, FontStyle::Bold), SystemBrushes::WindowText, rect/*new Point(100, 250)*/);
		}

			if (rbCamB->Checked == true) {
				DrawImage(CameraB.IMGInfo, pictureBox1);
			}

			if (rbCamAll->Checked == true) {
				DrawImage(CameraA.IMGInfo, PBCamA);
				DrawImage(CameraB.IMGInfo, PBCamB);
			}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (CameraA.IMGInfo.ImageCapture.isOpened() || CameraA.IMGInfo.camera->IsOpen()) {
			
				if (CameraA.IMGInfo.multiConcentricCircleDetected) {
					LBLIDCamA->Text = "ERROR";
					LBLODCamA->Text = "ERROR";

				}
				else {
					//convert value to string, displaying both in pixels and converted mm, the "F" denotes default rounding to 2 decimial places
					String^ IDmmtxt = (CameraA.IMGInfo.ID * currentImageSettings.PixToMMRatio).ToString("F") + "mm (+/-) " + (CameraA.IMGInfo.IDVariance * currentImageSettings.PixToMMRatio).ToString("F") + "mm";
					String^ IDpxTxt = (CameraA.IMGInfo.ID).ToString("F") + "p (+/-)" + CameraA.IMGInfo.IDVariance.ToString("F") + "p";
					String^ ODmmtxt = (CameraA.IMGInfo.OD * currentImageSettings.PixToMMRatio).ToString("F") + "mm (+/-) " + (CameraA.IMGInfo.ODVariance * currentImageSettings.PixToMMRatio).ToString("F") + "mm";
					String^ ODpxTxt = (CameraA.IMGInfo.OD).ToString("F") + "p (+/-)" + CameraA.IMGInfo.ODVariance.ToString("F") + "p";
					LBLIDCamA->Text = IDmmtxt + " - [" + IDpxTxt + "]";
					LBLODCamA->Text = ODmmtxt + " - [" + ODpxTxt + "}";
					LBLNDCamA->Text = CameraA.IMGInfo.IMGDefects.defectCount.ToString();
					LBLLDACamA->Text = CameraA.IMGInfo.IMGDefects.largestDefectArea.ToString();
					LBLTDACamA->Text = CameraA.IMGInfo.IMGDefects.totalDefectArea.ToString();
					LBLLDPCamA->Text = CameraA.IMGInfo.IMGDefects.largestDefectPerimeter.ToString();
					LBLTDPCamA->Text = CameraA.IMGInfo.IMGDefects.totalDefectPerimeter.ToString();
				}
			}
		}
		catch (...) {
			CameraA.IMGInfo.ImageCapture.release();
		}

		if (CameraB.IMGInfo.ImageCapture.isOpened()) {
			//CameraA.ProcessImage();
			//Images = processing.IMGmain();
			if (CameraB.IMGInfo.multiConcentricCircleDetected) {
				LBLIDCamB->Text = "ERROR";
				LBLODCamB->Text = "ERROR";
			}
			else {
				//convert value to string, displaying both in pixels and converted mm, the "F" denotes default rounding to 2 decimial places
				String^ IDmmtxt = (CameraB.IMGInfo.ID * currentImageSettings.PixToMMRatio).ToString("F") + "mm (+/-) " + (CameraB.IMGInfo.IDVariance * currentImageSettings.PixToMMRatio).ToString("F") + "mm";
				String^ IDpxTxt = (CameraB.IMGInfo.ID).ToString("F") + "p (+/-)" + CameraB.IMGInfo.IDVariance.ToString("F") + "p";
				String^ ODmmtxt = (CameraB.IMGInfo.OD * currentImageSettings.PixToMMRatio).ToString("F") + "mm (+/-) " + (CameraB.IMGInfo.ODVariance * currentImageSettings.PixToMMRatio).ToString("F") + "mm";
				String^ ODpxTxt = (CameraB.IMGInfo.OD).ToString("F") + "p (+/-)" + CameraB.IMGInfo.ODVariance.ToString("F") + "p";
				LBLIDCamB->Text = IDmmtxt + " - [" + IDpxTxt + "]";
				LBLODCamB->Text = ODmmtxt + " - [" + ODpxTxt + "}";
				LBLNDCamB->Text = CameraB.IMGInfo.IMGDefects.defectCount.ToString();
				LBLLDACamB->Text = CameraB.IMGInfo.IMGDefects.largestDefectArea.ToString();
				LBLTDACamB->Text = CameraB.IMGInfo.IMGDefects.totalDefectArea.ToString();
				LBLLDPCamB->Text = CameraB.IMGInfo.IMGDefects.largestDefectPerimeter.ToString();
				LBLTDPCamB->Text = CameraB.IMGInfo.IMGDefects.totalDefectPerimeter.ToString();

			}
		}
		/*else {
			CameraB.IMGInfo = *new ImageInformation();
			CameraB.CameraInitialization(1, "CamB");
		}*/
		UpdateDeterminedDestination();

		ImageShow();
	}

			 private: void UpdateDeterminedDestination() {

				 if (CameraA.IMGInfo.chutePriority < CameraB.IMGInfo.chutePriority) {
					 lblDestination->Text = getChuteString(CameraA.IMGInfo.chute);
				 }
				 else {
					 lblDestination->Text = getChuteString(CameraB.IMGInfo.chute);
				 }
			 }

	private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void PBCamA_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void PBCamB_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void rbCamA_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		pictureBox1->Visible = true;

		PBCamA->Visible = false;
		PBCamB->Visible = false;
		label1->Visible = false;
		label3->Visible = false;

		groupBox6->Visible = false;
		groupBox3->Visible = false;
	}
	private: System::Void rbCamB_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Visible = true;

		PBCamA->Visible = false;
		PBCamB->Visible = false;
		label1->Visible = false;
		label3->Visible = false;

		groupBox6->Visible = false;
		groupBox3->Visible = false;
	}
	private: System::Void rbCamAll_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Visible = false;

		PBCamA->Visible = true;
		PBCamB->Visible = true;
		label1->Visible = true;
		label3->Visible = true;

		groupBox6->Visible = true;
		groupBox3->Visible = true;
	}
	private: System::Void LBLIDVarCamA_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void rbCamModeCanny_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void LBLIDCamA_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CameraForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblDestination_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
