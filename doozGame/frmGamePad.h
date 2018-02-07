#pragma once


namespace doozGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmGamePad
	/// </summary>
	public ref class frmGamePad : public System::Windows::Forms::Form
	{
	public:
		static bool isMultiplayer;
		static bool player1Turn = true;
		static char winner;
		static bool gameEnded = false;
		bool retType;

		static int score1 = 0;
		static int score1WithPc = 0;
		static int score2 = 0;
		static int scoreComputer = 0;

		Button^ computerButton;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnRestart;

	public:

		Media::SoundPlayer^ mp = gcnew Media::SoundPlayer;

		frmGamePad(System::Windows::Forms::Form^ frm, bool isMlt)
		{
			otherform = frm;
			isMultiplayer = isMlt;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  lblScore2;
	public:
	private: System::Windows::Forms::Label^  lblScore1;
	private: System::Windows::Forms::Label^  lblPcUser;
	private: System::Windows::Forms::Label^  lblUser1;


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  lstLog;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Form ^ otherform;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmGamePad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  slot1;
	private: System::Windows::Forms::Button^  slot2;
	private: System::Windows::Forms::Button^  slot3;
	private: System::Windows::Forms::Button^  slot4;
	private: System::Windows::Forms::Button^  slot5;
	private: System::Windows::Forms::Button^  slot6;
	private: System::Windows::Forms::Button^  slot7;
	private: System::Windows::Forms::Button^  slot8;
	private: System::Windows::Forms::Button^  slot9;









	private: System::Windows::Forms::Label^  lblTurnHeader;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGamePad::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnRestart = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->slot1 = (gcnew System::Windows::Forms::Button());
			this->slot2 = (gcnew System::Windows::Forms::Button());
			this->slot3 = (gcnew System::Windows::Forms::Button());
			this->slot4 = (gcnew System::Windows::Forms::Button());
			this->slot5 = (gcnew System::Windows::Forms::Button());
			this->slot6 = (gcnew System::Windows::Forms::Button());
			this->slot7 = (gcnew System::Windows::Forms::Button());
			this->slot8 = (gcnew System::Windows::Forms::Button());
			this->slot9 = (gcnew System::Windows::Forms::Button());
			this->lblTurnHeader = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lstLog = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblScore2 = (gcnew System::Windows::Forms::Label());
			this->lblScore1 = (gcnew System::Windows::Forms::Label());
			this->lblPcUser = (gcnew System::Windows::Forms::Label());
			this->lblUser1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->btnRestart);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(754, 40);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::borderBottom);
			// 
			// btnRestart
			// 
			this->btnRestart->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->btnRestart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->btnRestart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnRestart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRestart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRestart->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRestart->Location = System::Drawing::Point(460, 6);
			this->btnRestart->Name = L"btnRestart";
			this->btnRestart->Size = System::Drawing::Size(138, 27);
			this->btnRestart->TabIndex = 20;
			this->btnRestart->Tag = L"null";
			this->btnRestart->Text = L"Next Round";
			this->btnRestart->UseVisualStyleBackColor = true;
			this->btnRestart->Visible = false;
			this->btnRestart->Click += gcnew System::EventHandler(this, &frmGamePad::btnRestart_Click);
			this->btnRestart->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(604, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 27);
			this->button1->TabIndex = 19;
			this->button1->Tag = L"null";
			this->button1->Text = L"Back To Main Menu";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGamePad::button1_Click);
			this->button1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 437);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(754, 40);
			this->panel2->TabIndex = 3;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::borderTop);
			// 
			// slot1
			// 
			this->slot1->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot1->Location = System::Drawing::Point(33, 64);
			this->slot1->Name = L"slot1";
			this->slot1->Size = System::Drawing::Size(110, 110);
			this->slot1->TabIndex = 8;
			this->slot1->Tag = L"1";
			this->slot1->UseVisualStyleBackColor = true;
			this->slot1->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot2
			// 
			this->slot2->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot2->Location = System::Drawing::Point(149, 64);
			this->slot2->Name = L"slot2";
			this->slot2->Size = System::Drawing::Size(110, 110);
			this->slot2->TabIndex = 9;
			this->slot2->Tag = L"2";
			this->slot2->UseVisualStyleBackColor = true;
			this->slot2->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot3
			// 
			this->slot3->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot3->Location = System::Drawing::Point(265, 64);
			this->slot3->Name = L"slot3";
			this->slot3->Size = System::Drawing::Size(110, 110);
			this->slot3->TabIndex = 10;
			this->slot3->Tag = L"3";
			this->slot3->UseVisualStyleBackColor = true;
			this->slot3->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot4
			// 
			this->slot4->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot4->Location = System::Drawing::Point(33, 180);
			this->slot4->Name = L"slot4";
			this->slot4->Size = System::Drawing::Size(110, 110);
			this->slot4->TabIndex = 11;
			this->slot4->Tag = L"4";
			this->slot4->UseVisualStyleBackColor = true;
			this->slot4->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot5
			// 
			this->slot5->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot5->Location = System::Drawing::Point(149, 180);
			this->slot5->Name = L"slot5";
			this->slot5->Size = System::Drawing::Size(110, 110);
			this->slot5->TabIndex = 12;
			this->slot5->Tag = L"5";
			this->slot5->UseVisualStyleBackColor = true;
			this->slot5->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot6
			// 
			this->slot6->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot6->Location = System::Drawing::Point(265, 180);
			this->slot6->Name = L"slot6";
			this->slot6->Size = System::Drawing::Size(110, 110);
			this->slot6->TabIndex = 13;
			this->slot6->Tag = L"6";
			this->slot6->UseVisualStyleBackColor = true;
			this->slot6->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot7
			// 
			this->slot7->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot7->Location = System::Drawing::Point(33, 296);
			this->slot7->Name = L"slot7";
			this->slot7->Size = System::Drawing::Size(110, 110);
			this->slot7->TabIndex = 14;
			this->slot7->Tag = L"7";
			this->slot7->UseVisualStyleBackColor = true;
			this->slot7->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot8
			// 
			this->slot8->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot8->Location = System::Drawing::Point(149, 296);
			this->slot8->Name = L"slot8";
			this->slot8->Size = System::Drawing::Size(110, 110);
			this->slot8->TabIndex = 15;
			this->slot8->Tag = L"8";
			this->slot8->UseVisualStyleBackColor = true;
			this->slot8->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// slot9
			// 
			this->slot9->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->slot9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->slot9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->slot9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slot9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F));
			this->slot9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slot9->Location = System::Drawing::Point(265, 296);
			this->slot9->Name = L"slot9";
			this->slot9->Size = System::Drawing::Size(110, 110);
			this->slot9->TabIndex = 16;
			this->slot9->Tag = L"9";
			this->slot9->UseVisualStyleBackColor = true;
			this->slot9->Click += gcnew System::EventHandler(this, &frmGamePad::slots_click);
			this->slot9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::noStrokeBorder);
			// 
			// lblTurnHeader
			// 
			this->lblTurnHeader->BackColor = System::Drawing::Color::Transparent;
			this->lblTurnHeader->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTurnHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->lblTurnHeader->Location = System::Drawing::Point(404, 64);
			this->lblTurnHeader->Name = L"lblTurnHeader";
			this->lblTurnHeader->Size = System::Drawing::Size(338, 30);
			this->lblTurnHeader->TabIndex = 17;
			this->lblTurnHeader->Text = L"It\'s %s Turn";
			this->lblTurnHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->lstLog);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->lblScore2);
			this->panel3->Controls->Add(this->lblScore1);
			this->panel3->Controls->Add(this->lblPcUser);
			this->panel3->Controls->Add(this->lblUser1);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(404, 106);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(338, 300);
			this->panel3->TabIndex = 18;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::borderAll);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DimGray;
			this->label2->Location = System::Drawing::Point(10, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(313, 23);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Game Log";
			this->label2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGamePad::labelBorderBottom);
			// 
			// lstLog
			// 
			this->lstLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->lstLog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lstLog->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstLog->FormattingEnabled = true;
			this->lstLog->IntegralHeight = false;
			this->lstLog->Location = System::Drawing::Point(13, 150);
			this->lstLog->Name = L"lstLog";
			this->lstLog->ScrollAlwaysVisible = true;
			this->lstLog->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->lstLog->Size = System::Drawing::Size(313, 133);
			this->lstLog->TabIndex = 11;
			this->lstLog->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(10, 85);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 24);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 55);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(24, 24);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// lblScore2
			// 
			this->lblScore2->BackColor = System::Drawing::Color::Transparent;
			this->lblScore2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblScore2->ForeColor = System::Drawing::Color::Teal;
			this->lblScore2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblScore2->Location = System::Drawing::Point(112, 90);
			this->lblScore2->Name = L"lblScore2";
			this->lblScore2->Size = System::Drawing::Size(211, 17);
			this->lblScore2->TabIndex = 8;
			this->lblScore2->Text = L"0";
			this->lblScore2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblScore1
			// 
			this->lblScore1->BackColor = System::Drawing::Color::Transparent;
			this->lblScore1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblScore1->ForeColor = System::Drawing::Color::Teal;
			this->lblScore1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblScore1->Location = System::Drawing::Point(112, 60);
			this->lblScore1->Name = L"lblScore1";
			this->lblScore1->Size = System::Drawing::Size(211, 17);
			this->lblScore1->TabIndex = 7;
			this->lblScore1->Text = L"0";
			this->lblScore1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPcUser
			// 
			this->lblPcUser->AutoSize = true;
			this->lblPcUser->BackColor = System::Drawing::Color::Transparent;
			this->lblPcUser->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPcUser->ForeColor = System::Drawing::Color::DimGray;
			this->lblPcUser->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblPcUser->Location = System::Drawing::Point(40, 89);
			this->lblPcUser->Name = L"lblPcUser";
			this->lblPcUser->Size = System::Drawing::Size(61, 17);
			this->lblPcUser->TabIndex = 6;
			this->lblPcUser->Text = L"Player 2 :";
			// 
			// lblUser1
			// 
			this->lblUser1->AutoSize = true;
			this->lblUser1->BackColor = System::Drawing::Color::Transparent;
			this->lblUser1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUser1->ForeColor = System::Drawing::Color::DimGray;
			this->lblUser1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblUser1->Location = System::Drawing::Point(40, 59);
			this->lblUser1->Name = L"lblUser1";
			this->lblUser1->Size = System::Drawing::Size(61, 17);
			this->lblUser1->TabIndex = 5;
			this->lblUser1->Text = L"Player 1 :";
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->label1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(338, 41);
			this->panel4->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 41);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Score Board";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// frmGamePad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(754, 477);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->lblTurnHeader);
			this->Controls->Add(this->slot9);
			this->Controls->Add(this->slot8);
			this->Controls->Add(this->slot7);
			this->Controls->Add(this->slot6);
			this->Controls->Add(this->slot5);
			this->Controls->Add(this->slot4);
			this->Controls->Add(this->slot3);
			this->Controls->Add(this->slot2);
			this->Controls->Add(this->slot1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmGamePad";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmGamePad::frmGamePad_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmGamePad::frmGamePad_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion

#pragma region My Design for Application


	private: System::Void borderBottom(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		Panel^ newSender = safe_cast<Panel^>(sender);
		ControlPaint::DrawBorder(e->Graphics, newSender->ClientRectangle,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::Solid
			);

	}

	private: System::Void borderTop(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		Panel^ newSender = safe_cast<Panel^>(sender);

		ControlPaint::DrawBorder(e->Graphics, newSender->ClientRectangle,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::Solid,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::None
			);
	}

	private: System::Void noStrokeBorder(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		Button^ btn = safe_cast<Button^>(sender);
		Pen^ P = gcnew Pen(btn->BackColor);
		e->Graphics->DrawRectangle(P, 1, 1, btn->Width - 3, btn->Height - 3);
		delete P;

	}
	private: System::Void borderAll(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Panel^ newSender = safe_cast<Panel^>(sender);
		ControlPaint::DrawBorder(e->Graphics, newSender->ClientRectangle, Color::LightGray, ButtonBorderStyle::Solid);
	}

	private: System::Void labelBorderBottom(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		Label^ newSender = safe_cast<Label^>(sender);
		ControlPaint::DrawBorder(e->Graphics, newSender->ClientRectangle,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::None,
			Color::LightGray, 1, ButtonBorderStyle::Solid
			);


	}


#pragma endregion

	private: System::Void frmGamePad_Load(System::Object^  sender, System::EventArgs^  e) {
		
		gameEnded = false;
		player1Turn = true;

		lstLog->Items->Clear();
		lstLog->Items->Add("The game has started at " + DateTime::Now);
		if (isMultiplayer)
			lblTurnHeader->Text = "It's Player 1 Turn";
		
		else {
			lblTurnHeader->Text = "It's your Turn";
			lblUser1->Text = "Player : ";
			lblPcUser->Text = "Computer :";
		}


		if (isMultiplayer) {
			lblScore1->Text = Convert::ToString(score1);
			lblScore2->Text = Convert::ToString(score2);
		}
		else {
			lblScore1->Text = Convert::ToString(score1WithPc);
			lblScore2->Text = Convert::ToString(scoreComputer);
		}

		try {
			mp->SoundLocation = Application::StartupPath + "\\Data\\pl1.wav";
			mp->SoundLocation = Application::StartupPath + "\\Data\\pl2.wav";
		}
		catch (Exception^ ex) {
			
		}
		
		


	}

	private: System::Void frmGamePad_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		otherform->Show();

	}

	private: System::Void ChangeTurn() {
		if (isMultiplayer) {
			if (player1Turn) {
				lblTurnHeader->Text = "It's Player 2 Turn";
				player1Turn = false;
			}
			else {
				lblTurnHeader->Text = "It's Player 1 Turn";
				player1Turn = true;
			}
		}
		else {
			if (player1Turn) {
				//lblTurnHeader->Text = "Thinking...";
				player1Turn = false;
			}
			else {
				lblTurnHeader->Text = "It's your Turn";
				player1Turn = true;
			}
		}
	}

	private: System::Void checkIfWon(Char x) {

		switch (x)
		{
		case '1':
			if (slot1->Text != "") {
				if (slot1->Text == slot2->Text && slot2->Text == slot3->Text) endGame(false);
				else if (slot1->Text == slot4->Text && slot4->Text == slot7->Text) endGame(false);
				else if (slot1->Text == slot5->Text && slot5->Text == slot9->Text) endGame(false);
			}
			break;
		case '2':
			if (slot2->Text != "") {
				if (slot2->Text == slot1->Text && slot1->Text == slot3->Text) endGame(false);
				else if (slot2->Text == slot5->Text && slot5->Text == slot8->Text) endGame(false);
			}
			break;
		case '3':
			if (slot3->Text != "") {
				if (slot3->Text == slot1->Text && slot1->Text == slot2->Text) endGame(false);
				else if (slot3->Text == slot5->Text && slot5->Text == slot7->Text) endGame(false);
				else if (slot3->Text == slot6->Text && slot6->Text == slot9->Text) endGame(false);
			}
			break;
		case '4':
			if (slot4->Text != "") {
				if (slot4->Text == slot5->Text && slot5->Text == slot6->Text) endGame(false);
				else if (slot4->Text == slot1->Text && slot1->Text == slot7->Text) endGame(false);
			}
			break;
		case '5':
			if (slot5->Text != "") {
				if (slot5->Text == slot2->Text && slot2->Text == slot8->Text) endGame(false);
				else if (slot5->Text == slot4->Text && slot4->Text == slot6->Text) endGame(false);
				else if (slot5->Text == slot1->Text && slot1->Text == slot9->Text) endGame(false);
				else if (slot5->Text == slot3->Text && slot3->Text == slot7->Text) endGame(false);
			}
			break;
		case '6':
			if (slot6->Text != "") {
				if (slot6->Text == slot5->Text && slot5->Text == slot4->Text) endGame(false);
				else if (slot6->Text == slot3->Text && slot3->Text == slot9->Text) endGame(false);
			}
			break;
		case '7':
			if (slot7->Text != "") {
				if (slot7->Text == slot8->Text && slot8->Text == slot9->Text) endGame(false);
				else if (slot7->Text == slot1->Text && slot1->Text == slot4->Text) endGame(false);
				else if (slot7->Text == slot5->Text && slot5->Text == slot3->Text) endGame(false);
			}
			break;
		case '8':
			if (slot8->Text != "") {
				if (slot8->Text == slot2->Text && slot2->Text == slot5->Text) endGame(false);
				else if (slot8->Text == slot7->Text && slot7->Text == slot9->Text) endGame(false);
			}
			break;
		case '9':
			if (slot9->Text != "") {
				if (slot9->Text == slot7->Text && slot7->Text == slot8->Text) endGame(false);
				else if (slot9->Text == slot3->Text && slot3->Text == slot6->Text) endGame(false);
				else if (slot9->Text == slot5->Text && slot5->Text == slot1->Text) endGame(false);
			}
			break;

		default:


			break;
		}

		if (!gameEnded && !validSlot(slot1) && !validSlot(slot2) && !validSlot(slot3) && !validSlot(slot4) && !validSlot(slot5) && !validSlot(slot6) && !validSlot(slot7) && !validSlot(slot8) && !validSlot(slot9)) {
			endGame(true);
		}

	}

	private: System::Void computerMove() {
		//Threading::Thread::Sleep(1500);

		if (!ComputerMoveToWin()) {
			ComputerMoveToDefend();
		}


	}

	private: bool ComputerMoveToWin() {

		retType = true;

		// Computer Brain For Slot 1
		if (slot1->Text == "O" && slot3->Text == "O" && validSlot(slot2)) oSlot(slot2);
		else if (slot1->Text == "O" && slot2->Text == "O" && validSlot(slot3)) oSlot(slot3);
		else if (slot2->Text == "O" && slot3->Text == "O" && validSlot(slot1)) oSlot(slot1);
		else if (slot1->Text == "O" && slot4->Text == "O" && validSlot(slot7)) oSlot(slot7);
		else if (slot1->Text == "O" && slot7->Text == "O" && validSlot(slot4)) oSlot(slot4);
		else if (slot7->Text == "O" && slot4->Text == "O" && validSlot(slot1)) oSlot(slot1);
		else if (slot1->Text == "O" && slot5->Text == "O" && validSlot(slot9)) oSlot(slot9);
		else if (slot1->Text == "O" && slot9->Text == "O" && validSlot(slot5)) oSlot(slot5);
		else if (slot5->Text == "O" && slot9->Text == "O" && validSlot(slot1)) oSlot(slot1);
		// Computer Brain For Slot 2
		else if (slot2->Text == "O" && slot5->Text == "O" && validSlot(slot8)) oSlot(slot8);
		else if (slot2->Text == "O" && slot8->Text == "O" && validSlot(slot5)) oSlot(slot5);
		else if (slot8->Text == "O" && slot5->Text == "O" && validSlot(slot2)) oSlot(slot2);
		// Computer Brain For Slot 3
		else if (slot3->Text == "O" && slot6->Text == "O" && validSlot(slot9)) oSlot(slot9);
		else if (slot3->Text == "O" && slot9->Text == "O" && validSlot(slot6)) oSlot(slot6);
		else if (slot9->Text == "O" && slot6->Text == "O" && validSlot(slot3)) oSlot(slot3);
		else if (slot3->Text == "O" && slot5->Text == "O" && validSlot(slot7)) oSlot(slot7);
		else if (slot3->Text == "O" && slot7->Text == "O" && validSlot(slot5)) oSlot(slot5);
		else if (slot7->Text == "O" && slot5->Text == "O" && validSlot(slot3)) oSlot(slot3);
		// Computer Brain For Slot 4
		else if (slot4->Text == "O" && slot5->Text == "O" && validSlot(slot6)) oSlot(slot6);
		else if (slot4->Text == "O" && slot6->Text == "O" && validSlot(slot5)) oSlot(slot5);
		else if (slot6->Text == "O" && slot5->Text == "O" && validSlot(slot4)) oSlot(slot4);
		// Computer Brain For Slot 5
		// Computer Brain For Slot 6
		// Computer Brain For Slot 7
		else if (slot7->Text == "O" && slot8->Text == "O" && validSlot(slot9)) oSlot(slot9);
		else if (slot7->Text == "O" && slot9->Text == "O" && validSlot(slot8)) oSlot(slot8);
		else if (slot9->Text == "O" && slot8->Text == "O" && validSlot(slot7)) oSlot(slot7);
		else retType = false;
		return retType;
	}

	private: System::Void ComputerMoveToDefend() {
		// Computer Brain For Slot 1
		if (slot1->Text == "X" && slot3->Text == "X" && validSlot(slot2)) oSlot(slot2);
		else if (slot1->Text == "X" && slot2->Text == "X" && validSlot(slot3)) oSlot(slot3);
		else if (slot2->Text == "X" && slot3->Text == "X" && validSlot(slot1)) oSlot(slot1);
		else if (slot1->Text == "X" && slot4->Text == "X" && validSlot(slot7)) oSlot(slot7);
		else if (slot1->Text == "X" && slot7->Text == "X" && validSlot(slot4)) oSlot(slot4);
		else if (slot7->Text == "X" && slot4->Text == "X" && validSlot(slot1)) oSlot(slot1);
		else if (slot1->Text == "X" && slot5->Text == "X" && validSlot(slot9)) oSlot(slot9);
		else if (slot1->Text == "X" && slot9->Text == "X" && validSlot(slot5)) oSlot(slot5);
		else if (slot5->Text == "X" && slot9->Text == "X" && validSlot(slot1)) oSlot(slot1);
		// Computer Brain For Slot 2
		else if (slot2->Text == "X" && slot5->Text == "X" && validSlot(slot8)) oSlot(slot8);
		else if (slot2->Text == "X" && slot8->Text == "X" && validSlot(slot5)) oSlot(slot5);
		else if (slot8->Text == "X" && slot5->Text == "X" && validSlot(slot2)) oSlot(slot2);
		// Computer Brain For Slot 3
		else if (slot3->Text == "X" && slot6->Text == "X" && validSlot(slot9)) oSlot(slot9);
		else if (slot3->Text == "X" && slot9->Text == "X" && validSlot(slot6)) oSlot(slot6);
		else if (slot9->Text == "X" && slot6->Text == "X" && validSlot(slot3)) oSlot(slot3);
		else if (slot3->Text == "X" && slot5->Text == "X" && validSlot(slot7)) oSlot(slot7);
		else if (slot3->Text == "X" && slot7->Text == "X" && validSlot(slot5)) oSlot(slot5);
		else if (slot7->Text == "X" && slot5->Text == "X" && validSlot(slot3)) oSlot(slot3);
		// Computer Brain For Slot 4
		else if (slot4->Text == "X" && slot5->Text == "X" && validSlot(slot6)) oSlot(slot6);
		else if (slot4->Text == "X" && slot6->Text == "X" && validSlot(slot5)) oSlot(slot5);
		else if (slot6->Text == "X" && slot5->Text == "X" && validSlot(slot4)) oSlot(slot4);
		// Computer Brain For Slot 5
		// Computer Brain For Slot 6
		// Computer Brain For Slot 7
		else if (slot7->Text == "X" && slot8->Text == "X" && validSlot(slot9)) oSlot(slot9);
		else if (slot7->Text == "X" && slot9->Text == "X" && validSlot(slot8)) oSlot(slot8);
		else if (slot9->Text == "X" && slot8->Text == "X" && validSlot(slot7)) oSlot(slot7);
		else if (validSlot(slot5)) oSlot(slot5);
		else {
			for each (Control^ iCntrl in this->Controls)
			{

				if (iCntrl->GetType()->ToString() == "System.Windows.Forms.Button" && iCntrl->Tag != "null") {
					Button^ iBtn = safe_cast<Button^>(iCntrl);
					if (validSlot(iBtn)) {
						oSlot(iBtn);
						break;
					}
					
				}
			}
		}
			
	}

	private: System::Void oSlot(Button^ btn) {
		btn->Text = "O";
		btn->ForeColor = Color::DarkGreen;
		lstLog->Items->Add("Computer placed O in slot " + btn->Tag);
		computerButton = btn;
	}
	private: bool validSlot(Button^ btn) { if (btn->Text == "") return true;else return false; }


	private: System::Void endGame(bool tie) {

		if (tie) {
			lblTurnHeader->Text = "That's a Draw!";
			lstLog->Items->Add("A Draw at " + DateTime::Now);
			lblTurnHeader->ForeColor = Color::Purple;
			try {
				mp->SoundLocation = Application::StartupPath + "\\Data\\tie.wav";
				mp->Play();
			}
			catch (Exception^ ex) {

			}
		}
		else{
			
			if (player1Turn) {
			lblTurnHeader->Text = "Player 1 Won the Game";
			lstLog->Items->Add("Player 1 won the game at " + DateTime::Now);
			if (isMultiplayer) score1++;else score1WithPc++;

		}
			else {
				if (isMultiplayer) {
					lblTurnHeader->Text = "Player 2 Won the Game";
					lstLog->Items->Add("Player 2 won the game at " + DateTime::Now);
					score2++;
	
				}
				else {
					lblTurnHeader->Text = "Computer Won the Game";
					lstLog->Items->Add("Computer won the game at " + DateTime::Now);
					scoreComputer++;

				}
			}

			lblTurnHeader->ForeColor = Color::Green;
			try {
				mp->SoundLocation = Application::StartupPath + "\\Data\\won.wav";
				mp->Play();
			}
			catch (Exception^ ex) {

			}
		}
		slot1->Enabled = false;
		slot2->Enabled = false;
		slot3->Enabled = false;
		slot4->Enabled = false;
		slot5->Enabled = false;
		slot6->Enabled = false;
		slot7->Enabled = false;
		slot8->Enabled = false;
		slot9->Enabled = false;

		updateScoreBoard();
		btnRestart->Show();
		gameEnded = true;


	}


	private: System::Void slots_click(System::Object^  sender, System::EventArgs^  e) {
		Button^ btn = safe_cast<Button^>(sender);

		if (btn->Text != "X" && btn->Text != "O") {

			if (isMultiplayer) {

				if (player1Turn) {
					btn->Text = "X";
					btn->ForeColor = Color::DodgerBlue;
					lstLog->Items->Add("Player 1 placed X in slot " + btn->Tag);

					try {
						mp->SoundLocation = Application::StartupPath + "\\Data\\pl1.wav";
						mp->Play();
					}
					catch (Exception^ ex) {

					}

				}
				else {
					btn->Text = "O";
					btn->ForeColor = Color::DarkGreen;
					lstLog->Items->Add("Player 2 placed O in slot " + btn->Tag);

					try {
						mp->SoundLocation = Application::StartupPath + "\\Data\\pl2.wav";
						mp->Play();
					}
					catch (Exception^ ex) {

					}

				}

				checkIfWon(Char::Parse(btn->Tag->ToString()));
				if (!gameEnded) ChangeTurn();

			}
			else {
				player1Turn = true;
				btn->Text = "X";
				btn->ForeColor = Color::DodgerBlue;
				lstLog->Items->Add("Player 1 placed X in slot " + btn->Tag);

				try {
					mp->SoundLocation = Application::StartupPath + "\\Data\\pl1.wav";
					mp->Play();
				}
				catch (Exception^ ex) {

				}
				checkIfWon(Char::Parse(btn->Tag->ToString()));

				if (!gameEnded) {
					player1Turn = false;
					computerMove();

					checkIfWon(Char::Parse(computerButton->Tag->ToString()));
				}
				
			}




		}


	}

private: System::Void updateScoreBoard() {
	if (isMultiplayer) {
		lblScore1->Text = score1.ToString();
		lblScore2->Text = score2.ToString();
	}
	else {
		lblScore1->Text = score1WithPc.ToString();
		lblScore2->Text = scoreComputer.ToString();
	}
}
	


	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void btnRestart_Click(System::Object^  sender, System::EventArgs^  e) {
	slot1->Enabled = true;
	slot2->Enabled = true;
	slot3->Enabled = true;
	slot4->Enabled = true;
	slot5->Enabled = true;
	slot6->Enabled = true;
	slot7->Enabled = true;
	slot8->Enabled = true;
	slot9->Enabled = true;

	slot1->Text = "";
	slot2->Text = "";
	slot3->Text = "";
	slot4->Text = "";
	slot5->Text = "";
	slot6->Text = "";
	slot7->Text = "";
	slot8->Text = "";
	slot9->Text = "";

	player1Turn = true;
	lblTurnHeader->ForeColor = Color::FromArgb(0, 136, 204);
	frmGamePad_Load(this, e);
	gameEnded = false;
	btnRestart->Hide();
}
};
}
