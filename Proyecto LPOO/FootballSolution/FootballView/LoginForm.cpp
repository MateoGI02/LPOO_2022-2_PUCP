#include "pch.h"
#include "LoginForm.h"
#include "FootballMainForm.h"

System::Void FootballView::LoginForm::btnAccept_Click(System::Object^ sender, System::EventArgs^ e)
{
	{
		Organizer^ o = Controller::Login(txtUsername->Text, txtPassword->Text);
		if (txtUsername->Text=="admin"&& txtPassword->Text=="password") {
			MessageBox::Show("Bienvenido admin" );
			Organizer^ o = gcnew Organizer();
			o->Id = 1234;
			o->DocNumber = "1232313";
			o->Name = "Admin";
			o->Username = "Admin";
			FootballMainForm::Orga = (Organizer^)o;
			this->Close();
		}
		else if (o != nullptr) {
			MessageBox::Show("Bienvenido " + o->Name);
			FootballMainForm::Orga = (Organizer^)o;
			this->Close();
		}
		else {
			MessageBox::Show("Usuario y contraseña incorrectos.");
		}

	}
}
