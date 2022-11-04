#include "pch.h"
#include "InscriptionForm.h"

using namespace FootballView;
using namespace System::Collections::Generic;






Void FootballView::InscriptionForm::RefreshRefereesDGV() {
	List <Referee^>^ refereeList = Controller::QueryAllReferees();
	dgvReferee->Rows->Clear();
	for (int i = 0; i < refereeList->Count; i++) {
		dgvReferee->Rows->Add(gcnew array<String^> {
			"" + refereeList[i]->Id,
				 refereeList[i]->DocNumber,
			
				 refereeList[i]->Name,
				refereeList[i]->Surname,
				



		});

	}
	return Void();
}







Void FootballView::InscriptionForm::RefreshStadiumsDGV() {
	List <Stadium^>^ stadiumList = Controller::QueryAllStadium();
	dgvStadium->Rows->Clear();
	for (int i = 0; i < stadiumList->Count; i++) {
		dgvStadium->Rows->Add(gcnew array<String^> {
			"" + stadiumList[i]->Id,
				stadiumList[i]->Name,
				stadiumList[i]->Place,
				stadiumList[i]->Direction
				



		});

	}
	return Void();
}


















