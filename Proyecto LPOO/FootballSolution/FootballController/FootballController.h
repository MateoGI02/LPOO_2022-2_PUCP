/*
	Proyecto LPOO_2022-2 Grupo 3 Horario 07M1
	Sistema de generación de campeonatos
	Integrantes:
	 -Mateo Guerrero Isuiza
	 -Bryan Steven Cruz Sanchez
	 -Jhoan Alexander Huaringa Chagray
	 -Joshua Mijail Lizarbe Saavedra
 */

#pragma once

using namespace System;
using namespace FootballModel;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Data::SqlClient;


namespace FootballController {
	public ref class Controller 
	{
	private: 
		static List <Player^>^ playerList = gcnew List<Player^>();
		static List <Referee^>^ refereeList = gcnew List<Referee^>();
		static List <DT^>^ DtList = gcnew List<DT^>();
		static List <Organizer^>^ OrganizerList = gcnew List<Organizer^>();
		static List <Stadium^>^ stadiumList = gcnew List<Stadium^>();
		static List <Tournament^>^ tournamentList = gcnew List<Tournament^>();
		static List <match^>^ matchList = gcnew List<match^>();
		static List <Footballteams^>^ footballteamsList = gcnew List<Footballteams^>();
		
		// TODO: Agregue aquí los métodos de esta clase.

		public:
			static SqlConnection^ GetConnection();
			//Match
			static int FootballController::Controller::AddMatch(match^ match);
			static int FootballController::Controller::UpdateMatch(match^ Match);
			static int FootballController::Controller::DeleteMatch(match^ Match);
			static List<match^>^ FootballController::Controller::QueryAllMatchs();
			static List<match^>^ FootballController::Controller::QueryMatchByTournament(int TournamentId);
			static match^ FootballController::Controller::QueryMatchById(int Date, int TournamentId);

			static void PersisMatch();
			static void LoadMatchData();

			// Metodos CRUD de Player
			static int AddPlayer(Player^ player);
			static int UpdatePlayer(Player^ player);
			static int DeletePlayer( int playerId);
			static List <Player^>^ QueryAllPlayers();
			static Player^ QueryPlayerById(int playerId);
			static List <String^>^ QueryAllPositions();
	
			static void PersistProducts();
			static void LoadProductsData();

			// Metodos CRUD de DT
			static int AddDT(DT^ dt);
			static int UpdateDt(DT^ dt);
			static int DeleteDt(int DtId);
			static List <DT^>^ QueryAllDt();
			static DT^ QueryDtById(int DtId);

			static void PersistDt();
			static void LoadDtData();

			// Metodos CRUD de Organizer
			static int AddOrganizer(Organizer^ organizer);
			static int UpdateOrganizer(Organizer^ organizer);
			static int DeleteOrganizer(int organizerId);
			static List <Organizer^>^ QueryAllOrganizer();
			static Organizer^ QueryOrganizerById(int organizerId);

			static void PersistOrganizer();
			static void LoadOrganizerData();


			// Metodos CRUD de Referee
			static int AddReferee(Referee^ referee);
			static int UpdateReferee(Referee^ referee);
			static int DeleteReferee(int refereeId);
			static List <Referee^>^ QueryAllReferees();
			static List <Referee^>^ QueryRefereesByName(String^);
			static Referee^ QueryRefereeById(int refereeId);
			static List<String^>^ FootballController::Controller::QueryAllPositionsReferee();

			static void PersistReferees();
			static void LoadRefereesData();

			// Metodos CRUD de Stadium
			static int AddStadium(Stadium^ stadium);
			static int UpdateStadium(Stadium^ stadium);
			static int DeleteStadium(int stadiumId);
			static List <Stadium^>^ QueryAllStadium();
			static Stadium^ QueryStadiumById(int stadiumId);

			static void PersisStadiums();
			static void LoadStadiumsData();


			// Metodos CRUD de Footballteams

			static void PersistFootballteams();
			static void LoadFootballteamsData();

			static int AddFootballteams(Footballteams^ footballteams);
			static int UpdateFootballteams(Footballteams^ footballteams);
			static int DeleteFootballteams(int footballteamsId);
			static List <Footballteams^>^ QueryAllFootballteams();
			static Footballteams^ QueryFootballteamsById(int footballteamsId);


			// Metodos CRUD de Tournament

			static void PersisTournaments();
			static void LoadTournamentsData();

			static int AddTournaments(Tournament^ tournaments);
			static int UpdateTournaments(Tournament^ tournaments);
			static int DeleteTournaments(int tournamentsId);
			static List <Tournament^>^ QueryAllTournaments();
			static Tournament^ QueryTournamentsById(int tournamentsId);


			static Organizer^ Login(String^ username, String^ password);


	};
}
