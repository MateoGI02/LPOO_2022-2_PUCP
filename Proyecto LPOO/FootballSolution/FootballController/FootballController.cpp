/*
    Proyecto LPOO_2022-2 Grupo 3 Horario 07M1
    Sistema de generación de campeonatos
    Integrantes:
     -Mateo Guerrero Isuiza
     -Bryan Steven Cruz Sanchez
     -Jhoan Alexander Huaringa Chagray
     -Joshua Mijail Lizarbe Saavedra
 */

#include "pch.h"

#include "FootballController.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;




// Método Organizer
int FootballController::Controller::AddOrganizer(Organizer^ organizer)
{
    OrganizerList->Add(organizer);
    PersistOrganizer();
    return 1;
}
int FootballController::Controller::UpdateOrganizer(Organizer^ organizer)
{
    for (int i = 0; i < OrganizerList->Count; i++)
        if (organizer->Id == OrganizerList[i]->Id) {
            OrganizerList[i] = organizer;
            PersistOrganizer();
            return 1;
        }
    return 0;
}
int FootballController::Controller::DeleteOrganizer(int organizerId)
{
    for (int i = 0; i < OrganizerList->Count; i++)
        if (organizerId == OrganizerList[i]->Id) {
            OrganizerList->RemoveAt(i);
            PersistOrganizer();
            return 1;
        }
    return 0;
}
List<Organizer^>^ FootballController::Controller::QueryAllOrganizer()
{
    LoadOrganizerData();
    List<Organizer^>^ activeOrganizerList = gcnew List <Organizer^>();
    for (int i = 0; i < OrganizerList->Count; i++) {
        activeOrganizerList->Add(OrganizerList[i]);
    }
    return activeOrganizerList;
}
Organizer^ FootballController::Controller::QueryOrganizerById(int organizerId)
{
    for (int i = 0; i < OrganizerList->Count; i++)
        if (organizerId == OrganizerList[i]->Id) {
            return OrganizerList[i];
        }
    return nullptr;
}
//----------------------------------------------------------------------------------------------------------------------------------------

// Métodos Tournament
int FootballController::Controller::AddTournaments(Tournament^ tournaments)
{
    //tournaments->Status = 'A';
    tournamentList->Add(tournaments);
    PersisTournaments();
    return 1;
}
int FootballController::Controller::UpdateTournaments(Tournament^ tournaments)
{
    for (int i = 0; i < tournamentList->Count; i++)
        if (tournaments->Id == tournamentList[i]->Id) {
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
            tournamentList->RemoveAt(i);
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
        activeTtournamentList->Add(tournamentList[i]);
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
//----------------------------------------------------------------------------------------------------------------------------------------

// Método DT
int FootballController::Controller::AddDT(DT^ dt)
{
    DtList->Add(dt);
    PersistDt();
    return 1;
}
int FootballController::Controller::UpdateDt(DT^ dt)
{
    for (int i = 0; i < DtList->Count; i++)
        if (dt->Id == DtList[i]->Id) {
            DtList[i] = dt;
            PersistDt();
            return 1;
        }
    return 0;
}
int FootballController::Controller::DeleteDt(int DtId)
{
    for (int i = 0; i < DtList->Count; i++)
        if (DtId == DtList[i]->Id) {
            DtList->RemoveAt(i);
            PersistDt();
            return 1;
        }
    return 0;
}
List<DT^>^ FootballController::Controller::QueryAllDt()
{
    LoadDtData();
    List<DT^>^ activeDtList = gcnew List <DT^>();
    for (int i = 0; i < DtList->Count; i++) {
        activeDtList->Add(DtList[i]);
    }
    return activeDtList;
}
DT^ FootballController::Controller::QueryDtById(int DtId)
{
    for (int i = 0; i < DtList->Count; i++)
        if (DtId == DtList[i]->Id) {
            return DtList[i];
        }
    return nullptr;
}
//----------------------------------------------------------------------------------------------------------------------------------------

// Método del Login
Organizer^ FootballController::Controller::Login(String^ username, String^ password)
{


    Organizer^ Admin;
    LoadOrganizerData();
    for (int i = 0; i < OrganizerList->Count; i++) {
        if (username == OrganizerList[i]->Username &&
            password == OrganizerList[i]->Password) {
            Admin = OrganizerList[i];
            return Admin;
        }
    }
    return Admin;
}
//----------------------------------------------------------------------------------------------------------------------------------------

//Equipos
int FootballController::Controller::AddFootballteams(Footballteams^ footballteams)
{
    footballteamsList->Add(footballteams);
    PersistFootballteams();
    return 1;
}
int FootballController::Controller::UpdateFootballteams(Footballteams^ footballteams)
{
    for (int i = 0; i < footballteamsList->Count; i++)
        if (footballteams->Id == footballteamsList[i]->Id) {
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
            footballteamsList->RemoveAt(i);
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
        activeFootballteamsList->Add(footballteamsList[i]);
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
//----------------------------------------------------------------------------------------------------------------------------------------

//Jugadores
int FootballController::Controller::AddPlayer(Player^ player)
{
    playerList->Add(player);
    PersistProducts();
    return 1;
}
int FootballController::Controller::UpdatePlayer(Player^ player)
{
    for (int i = 0; i < playerList->Count; i++)
        if (player->Id == playerList[i]->Id) {
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
            playerList->RemoveAt(i);
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
        activePlayersList->Add(playerList[i]);
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
//----------------------------------------------------------------------------------------------------------------------------------------

//Referee
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
            refereeList->RemoveAt(i);
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
        activeRefereeList->Add(refereeList[i]);
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
List<String^>^ FootballController::Controller::QueryAllPositionsReferee()
{
    //Nada
    return nullptr;
}
//----------------------------------------------------------------------------------------------------------------------------------------

//Estadio
int FootballController::Controller::AddStadium(Stadium^ stadium)
{
    stadiumList->Add(stadium);
    PersisStadiums();
    return 1;
}
int FootballController::Controller::UpdateStadium(Stadium^ stadium)
{
    for (int i = 0; i < stadiumList->Count; i++)
        if (stadium->Id ==  stadiumList[i]->Id) {
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
            stadiumList->RemoveAt(i);
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
        activeStadiumList->Add(stadiumList[i]);
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

// Métodos Match
int FootballController::Controller::AddMatch(match^ Match)
{
    matchList->Add(Match);
    PersisMatch();
    return 1;
}
int FootballController::Controller::UpdateMatch(match^ Match)
{
    for (int i = 0; i < matchList->Count; i++)
        if ((Match->tournament->Id == matchList[i]->tournament->Id) && (Match->date == matchList[i]->date)) {
            matchList[i] = Match;
            PersisMatch();
            return 1;
        }
    return 0;
}
int FootballController::Controller::DeleteMatch(match^ Match)
{
    int a = 0;
    for (int i = 0; i < matchList->Count; i++) {
        if ((Match->tournament->Id == matchList[i]->tournament->Id) && (Match->date == matchList[i]->date)) {
            matchList->RemoveAt(i);
            PersisMatch();
            a = 1;
        }
        if (a == 1 && i < matchList->Count) {
            matchList[i]->date = matchList[i]->date-1;
        }
    }
    PersisMatch();
    return a;
}
List<match^>^ FootballController::Controller::QueryAllMatchs()
{
    LoadMatchData();
    List<match^>^ activeMatchList = gcnew List<match^>();
    for (int i = 0; i < matchList->Count; i++) {
        activeMatchList->Add(matchList[i]);
    }
    return activeMatchList;
}
List<match^>^ FootballController::Controller::QueryMatchByTournament(int TournamentId)
{
    LoadMatchData();
    List<match^>^ activeMatchList = gcnew List<match^>();
    for (int i = 0; i < matchList->Count; i++)
        if (TournamentId == matchList[i]->tournament->Id) {
            activeMatchList->Add(matchList[i]);
        }
    return activeMatchList;
}
match^ FootballController::Controller::QueryMatchById(int Date, int TournamentId) {
    LoadMatchData();
    List<match^>^ activeMatchList = gcnew List<match^>();
    for (int i = 0; i < matchList->Count; i++)
        if (TournamentId == matchList[i]->tournament->Id) {
            activeMatchList->Add(matchList[i]);
        }
    for (int i = 0; i < activeMatchList->Count; i++)
        if (Date == activeMatchList[i]->date) {
            return activeMatchList[i];
        }
    return nullptr;
}
//----------------------------------------------------------------------------------------------------------------------------------------






// Persist and Load
//Players
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
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Players.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        playerList = (List<Player^>^)bFormatter->Deserialize(sr);
        sr->Close();
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

//Equipos
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
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Footballteams.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        footballteamsList = (List<Footballteams^>^)bFormatter->Deserialize(sr);
        sr->Close();
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

//Dt
void FootballController::Controller::PersistDt()
{
    Stream^ stream = File::Open("Dt.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, DtList);
    stream->Close();
}
void FootballController::Controller::LoadDtData()
{
    DtList = gcnew List<DT^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Dt.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        DtList = (List<DT^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

//Organizer
void FootballController::Controller::PersistOrganizer()
{
    Stream^ stream = File::Open("Organizer.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, OrganizerList);
    stream->Close();
}
void FootballController::Controller::LoadOrganizerData()
{
    OrganizerList = gcnew List<Organizer^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Organizer.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        OrganizerList = (List<Organizer^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally { 
        if (sr != nullptr) sr->Close();
    }
}

//Referees
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
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Referees.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        refereeList = (List<Referee^>^)bFormatter->Deserialize(sr);
        sr->Close();
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

//Stadiums
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

//Campeonatos
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
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Tournaments.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        tournamentList = (List<Tournament^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

//Match
void FootballController::Controller::PersisMatch()
{
    Stream^ stream = File::Open("Match.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, matchList);
    stream->Close();
}
void FootballController::Controller::LoadMatchData()

{
    matchList = gcnew List<match^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Match.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        matchList = (List<match^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}

//Fin Persist y Load
