#pragma once

using namespace System;
using namespace FootballModel;
using namespace System::Collections::Generic;
using namespace System::IO;

namespace FootballController {
	public ref class Controller 
	{
	private: 
		static List <Player^>^ playerList = gcnew List<Player^>();
		static List <Referee^>^ refereeList = gcnew List<Referee^>();
		static List <Stadium^>^ stadiumList = gcnew List<Stadium^>();
		static List <Tournament^>^ tournamentList = gcnew List<Tournament^>();
		
		static List <Footballteams^>^ footballteamsList = gcnew List<Footballteams^>();
		
		// TODO: Agregue aquí los métodos de esta clase.

		public:
			// Metodos CRUD de Player
			static int AddPlayer(Player^ player);
			static int UpdatePlayer(Player^ player);
			static int DeletePlayer( int playerId);
			static List <Player^>^ QueryAllPlayers();
			static Player^ QueryPlayerById(int playerId);
			static List <String^>^ QueryAllPositions();
	
			
			static void PersistProducts();
			static void LoadProductsData();

			// Metodos CRUD de Referee
			static int AddReferee(Referee^ referee);
			static int UpdateReferee(Referee^ referee);
			static int DeleteReferee(int refereeId);
			static List <Referee^>^ QueryAllReferees();
			static List <Referee^>^ QueryRefereesByName(String^);
			static Referee^ QueryRefereeById(int refereeId);

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


			static DT^ Login(String^ username, String^ password);


	};
}
