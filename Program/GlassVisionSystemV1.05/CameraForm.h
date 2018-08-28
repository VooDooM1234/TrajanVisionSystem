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
	private: System::Windows::Forms::RadioButton^  rbCamModeBW;
	private: System::Windows::Forms::RadioButton^  rbCamModeOriginal;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbCamAll;
	private: System::Windows::Forms::RadioButton^  rbCamB;
	private: System::Windows::Forms::RadioButton^  rbCamA;
	private: System::Windows::Forms::GroupBox^  groupBox6;






	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  LBLODCamB;

	private: System::Windows::Forms::Label^  LBLIDCamB;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;




	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  LBLODCamA;
	private: System::Windows::Forms::Label^  LBLIDCamA;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  PBCamB;
	private: System::Windows::Forms::PictureBox^  PBCamA;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  lblDestination;
	private: System::Windows::Forms::Label^  label2;
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
			this->rbCamModeBW = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamModeOriginal = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbCamAll = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamB = (gcnew System::Windows::Forms::RadioButton());
			this->rbCamA = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblDestination = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->LBLODCamB = (gcnew System::Windows::Forms::Label());
			this->LBLIDCamB = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->LBLODCamA = (gcnew System::Windows::Forms::Label());
			this->LBLIDCamA = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PBCamB = (gcnew System::Windows::Forms::PictureBox());
			this->PBCamA = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->rbCamModeManipulated);
			this->groupBox8->Controls->Add(this->rbCamModeCanny);
			this->groupBox8->Controls->Add(this->rbCamModeBW);
			this->groupBox8->Controls->Add(this->rbCamModeOriginal);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->Location = System::Drawing::Point(174, 436);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(464, 60);
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
			this->rbCamModeManipulated->Location = System::Drawing::Point(92, 38);
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
			this->rbCamModeCanny->Location = System::Drawing::Point(92, 15);
			this->rbCamModeCanny->Name = L"rbCamModeCanny";
			this->rbCamModeCanny->Size = System::Drawing::Size(64, 20);
			this->rbCamModeCanny->TabIndex = 0;
			this->rbCamModeCanny->Text = L"Canny";
			this->rbCamModeCanny->UseVisualStyleBackColor = true;
			// 
			// rbCamModeBW
			// 
			this->rbCamModeBW->AutoSize = true;
			this->rbCamModeBW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCamModeBW->Location = System::Drawing::Point(14, 38);
			this->rbCamModeBW->Name = L"rbCamModeBW";
			this->rbCamModeBW->Size = System::Drawing::Size(57, 20);
			this->rbCamModeBW->TabIndex = 0;
			this->rbCamModeBW->Text = L"B&&W";
			this->rbCamModeBW->UseVisualStyleBackColor = true;
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
			this->groupBox6->Controls->Add(this->groupBox2);
			this->groupBox6->Controls->Add(this->label29);
			this->groupBox6->Controls->Add(this->LBLODCamB);
			this->groupBox6->Controls->Add(this->LBLIDCamB);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->LBLODCamA);
			this->groupBox6->Controls->Add(this->LBLIDCamA);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(12, 250);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(626, 177);
			this->groupBox6->TabIndex = 26;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Cam Info";
			this->groupBox6->Visible = false;
			this->groupBox6->Enter += gcnew System::EventHandler(this, &CameraForm::groupBox6_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblDestination);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(162, 96);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(278, 75);
			this->groupBox2->TabIndex = 42;
			this->groupBox2->TabStop = false;
			// 
			// lblDestination
			// 
			this->lblDestination->AutoSize = true;
			this->lblDestination->Location = System::Drawing::Point(164, 22);
			this->lblDestination->Name = L"lblDestination";
			this->lblDestination->Size = System::Drawing::Size(32, 16);
			this->lblDestination->TabIndex = 1;
			this->lblDestination->Text = L"XXX";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Determined Destination:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(300, 16);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(20, 16);
			this->label29->TabIndex = 37;
			this->label29->Text = L"B:";
			// 
			// LBLODCamB
			// 
			this->LBLODCamB->AutoSize = true;
			this->LBLODCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLODCamB->Location = System::Drawing::Point(344, 53);
			this->LBLODCamB->Name = L"LBLODCamB";
			this->LBLODCamB->Size = System::Drawing::Size(80, 16);
			this->LBLODCamB->TabIndex = 36;
			this->LBLODCamB->Text = L"XXXXXXXXX";
			// 
			// LBLIDCamB
			// 
			this->LBLIDCamB->AutoSize = true;
			this->LBLIDCamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLIDCamB->Location = System::Drawing::Point(343, 32);
			this->LBLIDCamB->Name = L"LBLIDCamB";
			this->LBLIDCamB->Size = System::Drawing::Size(80, 16);
			this->LBLIDCamB->TabIndex = 35;
			this->LBLIDCamB->Text = L"XXXXXXXXX";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(314, 53);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(31, 16);
			this->label32->TabIndex = 34;
			this->label32->Text = L"OD:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(320, 32);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 16);
			this->label33->TabIndex = 33;
			this->label33->Text = L"ID:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(15, 16);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 16);
			this->label22->TabIndex = 28;
			this->label22->Text = L"A:";
			// 
			// LBLODCamA
			// 
			this->LBLODCamA->AutoSize = true;
			this->LBLODCamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLODCamA->Location = System::Drawing::Point(39, 53);
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
			this->LBLIDCamA->Location = System::Drawing::Point(38, 32);
			this->LBLIDCamA->Name = L"LBLIDCamA";
			this->LBLIDCamA->Size = System::Drawing::Size(80, 16);
			this->LBLIDCamA->TabIndex = 25;
			this->LBLIDCamA->Text = L"XXXXXXXXX";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(9, 53);
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
			this->label21->Location = System::Drawing::Point(15, 32);
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
			this->label3->Location = System::Drawing::Point(456, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 18);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Camera B:";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &CameraForm::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(107, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 18);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Camera A:";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &CameraForm::label1_Click);
			// 
			// PBCamB
			// 
			this->PBCamB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PBCamB->Location = System::Drawing::Point(347, 28);
			this->PBCamB->Name = L"PBCamB";
			this->PBCamB->Size = System::Drawing::Size(288, 216);
			this->PBCamB->TabIndex = 23;
			this->PBCamB->TabStop = false;
			this->PBCamB->Visible = false;
			this->PBCamB->Click += gcnew System::EventHandler(this, &CameraForm::PBCamB_Click);
			// 
			// PBCamA
			// 
			this->PBCamA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PBCamA->Location = System::Drawing::Point(20, 28);
			this->PBCamA->Name = L"PBCamA";
			this->PBCamA->Size = System::Drawing::Size(288, 216);
			this->PBCamA->TabIndex = 22;
			this->PBCamA->TabStop = false;
			this->PBCamA->Visible = false;
			this->PBCamA->Click += gcnew System::EventHandler(this, &CameraForm::PBCamA_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(42, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(576, 432);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 33;
			this->timer1->Tick += gcnew System::EventHandler(this, &CameraForm::timer1_Tick);
			// 
			// CameraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 500);
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
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCamA))->EndInit();
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
		else if (rbCamModeBW->Checked == true) {
			cv::cvtColor(CamInfo.grayscale, DisplayImage, CV_GRAY2RGB);
		}
		else {
			DisplayImage = CamInfo.original;
		}
		System::Drawing::Bitmap^ bitmap;
		bitmap = ConvertMatToBitmap(DisplayImage);
		System::Drawing::RectangleF rect((float)0, (float)0, (float)PicBox->Width, (float)PicBox->Height);
		System::Drawing::Graphics^ graphics = PicBox->CreateGraphics();
		//cv::imshow("Original", CamInfo.original);
		if (bitmap == nullptr || (!CamInfo.ImageCapture.isOpened() && !CamInfo.camera->IsOpen())) {
			//pictureBox1->Text = "test";
			//System::String message = new System::String( "error";
			graphics->Clear(System::Drawing::Color::Gray);
			graphics->DrawString("Camera Is Not Connected!", gcnew System::Drawing::Font("Arial", 24, FontStyle::Bold), SystemBrushes::WindowText, rect/*new Point(100, 250)*/);
			//graphics->DrawString(;
		}
		else
		{
			graphics->DrawImage(bitmap, rect);
		}
		delete bitmap;
	}


	private: Void ImageShow() {
		//System::Drawing::Bitmap^ bitmap;
		//System::Drawing::Graphics^ graphic = pictureBox1->CreateGraphics();

		if (rbCamA->Checked == true) {
			DrawImage(CameraA.IMGInfo, pictureBox1);
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
		if (CameraA.IMGInfo.ImageCapture.isOpened()) {
			//CameraA.ProcessImage();
			//Images = processing.IMGmain();
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


			}
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
			}
		}
		/*else {
			CameraB.IMGInfo = *new ImageInformation();
			CameraB.CameraInitialization(1, "CamB");
		}*/
		ImageShow();
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
	}
	private: System::Void rbCamB_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Visible = true;

		PBCamA->Visible = false;
		PBCamB->Visible = false;
		label1->Visible = false;
		label3->Visible = false;

		groupBox6->Visible = false;
	}
	private: System::Void rbCamAll_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Visible = false;

		PBCamA->Visible = true;
		PBCamB->Visible = true;
		label1->Visible = true;
		label3->Visible = true;

		groupBox6->Visible = true;
	}
	private: System::Void LBLIDVarCamA_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
