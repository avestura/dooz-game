#pragma once

namespace doozGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAbout
	/// </summary>
	public ref class frmAbout : public System::Windows::Forms::Form
	{
	public:
		frmAbout(void)
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
		~frmAbout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btnSinglePlayer;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAbout::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnSinglePlayer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(483, 35);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAbout::borderBottom);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(24, 24);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DimGray;
			this->label3->Location = System::Drawing::Point(35, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"About Tic Tac Toe";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->btnSinglePlayer);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 327);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(483, 44);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAbout::borderTop);
			// 
			// btnSinglePlayer
			// 
			this->btnSinglePlayer->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSinglePlayer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->btnSinglePlayer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnSinglePlayer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSinglePlayer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSinglePlayer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSinglePlayer->Location = System::Drawing::Point(359, 5);
			this->btnSinglePlayer->Name = L"btnSinglePlayer";
			this->btnSinglePlayer->Size = System::Drawing::Size(118, 34);
			this->btnSinglePlayer->TabIndex = 8;
			this->btnSinglePlayer->Text = L"Ok";
			this->btnSinglePlayer->UseVisualStyleBackColor = true;
			this->btnSinglePlayer->Click += gcnew System::EventHandler(this, &frmAbout::btnSinglePlayer_Click);
			this->btnSinglePlayer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAbout::noStrokeBorder);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(21, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(450, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Developers Information";
			this->label1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAbout::labelBorderBottom);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(35, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Name: Aryan Ebrahimpour";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(35, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Student Number: 94012269008";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(35, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Professor: Mr Shekarian";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(35, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Name: Tic Tac Toe Game";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DimGray;
			this->label7->Location = System::Drawing::Point(21, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(450, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Project Information";
			this->label7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAbout::labelBorderBottom);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(35, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(167, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"University: Guilan University";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(35, 282);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Language: C++";
			// 
			// frmAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(483, 371);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmAbout";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"About Game";
			this->Load += gcnew System::EventHandler(this, &frmAbout::frmAbout_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

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

				private: System::Void labelBorderBottom(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

					Label^ newSender = safe_cast<Label^>(sender);
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

	}
#pragma endregion

	private: System::Void frmAbout_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnSinglePlayer_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
