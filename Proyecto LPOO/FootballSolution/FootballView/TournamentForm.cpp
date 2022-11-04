#include "pch.h"
#include "TournamentForm.h"

using namespace FootballView;
using namespace System::Collections::Generic;

void FootballView::TournamentForm::RefreshTournament()
{
	List<Tournament^>^ tournamentList = Controller::QueryAllTournaments();
	dgvTournament->Rows->Clear();
	for (int i = 0; i < tournamentList->Count; i++) {
		dgvTournament->Rows->Add(gcnew array<String^>{
			"" + tournamentList[i]->Id,
				tournamentList[i]->NameTournament,
				tournamentList[i]->Name,
				tournamentList[i]->Surname,
				tournamentList[i]->Premio,



		});

	}
	return void();
}
