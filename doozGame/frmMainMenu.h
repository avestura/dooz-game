#pragma once


namespace doozGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	

	/// <summary>
	/// Summary for frmMainMenu
	/// </summary>
	public ref class frmMainMenu : public System::Windows::Forms::Form
	{



	public:
		
		

		frmMainMenu(void)
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
		~frmMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnSinglePlayer;
	private: System::Windows::Forms::Button^  btnMultiPlayer;
	private: System::Windows::Forms::Button^  btnAbout;
	private: System::Windows::Forms::Button^  btnExit;
	






	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMainMenu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSinglePlayer = (gcnew System::Windows::Forms::Button());
			this->btnMultiPlayer = (gcnew System::Windows::Forms::Button());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(683, 40);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMainMenu::borderBottom);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 427);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(683, 32);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMainMenu::borderTop);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(220, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(65, 61);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(293, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Guilan University";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(290, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 30);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Tic Tac Toe Game";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DimGray;
			this->label3->Location = System::Drawing::Point(293, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Aryan Ebrahimpour";
			// 
			// btnSinglePlayer
			// 
			this->btnSinglePlayer->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSinglePlayer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->btnSinglePlayer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnSinglePlayer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSinglePlayer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSinglePlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSinglePlayer.Image")));
			this->btnSinglePlayer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSinglePlayer->Location = System::Drawing::Point(220, 165);
			this->btnSinglePlayer->Name = L"btnSinglePlayer";
			this->btnSinglePlayer->Size = System::Drawing::Size(243, 52);
			this->btnSinglePlayer->TabIndex = 7;
			this->btnSinglePlayer->Text = L"Single Player";
			this->btnSinglePlayer->UseVisualStyleBackColor = true;
			this->btnSinglePlayer->Click += gcnew System::EventHandler(this, &frmMainMenu::button1_Click_1);
			this->btnSinglePlayer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMainMenu::noStrokeBorder);
			// 
			// btnMultiPlayer
			// 
			this->btnMultiPlayer->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->btnMultiPlayer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->btnMultiPlayer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnMultiPlayer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMultiPlayer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiPlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMultiPlayer.Image")));
			this->btnMultiPlayer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMultiPlayer->Location = System::Drawing::Point(220, 223);
			this->btnMultiPlayer->Name = L"btnMultiPlayer";
			this->btnMultiPlayer->Size = System::Drawing::Size(243, 52);
			this->btnMultiPlayer->TabIndex = 8;
			this->btnMultiPlayer->Text = L"Multi Player";
			this->btnMultiPlayer->UseVisualStyleBackColor = true;
			this->btnMultiPlayer->Click += gcnew System::EventHandler(this, &frmMainMenu::btnMultiPlayer_Click);
			this->btnMultiPlayer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMainMenu::noStrokeBorder);
			// 
			// btnAbout
			// 
			this->btnAbout->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->btnAbout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->btnAbout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAbout.Image")));
			this->btnAbout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAbout->Location = System::Drawing::Point(220, 281);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(243, 52);
			this->btnAbout->TabIndex = 9;
			this->btnAbout->Text = L"About Game";
			this->btnAbout->UseVisualStyleBackColor = true;
			this->btnAbout->Click += gcnew System::EventHandler(this, &frmMainMenu::btnAbout_Click);
			this->btnAbout->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMainMenu::noStrokeBorder);
			// 
			// btnExit
			// 
			this->btnExit->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->btnExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->btnExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(220, 339);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(243, 52);
			this->btnExit->TabIndex = 10;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmMainMenu::button4_Click);
			this->btnExit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMainMenu::noStrokeBorder);
			// 
			// frmMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(683, 459);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnMultiPlayer);
			this->Controls->Add(this->btnSinglePlayer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmMainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &frmMainMenu::frmMainMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region My Design for Application
	private: System::Void borderBottom(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		Panel^ newSender = safe_cast<Panel^>(sender);
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar
		//designed by Sadra Zargar

		// harki pak kone khare!!!!

		ControlPaint::DrawBorder(e->Graphics,newSender->ClientRectangle,
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

					}
#pragma endregion

	

	private: System::Void frmMainMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e);

private: System::Void btnMultiPlayer_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void btnAbout_Click(System::Object^  sender, System::EventArgs^  e);
};
}
