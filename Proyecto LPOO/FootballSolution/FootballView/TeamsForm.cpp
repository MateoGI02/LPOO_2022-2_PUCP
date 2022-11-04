#include "pch.h"
#include "TeamsForm.h"

using namespace FootballView;
using namespace System::Collections::Generic;



Void FootballView::TeamsForm::RefreshTeamDGV() {
	List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
	dgvTeams->Rows->Clear();
	for (int i = 0; i < footballteamsList->Count; i++) {
		dgvTeams->Rows->Add(gcnew array<String^>{
			"" + footballteamsList[i]->Id,
				footballteamsList[i]->NameTeam,
				footballteamsList[i]->Name,
				footballteamsList[i]->Surname,
				


		});
		
	}
	return Void();

}