#include "pch.h"

#include "FootballController.h"
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

int FootballController::Controller::AddPlayer(Player^ player)
{
    //player->Status = 'A';
    playerList->Add(player);
    PersistProducts();
    return 1;
}

int FootballController::Controller::UpdatePlayer(Player^ player)
{
    for(int i=0; i< playerList ->Count; i++)
        if (player->Id == playerList[i]->Id) {
           // player->Status = 'A';
            playerList[i] = player;
           PersistProducts();
            return 1;
        }
    return 0;
}

int FootballController::Controller::DeletePlayer(int playerId)
{
    for (int i = 0; i < playerList->Count; i++)
        if (playerId == playerList[i]->Id) {
          playerList[i]->Status = 'I';
          PersistProducts();
            return 1;
        }
    return 0;
}

List<Player^>^ FootballController::Controller::QueryAllPlayers()
{
    LoadProductsData();
    List<Player^>^ activePlayersList = gcnew List <Player^>();
    for (int i = 0; i < playerList->Count; i++) {
        if (playerList[i]->Status == 'A') {
            activePlayersList->Add(playerList[i]);
        }

      

    }
    return activePlayersList;
}

Player^ FootballController::Controller::QueryPlayerById(int playerId)
{
    for (int i = 0; i < playerList->Count; i++)
        if (playerId == playerList[i]->Id) {
            return playerList[i];
        }
    return nullptr;
}
List<String^>^ FootballController::Controller::QueryAllPositions()
{
    List <String^>^ positionList = gcnew List<String^>();
    StreamReader^ sr = gcnew StreamReader("Position.txt");
    while (!sr->EndOfStream)
        positionList->Add(sr->ReadLine());
    sr->Close();
    return positionList;
}
/*Player^ FootballController::Controller::QueryPositionById(int positionId)
{
    for (int i = 0; i < positionList->Count; i++)
        if (positionId == positionList[i]->) {
            return positionList[i];
        }
    return nullptr;
}*/




int FootballController::Controller::AddReferee(Referee^ referee)
{
    referee->Status = 'A';
    refereeList->Add(referee);
  PersistReferees();
    return 1;
}

int FootballController::Controller::UpdateReferee(Referee^ referee)
{
    for (int i = 0; i < refereeList->Count; i++)
        if (referee->Id == refereeList[i]->Id) {
            referee->Status = 'A';
            refereeList[i] = referee;
         PersistReferees();
            return 1;
        }
    return 0;
}

int FootballController::Controller::DeleteReferee(int refereeId)
{
    for (int i = 0; i < refereeList->Count; i++)
        if (refereeId == refereeList[i]->Id) {
            refereeList[i]->Status = 'I';
          PersistReferees();
            return 1;
        }
    return 0;
}

List<Referee^>^ FootballController::Controller::QueryAllReferees()
{
  LoadRefereesData();
    List<Referee^>^ activeRefereeList = gcnew List<Referee^>();
    for (int i = 0; i < refereeList->Count; i++) {
        if (refereeList[i]->Status == 'A') {
            activeRefereeList->Add(refereeList[i]);
        }
    }
    return activeRefereeList;
}

List<Referee^>^ FootballController::Controller::QueryRefereesByName(String^ value)
{
    LoadRefereesData();
    List<Referee^>^ newRefereeList = gcnew List<Referee^>();
    for (int i = 0; i < refereeList->Count; i++) {
        if (refereeList[i]->Name->Contains(value) ||
           refereeList[i]->Surname->Contains(value))
            newRefereeList->Add(refereeList[i]);
    }
    return newRefereeList;

}

Referee^ FootballController::Controller::QueryRefereeById(int refereeId)
{
    for (int i = 0; i < refereeList->Count; i++)
        if (refereeId == refereeList[i]->Id) {
            return refereeList[i];
        }
    return nullptr;
}



int FootballController::Controller::AddStadium(Stadium^ stadium)
{
    stadium->Status = 'A';
    stadiumList->Add(stadium);
  PersisStadiums();
    return 1;
}

int FootballController::Controller::UpdateStadium(Stadium^ stadium)
{
    for (int i = 0; i < stadiumList->Count; i++)
        if (stadium->Id ==  stadiumList[i]->Id) {
            stadium->Status = 'A';
            stadiumList[i] = stadium;
         PersisStadiums();
            return 1;
        }
    return 0;
}



int FootballController::Controller::DeleteStadium(int stadiumId)
{
    for (int i = 0; i < stadiumList->Count; i++)
        if (stadiumId == stadiumList[i]->Id) {
            stadiumList[i]->Status = 'I';
        PersisStadiums();
            return 1;
        }
    return 0;
}

List<Stadium^>^ FootballController::Controller::QueryAllStadium()
{
    LoadStadiumsData();
    List<Stadium^>^ activeStadiumList = gcnew List<Stadium^>();
    for (int i = 0; i < stadiumList->Count; i++) {
        if (stadiumList[i]->Status == 'A') {
            activeStadiumList->Add(stadiumList[i]);
        }
    }
    return activeStadiumList;
}

Stadium^ FootballController::Controller::QueryStadiumById(int stadiumId)
{
    for (int i = 0; i < stadiumList->Count; i++)
        if (stadiumId == stadiumList[i]->Id) {
            return stadiumList[i];
        }
    return nullptr;
}


 
			 

int FootballController::Controller::AddFootballteams(Footballteams^ footballteams)
{
    
    footballteams->Status = 'A';
    footballteamsList->Add(footballteams);
    PersistFootballteams();
        return 1;
}

int FootballController::Controller::UpdateFootballteams(Footballteams^ footballteams)
{
    for (int i = 0; i < footballteamsList->Count; i++)
        if (footballteams->Id == footballteamsList[i]->Id) {
            footballteams->Status = 'A';
            footballteamsList[i] = footballteams;
          PersistFootballteams();
            return 1;
        }
    return 0;
}

int FootballController::Controller::DeleteFootballteams(int footballteamsId)
{
    for (int i = 0; i < footballteamsList->Count; i++)
        if (footballteamsId == footballteamsList[i]->Id) {
            footballteamsList[i]->Status = 'I';
         PersistFootballteams();
            return 1;
        }
    return 0;
}

List<Footballteams^>^ FootballController::Controller::QueryAllFootballteams()
{
    LoadFootballteamsData();
    List<Footballteams^>^ activeFootballteamsList = gcnew List<Footballteams^>();
    for (int i = 0; i < footballteamsList->Count; i++) {
        if (footballteamsList[i]->Status == 'A') {
            activeFootballteamsList->Add(footballteamsList[i]);
        }
    }
    return activeFootballteamsList;
}

Footballteams^ FootballController::Controller::QueryFootballteamsById(int footballteamsId)
{
    for (int i = 0; i < footballteamsList->Count; i++)
        if (footballteamsId == footballteamsList[i]->Id) {
            return footballteamsList[i];
        }
    return nullptr;
}

int FootballController::Controller::AddTournaments(Tournament^ tournaments)
{
    tournaments->Status = 'A';
    tournamentList->Add(tournaments);
   PersisTournaments();
    return 1;
}
int FootballController::Controller::UpdateTournaments(Tournament^ tournaments)
{
    for (int i = 0; i < tournamentList->Count; i++)
        if (tournaments->Id == tournamentList[i]->Id) {
            tournaments->Status = 'A';
            tournamentList[i] = tournaments;
           PersisTournaments();
            return 1;
        }
    return 0;
}
int FootballController::Controller::DeleteTournaments(int tournamentsId)
{
    for (int i = 0; i < tournamentList->Count; i++)
        if (tournamentsId == tournamentList[i]->Id) {
            tournamentList[i]->Status = 'I';
           PersisTournaments();
            return 1;
        }
    return 0;
}
List<Tournament^>^ FootballController::Controller::QueryAllTournaments()
{
   LoadTournamentsData();
    List<Tournament^>^ activeTtournamentList = gcnew List<Tournament^>();
    for (int i = 0; i < tournamentList->Count; i++) {
        if (tournamentList[i]->Status == 'A') {
            activeTtournamentList->Add(tournamentList[i]);
        }
    }
    return activeTtournamentList;
}
Tournament^ FootballController::Controller::QueryTournamentsById(int tournamentsId)
{
    for (int i = 0; i < tournamentList->Count; i++)
        if (tournamentsId == tournamentList[i]->Id) {
            return tournamentList[i];
        }
    return nullptr;
}
DT^ FootballController::Controller::Login(String^ username, String^ password)
{
    DT^ dt;
    if (username == "StevenC" && password == "5658887") {
        dt = gcnew DT();
        dt->Id = 1;
        dt->Name = "Steven";
        dt->DocNumber = "66666666";
        dt->Username = "StevenC";
    }
    return dt;
}

// persist and Load
void FootballController::Controller::PersistProducts()
{
    Stream^ stream = File::Open("Players.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, playerList);
    stream->Close();
}

void FootballController::Controller::LoadProductsData()
{
    playerList = gcnew List<Player^>();

    Stream^ sr = File::Open("Players.bin", FileMode::Open);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    playerList = (List<Player^>^)bFormatter->Deserialize(sr);

    sr->Close();

}


void FootballController::Controller::PersistFootballteams()
{
    Stream^ stream = File::Open("Footballteams.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, footballteamsList);
    stream->Close();
}

void FootballController::Controller::LoadFootballteamsData()
{
    footballteamsList = gcnew List<Footballteams^>();

    Stream^ sr = File::Open("Footballteams.bin", FileMode::Open);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    footballteamsList = (List<Footballteams^>^)bFormatter->Deserialize(sr);

    sr->Close();

}
void FootballController::Controller::PersistReferees()
{
    Stream^ stream = File::Open("Referees.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, refereeList);
    stream->Close();
}

void FootballController::Controller::LoadRefereesData()
{
    refereeList = gcnew List<Referee^>();

    Stream^ sr = File::Open("Referees.bin", FileMode::Open);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    refereeList = (List<Referee^>^)bFormatter->Deserialize(sr);

    sr->Close();
}


void FootballController::Controller::PersisStadiums()
{
    Stream^ stream = File::Open("Stadiums.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, stadiumList);
    stream->Close();
}

void FootballController::Controller::LoadStadiumsData()
{
   

    stadiumList = gcnew List<Stadium^>();
    //Lectura desde un archivo binario
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Stadiums.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        stadiumList = (List<Stadium^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

void FootballController::Controller::PersisTournaments()
{
    Stream^ stream = File::Open("Tournaments.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, tournamentList);
    stream->Close();
}
void FootballController::Controller::LoadTournamentsData()

{
    tournamentList = gcnew List<Tournament^>();

    Stream^ sr = File::Open("Tournaments.bin", FileMode::Open);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    tournamentList = (List<Tournament^>^)bFormatter->Deserialize(sr);

    sr->Close();
}

