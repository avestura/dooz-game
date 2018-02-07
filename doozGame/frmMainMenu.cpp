#include "frmGamePad.h"
#include "frmAbout.h"
#include "frmMainMenu.h"



using namespace doozGame;
	using namespace System;
	using namespace System::Windows::Forms;



	System::Void frmMainMenu::button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		doozGame::frmGamePad^ frm = gcnew doozGame::frmGamePad(this, false);
		frm->Show(this);
		this->Hide();
	}

	System::Void frmMainMenu::btnMultiPlayer_Click(System::Object^  sender, System::EventArgs^  e) {
		
		doozGame::frmGamePad^ frm = gcnew doozGame::frmGamePad(this, true);
		frm->Show(this);
		this->Hide();
	}

	System::Void frmMainMenu::btnAbout_Click(System::Object^  sender, System::EventArgs^  e) {
		doozGame::frmAbout^ frm = gcnew doozGame::frmAbout();
		frm->ShowDialog();
	}



[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	doozGame::frmMainMenu form;
	Application::Run(%form);
}

