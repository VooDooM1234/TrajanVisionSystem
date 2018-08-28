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
	/// Summary for InformationForm
	/// </summary>
	public ref class InformationForm : public System::Windows::Forms::Form
	{
	public:
		InformationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->DoubleBuffered = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InformationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected:
	private: System::Windows::Forms::Label^  lblPN;
	private: System::Windows::Forms::GroupBox^  gbChuteInformation;











	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  lblFalureRate;
	private: System::Windows::Forms::Label^  lblTotal;
	private: System::Windows::Forms::Label^  lblNumDefects;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::Label^  lblOD;
	private: System::Windows::Forms::Label^  lblID;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblDescription;
	private: System::Windows::Forms::Label^  lblRunMode;
	private: System::Windows::Forms::Button^  BtnStartStopBatch;
	private: System::Windows::Forms::Label^  lblRunTime;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  RunTimeTimer;
	private: System::Windows::Forms::GroupBox^  gbA;
	private: System::Windows::Forms::GroupBox^  gbC;




	private: System::Windows::Forms::GroupBox^  gbTuscos;
	private: System::Windows::Forms::GroupBox^  gbD;


	private: System::Windows::Forms::GroupBox^  gbB;

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Label^  lblDCount;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  lblBCount;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  lblACount;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lblCCount;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  lblTusCount;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Timer^  tmrtooltip;
	private: System::Windows::Forms::Button^  button1;



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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblRunMode = (gcnew System::Windows::Forms::Label());
			this->BtnStartStopBatch = (gcnew System::Windows::Forms::Button());
			this->gbChuteInformation = (gcnew System::Windows::Forms::GroupBox());
			this->gbD = (gcnew System::Windows::Forms::GroupBox());
			this->lblDCount = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->gbB = (gcnew System::Windows::Forms::GroupBox());
			this->lblBCount = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->gbA = (gcnew System::Windows::Forms::GroupBox());
			this->lblACount = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->gbC = (gcnew System::Windows::Forms::GroupBox());
			this->lblCCount = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->gbTuscos = (gcnew System::Windows::Forms::GroupBox());
			this->lblTusCount = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblRunTime = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblFalureRate = (gcnew System::Windows::Forms::Label());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->lblNumDefects = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblOD = (gcnew System::Windows::Forms::Label());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblPN = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->RunTimeTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tmrtooltip = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox2->SuspendLayout();
			this->gbChuteInformation->SuspendLayout();
			this->gbD->SuspendLayout();
			this->gbB->SuspendLayout();
			this->gbA->SuspendLayout();
			this->gbC->SuspendLayout();
			this->gbTuscos->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->lblRunMode);
			this->groupBox2->Controls->Add(this->BtnStartStopBatch);
			this->groupBox2->Controls->Add(this->gbChuteInformation);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(420, 500);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Information:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(291, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 29);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Glass Inspection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InformationForm::button1_Click);
			// 
			// lblRunMode
			// 
			this->lblRunMode->AutoSize = true;
			this->lblRunMode->Location = System::Drawing::Point(132, 132);
			this->lblRunMode->Name = L"lblRunMode";
			this->lblRunMode->Size = System::Drawing::Size(118, 16);
			this->lblRunMode->TabIndex = 30;
			this->lblRunMode->Text = L"Batch Not Running";
			this->lblRunMode->Click += gcnew System::EventHandler(this, &InformationForm::lblRunMode_Click);
			// 
			// BtnStartStopBatch
			// 
			this->BtnStartStopBatch->Location = System::Drawing::Point(12, 126);
			this->BtnStartStopBatch->Name = L"BtnStartStopBatch";
			this->BtnStartStopBatch->Size = System::Drawing::Size(105, 29);
			this->BtnStartStopBatch->TabIndex = 27;
			this->BtnStartStopBatch->Text = L"Start Batch";
			this->BtnStartStopBatch->UseVisualStyleBackColor = true;
			this->BtnStartStopBatch->Click += gcnew System::EventHandler(this, &InformationForm::BtnStartStopBatch_Click);
			// 
			// gbChuteInformation
			// 
			this->gbChuteInformation->Controls->Add(this->gbD);
			this->gbChuteInformation->Controls->Add(this->gbB);
			this->gbChuteInformation->Controls->Add(this->gbA);
			this->gbChuteInformation->Controls->Add(this->gbC);
			this->gbChuteInformation->Controls->Add(this->gbTuscos);
			this->gbChuteInformation->Location = System::Drawing::Point(6, 275);
			this->gbChuteInformation->Name = L"gbChuteInformation";
			this->gbChuteInformation->Size = System::Drawing::Size(408, 219);
			this->gbChuteInformation->TabIndex = 23;
			this->gbChuteInformation->TabStop = false;
			this->gbChuteInformation->Tag = L"";
			this->gbChuteInformation->Text = L"Chute Information:";
			// 
			// gbD
			// 
			this->gbD->Controls->Add(this->lblDCount);
			this->gbD->Controls->Add(this->label18);
			this->gbD->Location = System::Drawing::Point(208, 143);
			this->gbD->Name = L"gbD";
			this->gbD->Size = System::Drawing::Size(195, 70);
			this->gbD->TabIndex = 35;
			this->gbD->TabStop = false;
			this->gbD->Text = L"Chute D";
			// 
			// lblDCount
			// 
			this->lblDCount->AutoSize = true;
			this->lblDCount->Location = System::Drawing::Point(57, 18);
			this->lblDCount->Name = L"lblDCount";
			this->lblDCount->Size = System::Drawing::Size(80, 16);
			this->lblDCount->TabIndex = 33;
			this->lblDCount->Text = L"XXXXXXXXX";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 18);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 16);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Count:";
			// 
			// gbB
			// 
			this->gbB->Controls->Add(this->lblBCount);
			this->gbB->Controls->Add(this->label16);
			this->gbB->Location = System::Drawing::Point(208, 72);
			this->gbB->Name = L"gbB";
			this->gbB->Size = System::Drawing::Size(195, 70);
			this->gbB->TabIndex = 35;
			this->gbB->TabStop = false;
			this->gbB->Text = L"Chute B";
			// 
			// lblBCount
			// 
			this->lblBCount->AutoSize = true;
			this->lblBCount->Location = System::Drawing::Point(57, 18);
			this->lblBCount->Name = L"lblBCount";
			this->lblBCount->Size = System::Drawing::Size(80, 16);
			this->lblBCount->TabIndex = 33;
			this->lblBCount->Text = L"XXXXXXXXX";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 18);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 16);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Count:";
			// 
			// gbA
			// 
			this->gbA->Controls->Add(this->lblACount);
			this->gbA->Controls->Add(this->label12);
			this->gbA->Location = System::Drawing::Point(6, 72);
			this->gbA->Name = L"gbA";
			this->gbA->Size = System::Drawing::Size(195, 70);
			this->gbA->TabIndex = 34;
			this->gbA->TabStop = false;
			this->gbA->Text = L"Chute A";
			// 
			// lblACount
			// 
			this->lblACount->AutoSize = true;
			this->lblACount->Location = System::Drawing::Point(57, 18);
			this->lblACount->Name = L"lblACount";
			this->lblACount->Size = System::Drawing::Size(80, 16);
			this->lblACount->TabIndex = 33;
			this->lblACount->Text = L"XXXXXXXXX";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 18);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 16);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Count:";
			// 
			// gbC
			// 
			this->gbC->Controls->Add(this->lblCCount);
			this->gbC->Controls->Add(this->label14);
			this->gbC->Location = System::Drawing::Point(7, 143);
			this->gbC->Name = L"gbC";
			this->gbC->Size = System::Drawing::Size(195, 70);
			this->gbC->TabIndex = 33;
			this->gbC->TabStop = false;
			this->gbC->Text = L"Chute C";
			// 
			// lblCCount
			// 
			this->lblCCount->AutoSize = true;
			this->lblCCount->Location = System::Drawing::Point(57, 18);
			this->lblCCount->Name = L"lblCCount";
			this->lblCCount->Size = System::Drawing::Size(80, 16);
			this->lblCCount->TabIndex = 33;
			this->lblCCount->Text = L"XXXXXXXXX";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 18);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 16);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Count:";
			// 
			// gbTuscos
			// 
			this->gbTuscos->Controls->Add(this->lblTusCount);
			this->gbTuscos->Controls->Add(this->label11);
			this->gbTuscos->Location = System::Drawing::Point(6, 14);
			this->gbTuscos->Name = L"gbTuscos";
			this->gbTuscos->Size = System::Drawing::Size(397, 57);
			this->gbTuscos->TabIndex = 30;
			this->gbTuscos->TabStop = false;
			this->gbTuscos->Text = L"Tuscos";
			// 
			// lblTusCount
			// 
			this->lblTusCount->AutoSize = true;
			this->lblTusCount->Location = System::Drawing::Point(57, 18);
			this->lblTusCount->Name = L"lblTusCount";
			this->lblTusCount->Size = System::Drawing::Size(80, 16);
			this->lblTusCount->TabIndex = 31;
			this->lblTusCount->Text = L"XXXXXXXXX";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Count:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lblRunTime);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->lblFalureRate);
			this->groupBox4->Controls->Add(this->lblTotal);
			this->groupBox4->Controls->Add(this->lblNumDefects);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Location = System::Drawing::Point(6, 161);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(408, 108);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Batch Information";
			// 
			// lblRunTime
			// 
			this->lblRunTime->AutoSize = true;
			this->lblRunTime->Location = System::Drawing::Point(140, 18);
			this->lblRunTime->Name = L"lblRunTime";
			this->lblRunTime->Size = System::Drawing::Size(80, 16);
			this->lblRunTime->TabIndex = 29;
			this->lblRunTime->Text = L"XXXXXXXXX";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 16);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Run Time:";
			// 
			// lblFalureRate
			// 
			this->lblFalureRate->AutoSize = true;
			this->lblFalureRate->Location = System::Drawing::Point(140, 81);
			this->lblFalureRate->Name = L"lblFalureRate";
			this->lblFalureRate->Size = System::Drawing::Size(80, 16);
			this->lblFalureRate->TabIndex = 27;
			this->lblFalureRate->Text = L"XXXXXXXXX";
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->Location = System::Drawing::Point(140, 59);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(80, 16);
			this->lblTotal->TabIndex = 26;
			this->lblTotal->Text = L"XXXXXXXXX";
			// 
			// lblNumDefects
			// 
			this->lblNumDefects->AutoSize = true;
			this->lblNumDefects->Location = System::Drawing::Point(140, 38);
			this->lblNumDefects->Name = L"lblNumDefects";
			this->lblNumDefects->Size = System::Drawing::Size(80, 16);
			this->lblNumDefects->TabIndex = 25;
			this->lblNumDefects->Text = L"XXXXXXXXX";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Total Inspections:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Falure Rate(%):";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Number Of Rejects:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblOD);
			this->groupBox3->Controls->Add(this->lblID);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->lblDescription);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->lblPN);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(6, 21);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(408, 105);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Product Info:";
			// 
			// lblOD
			// 
			this->lblOD->AutoSize = true;
			this->lblOD->Location = System::Drawing::Point(101, 59);
			this->lblOD->Name = L"lblOD";
			this->lblOD->Size = System::Drawing::Size(80, 16);
			this->lblOD->TabIndex = 26;
			this->lblOD->Text = L"XXXXXXXXX";
			this->lblOD->Click += gcnew System::EventHandler(this, &InformationForm::lblOD_Click);
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Location = System::Drawing::Point(101, 38);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(80, 16);
			this->lblID->TabIndex = 25;
			this->lblID->Text = L"XXXXXXXXX";
			this->lblID->Click += gcnew System::EventHandler(this, &InformationForm::lblID_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(187, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 16);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Description:";
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Location = System::Drawing::Point(282, 18);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(80, 16);
			this->lblDescription->TabIndex = 25;
			this->lblDescription->Text = L"XXXXXXXXX";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(64, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"OD:";
			this->label8->Click += gcnew System::EventHandler(this, &InformationForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(71, 38);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"ID:";
			this->label7->Click += gcnew System::EventHandler(this, &InformationForm::label7_Click);
			// 
			// lblPN
			// 
			this->lblPN->AutoSize = true;
			this->lblPN->Location = System::Drawing::Point(101, 18);
			this->lblPN->Name = L"lblPN";
			this->lblPN->Size = System::Drawing::Size(80, 16);
			this->lblPN->TabIndex = 24;
			this->lblPN->Text = L"XXXXXXXXX";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 16);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Part Number: ";
			// 
			// RunTimeTimer
			// 
			this->RunTimeTimer->Tick += gcnew System::EventHandler(this, &InformationForm::RunTimeTimer_Tick);
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 0;
			this->toolTip1->UseAnimation = false;
			// 
			// tmrtooltip
			// 
			this->tmrtooltip->Enabled = true;
			this->tmrtooltip->Tick += gcnew System::EventHandler(this, &InformationForm::tmrtooltip_Tick);
			// 
			// InformationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 500);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"InformationForm";
			this->Text = L"InformationForm";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->gbChuteInformation->ResumeLayout(false);
			this->gbD->ResumeLayout(false);
			this->gbD->PerformLayout();
			this->gbB->ResumeLayout(false);
			this->gbB->PerformLayout();
			this->gbA->ResumeLayout(false);
			this->gbA->PerformLayout();
			this->gbC->ResumeLayout(false);
			this->gbC->PerformLayout();
			this->gbTuscos->ResumeLayout(false);
			this->gbTuscos->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		void resetToolTips() {
			for each (Object^ var in gbChuteInformation->Controls)
			{
				this->toolTip1->SetToolTip((Control^)var, "");
				for each (Object^ var in ((GroupBox^)var)->Controls)
				{
					this->toolTip1->SetToolTip((Control^)var, "");
				}
			}
			/*this->toolTip1->SetToolTip(this->gbTuscos, "");
			this->toolTip1->SetToolTip(this->gbA, "");
			this->toolTip1->SetToolTip(this->gbB, "");
			this->toolTip1->SetToolTip(this->gbC, "");
			this->toolTip1->SetToolTip(this->gbD, "");
			for each (Object^ var in gbTuscos->Controls)
			{
				this->toolTip1->SetToolTip((Control^)var, "");
			}
			for each (Object^ var in gbA->Controls)
			{
				this->toolTip1->SetToolTip((Control^)var, "");
			}
			for each (Object^ var in gbB->Controls)
			{
				this->toolTip1->SetToolTip((Control^)var, "");
			}
			for each (Object^ var in gbC->Controls)
			{
				this->toolTip1->SetToolTip((Control^)var, "");
			}
			for each (Object^ var in gbD->Controls)
			{
				this->toolTip1->SetToolTip((Control^)var, "");
			}*/
		}
		void updateToolTips() {
			List<String^> ToolTips;
			ToolTips.Clear();



			for (int i = 0; i < 5; i++) {
				ToolTips.Add(L"");

			}
			try {
				for (int i = 0; i < currentProductSettings.numChutes; i++) {
					ToolTips[i] += L"Chute Settings for " + getChuteString(currentProductSettings.listOfChuteSpecs[i].chutetype) + L":" + Environment::NewLine;

					ToolTips[i] += L"-----Defect Settings-----" + Environment::NewLine;
					if (currentProductSettings.listOfChuteSpecs[i].noDefects == true) {
						ToolTips[i] += L"No Defects" + Environment::NewLine;
					}
					else {
						ToolTips[i] += L"Chips:" + currentProductSettings.listOfChuteSpecs[i].chip.ToString() + Environment::NewLine;
						ToolTips[i] += L"Cracks:" + currentProductSettings.listOfChuteSpecs[i].chip.ToString() + Environment::NewLine;
						if (currentProductSettings.listOfChuteSpecs[i].defectsOutOfRange == true) {
							ToolTips[i] += L"Defects Exceeding Limit" + Environment::NewLine;
						}
						else if (currentProductSettings.listOfChuteSpecs[i].defectsWithinRange == true) {
							ToolTips[i] += L"Defects Within Limit Range" + Environment::NewLine;
						}
						else {
							ToolTips[i] += L"ERROR" + Environment::NewLine;

						}
					}

					ToolTips[i] += L"-----ID Settings-----" + Environment::NewLine;
					ToolTips[i] += L"ID Tolerance:" + currentProductSettings.listOfChuteSpecs[i].IDTolerance.ToString() + Environment::NewLine;
					if (currentProductSettings.listOfChuteSpecs[i].IDHigher == true)
					{
						ToolTips[i] += L"ID Higher Than:" + (currentProductSettings.targetID + (currentProductSettings.targetID * (currentProductSettings.listOfChuteSpecs[i].IDTolerance / 100))).ToString() + Environment::NewLine;
					}
					if (currentProductSettings.listOfChuteSpecs[i].IDLower == true)
					{
						ToolTips[i] += L"ID Lower Than:" + (currentProductSettings.targetID - (currentProductSettings.targetID *(currentProductSettings.listOfChuteSpecs[i].IDTolerance / 100))).ToString() + Environment::NewLine;
					}
					if (currentProductSettings.listOfChuteSpecs[i].IDGood == true)
					{
						ToolTips[i] += L"ID Between" + (currentProductSettings.targetID - (currentProductSettings.targetID *(currentProductSettings.listOfChuteSpecs[i].IDTolerance / 100))).ToString() +
							L" And " + (currentProductSettings.targetID + (currentProductSettings.targetID *(currentProductSettings.listOfChuteSpecs[i].IDTolerance / 100))).ToString() + Environment::NewLine;
					}

					ToolTips[i] += L"-----OD Settings-----" + Environment::NewLine;
					ToolTips[i] += L"OD Tolerance:" + currentProductSettings.listOfChuteSpecs[i].ODTolerance.ToString() + Environment::NewLine;
					if (currentProductSettings.listOfChuteSpecs[i].IDHigher == true)
					{
						ToolTips[i] += L"OD Higher Than:" + (currentProductSettings.targetOD + (currentProductSettings.targetOD * (currentProductSettings.listOfChuteSpecs[i].ODTolerance / 100))).ToString() + Environment::NewLine;
					}
					if (currentProductSettings.listOfChuteSpecs[i].IDLower == true)
					{
						ToolTips[i] += L"OD Lower Than:" + (currentProductSettings.targetOD - (currentProductSettings.targetOD *(currentProductSettings.listOfChuteSpecs[i].ODTolerance / 100))).ToString() + Environment::NewLine;
					}
					if (currentProductSettings.listOfChuteSpecs[i].IDGood == true)
					{
						ToolTips[i] += L"OD Between" + (currentProductSettings.targetOD - (currentProductSettings.targetOD *(currentProductSettings.listOfChuteSpecs[i].ODTolerance / 100))).ToString() +
							L" And " + (currentProductSettings.targetOD + (currentProductSettings.targetOD *(currentProductSettings.listOfChuteSpecs[i].ODTolerance / 100))).ToString() + Environment::NewLine;
					}


					switch (currentProductSettings.listOfChuteSpecs[i].chutetype)
					{
					case Tuscos:
						this->toolTip1->SetToolTip(this->gbTuscos, ToolTips[i]);
						for each (Object^ var in gbTuscos->Controls)
						{
							this->toolTip1->SetToolTip((Control^)var, ToolTips[i]);
						}
						break;
					case A:
						this->toolTip1->SetToolTip(this->gbA, ToolTips[i]);
						for each (Object^ var in gbA->Controls)
						{
							this->toolTip1->SetToolTip((Control^)var, ToolTips[i]);
						}
						break;
					case B:
						this->toolTip1->SetToolTip(this->gbB, ToolTips[i]);
						for each (Object^ var in gbB->Controls)
						{
							this->toolTip1->SetToolTip((Control^)var, ToolTips[i]);
						}
						break;
					case C:
						this->toolTip1->SetToolTip(this->gbC, ToolTips[i]);
						for each (Object^ var in gbC->Controls)
						{
							this->toolTip1->SetToolTip((Control^)var, ToolTips[i]);
						}
						break;
					case D:
						this->toolTip1->SetToolTip(this->gbD, ToolTips[i]);
						for each (Object^ var in gbD->Controls)
						{
							this->toolTip1->SetToolTip((Control^)var, ToolTips[i]);
						}
						break;
					default:
						break;
					}


				}
			}
			catch (...) {

			}
		}

	public:
		void FormUpdate() {
			lblPN->Text = gcnew String(currentProductSettings.partNumber.c_str());
			lblDescription->Text = gcnew String(currentProductSettings.Description.c_str());
			lblID->Text = currentProductSettings.targetID.ToString();
			lblOD->Text = currentProductSettings.targetOD.ToString();

			//updateToolTips();
			//String^ tuscosToolTip = gcnew String("Chute Settings Info:" + Environment::NewLine);
			//tuscosToolTip += gcnew String(currentProductSettings..c_str());
			//this->toolTip1->SetToolTip(this->groupBox1, tuscosToolTip);


		}

	private: System::Void tmrtooltip_Tick(System::Object^  sender, System::EventArgs^  e) {
		updateToolTips();
	}
	private: System::Void lblRunMode_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BtnStartStopBatch_Click(System::Object^  sender, System::EventArgs^  e) {
		//if product has been selected
		if (currentProductSettings.partNumber != "") {
			//if batch is currently running
			if (BatchRunning) {
				System::Windows::Forms::DialogResult dialogResult = System::Windows::Forms::MessageBox::Show("Batch Inspection In Progress", "Are you sure you wish to stop the current batch?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (dialogResult == Windows::Forms::DialogResult::Yes) {

					BtnStartStopBatch->Text = "Start Batch";
					lblRunMode->Text = "Batch Not Running";
					lblRunMode->ForeColor = Color::Red;
					RunTimeTimer->Enabled = false;
					BatchRunning = false;
				}
			}
			//if batch is not currently running
			else {
				BatchRunning = true;
				BtnStartStopBatch->Text = "Stop Batch";
				lblRunMode->Text = "Batch Running";
				lblRunMode->ForeColor = Color::Green;
				RunTimeTimer->Enabled = true;

			}
		}
		else {
			System::Windows::Forms::DialogResult dialogResult = System::Windows::Forms::MessageBox::Show("Please Select a Recipe", "No Recipe Selected", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void lblTol_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void lblOD_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void lblID_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public: void PopulateInspection() {

	}

	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 void ResetBatchLabels() {

			 }

			 int timerCount = 0;
	private: System::Void RunTimeTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		timerCount++;
		System::String^ s = gcnew String(L"");
		if (timerCount / 36000 >= 1) {
			s += (int)(timerCount / 36000) + ":";
		}
		if (timerCount / 600 >= 1) {
			s += (int)(timerCount / 600) % 60 + ":";

		}
		if (timerCount / 10 >= 1) {
			s += (int)(timerCount / 10) % 60 + ".";
		}
		s += timerCount % 10;

		lblRunTime->Text = s;
	}
	public: bool ImageInspect = false;
			bool BatchRunning = false;
			//glass inspection button clicked
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ImageInspect = true;
	}
	};
}
