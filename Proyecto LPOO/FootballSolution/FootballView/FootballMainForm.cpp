#include "pch.h"
#include "FootballMainForm.h"
#include "InscriptionForm.h"


/*
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	FootballView::FootballMainForm form;
	Application::Run(% form);
}
*/

System::Void FootballView::FootballMainForm::inscripcionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	InscriptionForm::Organi = (Organizer^)Orga;
	InscriptionForm^ inscriptionForm = gcnew InscriptionForm();
	inscriptionForm->MdiParent = this;
	inscriptionForm->Show();
}

System::Void FootballView::FootballMainForm::cTorneosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	TournamentForm::Organ = (Organizer^)Orga;
	TournamentForm^ tournamentForm = gcnew TournamentForm();
	tournamentForm->MdiParent = this;
	tournamentForm->Show();
}

System::Void FootballView::FootballMainForm::bttIniInscrip_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	InscriptionForm::Organi = (Organizer^)Orga;
	InscriptionForm^ inscriptionForm = gcnew InscriptionForm();
	inscriptionForm->MdiParent = this;
	inscriptionForm->Show();
}

System::Void FootballView::FootballMainForm::bttIniTour_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	TournamentForm::Organ = (Organizer^)Orga;
	TournamentForm^ tournamentForm = gcnew TournamentForm();
	tournamentForm->MdiParent = this;
	tournamentForm->Show();
}