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



    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
   //                                     + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_AddORGANIZER";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@docNumber", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@surname", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 250);
    //comm->Parameters->Add("iage", System::Data::SqlDbType::Int);


    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();
    comm->Parameters["@docNumber"]->Value = organizer->DocNumber;
    comm->Parameters["@name"]->Value = organizer->Name;
    comm->Parameters["@surname"]->Value = organizer->Surname;
    comm->Parameters["@username"]->Value = organizer->Username;
    //  comm->Parameters["@iage"]->Value = organizer->Age;

      //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados 
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5: Se cierra la conexión
    if (conn != nullptr) conn->Close();
    return output_id;
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


    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("usp_QueryAllOrganizer", conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;

    SqlDataReader^ reader = comm->ExecuteReader();

    List<Organizer^>^ activeOrganizerList = gcnew List <Organizer^>();
    //Paso 3: Se ejecuta la sentencia
    while (reader->Read()) {
        Organizer^ p = gcnew Organizer();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->DocNumber = reader["docNumber"]->ToString();
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        p->Username = reader["username"]->ToString();

        activeOrganizerList->Add(p);
    }

    // Paso 4 (CRÍTICO): Cerrar la conexión.
    if (reader != nullptr) reader->Close();
    if (conn != nullptr) conn->Close();
    return activeOrganizerList;
    */
}
Organizer^ FootballController::Controller::QueryOrganizerById(int organizerId)
{
    for (int i = 0; i < OrganizerList->Count; i++)
        if (organizerId == OrganizerList[i]->Id) {
            return OrganizerList[i];
        }
    return nullptr;


    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("usp_QueryOrganizerById", conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@vid", System::Data::SqlDbType::VarChar, 6);
    comm->Prepare();
    comm->Parameters["@vid"]->Value = organizerId;

    // Paso 3: Se recorre los registros retornados
    SqlDataReader^ reader = comm->ExecuteReader();

    // Paso 4: Se procesan los resultados
    Organizer^ p;
    if (reader->Read()) {
        p = gcnew Organizer();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->DocNumber = reader["docNumber"]->ToString();
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        p->Username = reader["username"]->ToString();
    }

    // Paso 4 (CRÍTICO): Cerrar la conexión.
    if (reader != nullptr) reader->Close();
    if (conn != nullptr) conn->Close();
    return p;
    */
}
//----------------------------------------------------------------------------------------------------------------------------------------

// Métodos Tournament
int FootballController::Controller::AddTournaments(Tournament^ tournaments)
{
    //tournaments->Status = 'A';
    tournamentList->Add(tournaments);
    PersisTournaments();
    return 1;

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
   //                                     + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_AddTOURNAMENT";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@nameTournament", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@organizer", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@premio", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@numteams", System::Data::SqlDbType::Int);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();
    comm->Parameters["@nameTournament"]->Value = tournaments->NameTournament;
    comm->Parameters["@organizer"]->Value = tournaments->Organizer;
    comm->Parameters["@premio"]->Value = tournaments->Premio;
    comm->Parameters["@numteams"]->Value = tournaments->numteams;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return output_id;
    */
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
    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
    //                                    + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_UpdateORGANIZER";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@nameTournament", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@organizer", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@premio", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@numteams", System::Data::SqlDbType::Int);

    comm->Prepare();
    comm->Parameters["@nameTournament"]->Value = tournaments->NameTournament;
    comm->Parameters["@organizer"]->Value = tournaments->Organizer;
    comm->Parameters["@premio"]->Value = tournaments->Premio;
    comm->Parameters["@numteams"]->Value = tournaments->numteams;


    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return res;
    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("UPDATE TOURNAMENTS" + "" + "WHERE id = " + tournamentsId, conn);

    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

  //Paso 5: Se cierran los obtejos de conexión
    conn->Close();
    return res;
    */
}
List<Tournament^>^ FootballController::Controller::QueryAllTournaments()
{
    LoadTournamentsData();
    List<Tournament^>^ activeTtournamentList = gcnew List<Tournament^>();
    for (int i = 0; i < tournamentList->Count; i++) {
        activeTtournamentList->Add(tournamentList[i]);
    }
    return activeTtournamentList;

    /*
    List<Tournament^>^ activeTtournamentList = gcnew List<Tournament^>();

    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PRODUCT_JOSHUA"
   //             + "WHERE NameTeam LIKE '%" + value + "%'", conn);

    String^ strCmd = "dbo.usp_QueryDTByNameTournament";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar, 250);
    comm->Prepare();
    comm->Parameters["@value"]->Value = DBNull::Value;
    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Tournament^ p;
    while (reader->Read()) {
        p = gcnew Tournament();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->NameTournament = reader["nameTournament"]->ToString();
        // p->Organizer = reader["organizer"]->ToString();
        p->Premio = reader["premio"]->ToString();
        p->numteams = Convert::ToInt32(reader["numteams"]->ToString());

        activeTtournamentList->Add(p);
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();

    return activeTtournamentList;
    */
}
Tournament^ FootballController::Controller::QueryTournamentsById(int tournamentsId)
{
    for (int i = 0; i < tournamentList->Count; i++)
        if (tournamentsId == tournamentList[i]->Id) {
            return tournamentList[i];
        }
    return nullptr;
    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM TOURNAMENT AND id=" + tournamentsId, conn);

    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Tournament^ p;
    if (reader->Read()) {
        p = gcnew Tournament();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->NameTournament = reader["nameTournament"]->ToString();
        // p->Organizer = reader["organizer"]->ToString();
        p->Premio = reader["premio"]->ToString();
        p->numteams = Convert::ToInt32(reader["numteams"]->ToString());
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();
    return p;
    */
}
//----------------------------------------------------------------------------------------------------------------------------------------


// Método DT
int FootballController::Controller::AddDT(DT^ dt)
{
    DtList->Add(dt);
    PersistDt();
    return 1;


    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

  //  SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
  //                                      + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_AddDT";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@docNumber", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@surname", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@experience", System::Data::SqlDbType::Int);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();
    comm->Parameters["@docNumber"]->Value = dt->DocNumber;
    comm->Parameters["@name"]->Value = dt->Name;
    comm->Parameters["@surname"]->Value = dt->Surname;
    comm->Parameters["@experience"]->Value = dt->Experience;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados 
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return output_id;

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

    /*
    //Paso 1: se obtiene la conexion
        SqlConnection ^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
    //                                    + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_UpdateDT";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@docNumber", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@surname", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@experience", System::Data::SqlDbType::Int);

    comm->Prepare();
    comm->Parameters["@docNumber"]->Value = dt->DocNumber;
    comm->Parameters["@name"]->Value = dt->Name;
    comm->Parameters["@surname"]->Value = dt->Surname;
    comm->Parameters["@experience"]->Value = dt->Experience;


    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return res;

    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("UPDATE DT" + "" + "WHERE id = " + DtId, conn);

    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

  //Paso 5: Se cierran los obtejos de conexión
    conn->Close();
    return res;
    */
}
List<DT^>^ FootballController::Controller::QueryAllDt()
{
    LoadDtData();
    List<DT^>^ activeDtList = gcnew List <DT^>();
    for (int i = 0; i < DtList->Count; i++) {
        activeDtList->Add(DtList[i]);
    }
    return activeDtList;

    /*

    //  List<DT^>^ activeDtList = gcnew List <DT^>();

    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("usp_QueryAllDT", conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    SqlDataReader^ reader = comm->ExecuteReader();

    List<DT^>^ activeDtList = gcnew List <DT^>();
    //Paso 3: Se ejecuta la sentencia
    while (reader->Read()) {
        DT^ p = gcnew DT();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->DocNumber = reader["docnumber"]->ToString();
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        p->Experience = Convert::ToInt32(reader["experience"]->ToString());

        activeDtList->Add(p);
    }

    //Paso 4: Se cierran los obtejos de conexión
    if (reader != nullptr) reader->Close();
    if (conn != nullptr) conn->Close();
    return activeDtList;
    */

}
DT^ FootballController::Controller::QueryDtById(int DtId)
{
    for (int i = 0; i < DtList->Count; i++)
        if (DtId == DtList[i]->Id) {
            return DtList[i];
        }
    return nullptr;


    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm;
    comm = gcnew SqlCommand("usp_QueryDTtById", conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@vid", System::Data::SqlDbType::VarChar, 6);
    comm->Prepare();
    comm->Parameters["@vid"]->Value = DtId;

    //Paso 3: Se recorre los registros retornados
    SqlDataReader^ reader = comm->ExecuteReader();

    // 4to paso: Se procesan los resultados
    DT^ p;
    if (reader->Read()) {
        p = gcnew DT();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->DocNumber = reader["docnumber"]->ToString();
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        p->Experience = Convert::ToInt32(reader["experience"]->ToString());
    }

    //Paso 5 (CRÍTICO): Cerrar la conexión.
    if (reader != nullptr) reader->Close();
    if (conn != nullptr) conn->Close();
    return p;
    */

}
//----------------------------------------------------------------------------------------------------------------------------------------

// Método del Login
Organizer^ FootballController::Controller::Login(String^ username, String^ password)
{
    Organizer^ Admin;
    //LoadOrganizerData();
    List <Organizer^>^ OrganizerList2 = QueryAllOrganizer();

    for (int i = 0; i < OrganizerList2->Count; i++) {
        if (username == OrganizerList2[i]->Username &&
            password == OrganizerList2[i]->Password) {
            Admin = OrganizerList2[i];
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
    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
   //                                     + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_AddProduct";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@NameTeam", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@DT", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@Tournament", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@numplayers", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();
    comm->Parameters["@NameTeam"]->Value = footballteams->NameTeam;
    comm->Parameters["@DT"]->Value = footballteams->DT;
    comm->Parameters["@Tournament"]->Value = footballteams->Tournament;
    comm->Parameters["@numplayers"]->Value = footballteams->numplayers;
    if (footballteams->Photo == nullptr)
        comm->Parameters["@photo"]->Value = DBNull::Value;
    else
        comm->Parameters["@photo"]->Value = footballteams->Photo;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return output_id;
    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
    //                                    + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_UpdateProduct";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@NameTeam", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@DT", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@Tournament", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@numplayers", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);

    comm->Prepare();
    comm->Parameters["@NameTeam"]->Value = footballteams->NameTeam;
    comm->Parameters["@DT"]->Value = footballteams->DT;
    comm->Parameters["@Tournament"]->Value = footballteams->Tournament;
    comm->Parameters["@numplayers"]->Value = footballteams->numplayers;
    if (footballteams->Photo == nullptr)
        comm->Parameters["@photo"]->Value = DBNull::Value;
    else
        comm->Parameters["@photo"]->Value = footballteams->Photo;

    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return res;

    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("UPDATE PRODUCT_JOSHUA" + "" + "WHERE id = " + footballteamsId, conn);

    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

      //Paso 4: Se procesan los resultados (No aplica)

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();
    return res;
    */
}
List<Footballteams^>^ FootballController::Controller::QueryAllFootballteams()
{
    LoadFootballteamsData();
    List<Footballteams^>^ activeFootballteamsList = gcnew List<Footballteams^>();
    for (int i = 0; i < footballteamsList->Count; i++) {
        activeFootballteamsList->Add(footballteamsList[i]);
    }
    return activeFootballteamsList;
    /*
    List<Footballteams^>^ activeFootballteamsList = gcnew List<Footballteams^>();

    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

  //  SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PRODUCT_JOSHUA"
 //               + "WHERE NameTeam LIKE '%" + value + "%'", conn);

    String^ strCmd = "dbo.usp_QueryProductByNameTeam";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar, 250);
    comm->Prepare();
    comm->Parameters["@value"]->Value = DBNull::Value;
    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Footballteams^ p;
    while (reader->Read()) {
        p = gcnew Footballteams();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->NameTeam = reader["NameTeam"]->ToString();
        p->numplayers = Convert::ToInt32(reader["numplayers"]->ToString());
        //  p->Tournament = reader["Tournament"]->ToString();
        //  p->DT = reader["DT"]->ToString();
        if (!DBNull::Value->Equals(reader["photo"]))
            p->Photo = (array<Byte>^)reader["photo"];

        activeFootballteamsList->Add(p);
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();

    return activeFootballteamsList;
    */
}
Footballteams^ FootballController::Controller::QueryFootballteamsById(int footballteamsId)
{
    for (int i = 0; i < footballteamsList->Count; i++)
        if (footballteamsId == footballteamsList[i]->Id) {
            return footballteamsList[i];
        }
    return nullptr;

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PRODUCT_JOSHUA AND id=" + footballteamsId, conn);

    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Footballteams^ p;
    if (reader->Read()) {
        p = gcnew Footballteams();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->NameTeam = reader["NameTeam"]->ToString();
        p->numplayers = Convert::ToInt32(reader["numplayers"]->ToString());
        //  p->Tournament = reader["Tournament"]->ToString();
        //  p->DT = reader["DT"]->ToString();
        if (!DBNull::Value->Equals(reader["photo"]))
            p->Photo = (array<Byte>^)reader["photo"];
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();
    return p;
    */
}
//----------------------------------------------------------------------------------------------------------------------------------------

//Jugadores
int FootballController::Controller::AddPlayer(Player^ player)
{
    playerList->Add(player);
    PersistProducts();
    return 1;

    /*
     //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
   //                                     + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_AddPlayer";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@number", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@surname", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@footballTeams", System::Data::SqlDbType::VarChar, 250);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();
    comm->Parameters["@number"]->Value = player->Number;
    comm->Parameters["@name"]->Value = player->Name;
    comm->Parameters["@surname"]->Value = player->Surname;
    comm->Parameters["@footballTeams"]->Value = player->footballteams;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return output_id;
    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

  //  SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
  //                                      + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_UpdatePlayer";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@number", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@surname", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@footballTeams", System::Data::SqlDbType::VarChar, 250);

    comm->Prepare();
    comm->Parameters["@number"]->Value = player->Number;
    comm->Parameters["@name"]->Value = player->Name;
    comm->Parameters["@surname"]->Value = player->Surname;
    comm->Parameters["@footballTeams"]->Value = player->footballteams;


    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return res;
    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("UPDATE PLAYER" + "" + "WHERE id = " + playerId, conn);

    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

  //Paso 5: Se cierran los obtejos de conexión
    conn->Close();
    return res;
    */
}
List<Player^>^ FootballController::Controller::QueryAllPlayers()
{
    LoadProductsData();
    List<Player^>^ activePlayersList = gcnew List <Player^>();
    for (int i = 0; i < playerList->Count; i++) {
        activePlayersList->Add(playerList[i]);
    }
    return activePlayersList;

    /*
    List<Player^>^ activePlayersList = gcnew List <Player^>();

    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

  //  SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PRODUCT_JOSHUA"
    //            + "WHERE NameTeam LIKE '%" + value + "%'", conn);

    String^ strCmd = "dbo.usp_QueryPlayerByNumber";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar, 250);
    comm->Prepare();
    comm->Parameters["@value"]->Value = DBNull::Value;
    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Player^ p;
    while (reader->Read()) {
        p = gcnew Player();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->Number = Convert::ToInt32(reader["number"]->ToString());
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        // p->footballteams = reader["footballTeams"]->ToString();

        activePlayersList->Add(p);
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();

    return activePlayersList;
    */
}
Player^ FootballController::Controller::QueryPlayerById(int playerId)
{
    for (int i = 0; i < playerList->Count; i++)
        if (playerId == playerList[i]->Id) {
            return playerList[i];
        }
    return nullptr;

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PLAYER AND id=" + playerId, conn);

    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Player^ p;
    if (reader->Read()) {
        p = gcnew Player();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->Number = Convert::ToInt32(reader["number"]->ToString());
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        // p->footballteams = reader["footballTeams"]->ToString();
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();
    return p;
    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

  //  SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
  //                                      + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_AddReferee";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@docNumber", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@surname", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@tournament", System::Data::SqlDbType::VarChar, 250);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();
    comm->Parameters["@docNumber"]->Value = referee->DocNumber;
    comm->Parameters["@name"]->Value = referee->Name;
    comm->Parameters["@surname"]->Value = referee->Surname;
    comm->Parameters["@tournament"]->Value = referee->tournament;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return output_id;
    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
    //                                    + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_UpdateREFEREE";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@docNumber", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@surname", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@tournament", System::Data::SqlDbType::VarChar, 250);

    comm->Prepare();
    comm->Parameters["@docNumber"]->Value = referee->DocNumber;
    comm->Parameters["@name"]->Value = referee->Name;
    comm->Parameters["@surname"]->Value = referee->Surname;
    comm->Parameters["@tournament"]->Value = referee->tournament;


    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return res;
    */
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
    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("UPDATE REFEREE" + "" + "WHERE id = " + refereeId, conn);

    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

  //Paso 5: Se cierran los obtejos de conexión
    conn->Close();
    return res;
    */
}
List<Referee^>^ FootballController::Controller::QueryAllReferees()
{
    LoadRefereesData();
    List<Referee^>^ activeRefereeList = gcnew List<Referee^>();
    for (int i = 0; i < refereeList->Count; i++) {
        activeRefereeList->Add(refereeList[i]);
    }
    return activeRefereeList;

    /*
    List<Referee^>^ activeRefereeList = gcnew List<Referee^>();

    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PRODUCT_JOSHUA"
    //            + "WHERE NameTeam LIKE '%" + value + "%'", conn);

    String^ strCmd = "dbo.usp_QueryDTByDocNumberReferee";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar, 250);
    comm->Prepare();
    comm->Parameters["@value"]->Value = DBNull::Value;
    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Referee^ p;
    while (reader->Read()) {
        p = gcnew Referee();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->DocNumber = reader["docnumber"]->ToString();
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        //p->tournament = reader["tournament"]->ToString();

        activeRefereeList->Add(p);
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();

    return activeRefereeList;
    */
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
    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM REFEREE AND id=" + refereeId, conn);

    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Referee^ p;
    if (reader->Read()) {
        p = gcnew Referee();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->DocNumber = reader["docnumber"]->ToString();
        p->Name = reader["name"]->ToString();
        p->Surname = reader["surname"]->ToString();
        //p->tournament = reader["tournament"]->ToString();
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();
    return p;
    */
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

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
   //                                     + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_AddStadium";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@place", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@direction", System::Data::SqlDbType::VarChar, 250);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();
    comm->Parameters["@name"]->Value = stadium->Name;
    comm->Parameters["@place"]->Value = stadium->Place;
    comm->Parameters["@direction"]->Value = stadium->Direction;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return output_id;
    */
}
int FootballController::Controller::UpdateStadium(Stadium^ stadium)
{
    for (int i = 0; i < stadiumList->Count; i++)
        if (stadium->Id == stadiumList[i]->Id) {
            stadiumList[i] = stadium;
            PersisStadiums();
            return 1;
        }
    return 0;
    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT_JOSHUA"+"VALUES('"+ footballteams->NameTeam
    //                                    + "','" + footballteams->numplayers + "','" + footballteams->numplayers + ")", conn);

    String^ strCmd = "dbo.usp_UpdateSTADIUM";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@place", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@direction", System::Data::SqlDbType::VarChar, 250);

    comm->Prepare();
    comm->Parameters["@name"]->Value = stadium->Name;
    comm->Parameters["@place"]->Value = stadium->Place;
    comm->Parameters["@direction"]->Value = stadium->Direction;


    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

    //Paso 5: Se cierran los obtejos de conexión
    conn->Close();

    return res;
    */
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
    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("UPDATE STADIUM" + "" + "WHERE id = " + stadiumId, conn);

    //Paso 3: Se ejecuta la sentencia
    int res = comm->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados (No aplica)

  //Paso 5: Se cierran los obtejos de conexión
    conn->Close();
    return res;
    */
}
List<Stadium^>^ FootballController::Controller::QueryAllStadium()
{
    LoadStadiumsData();
    List<Stadium^>^ activeStadiumList = gcnew List<Stadium^>();
    for (int i = 0; i < stadiumList->Count; i++) {
        activeStadiumList->Add(stadiumList[i]);
    }
    return activeStadiumList;

    /*
    List<Stadium^>^ activeStadiumList = gcnew List<Stadium^>();

    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia

   // SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PRODUCT_JOSHUA"
    //            + "WHERE NameTeam LIKE '%" + value + "%'", conn);

    String^ strCmd = "dbo.usp_QueryDTByNameStadium";
    SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar, 250);
    comm->Prepare();
    comm->Parameters["@value"]->Value = DBNull::Value;
    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Stadium^ p;
    while (reader->Read()) {
        p = gcnew Stadium();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->Name = reader["name"]->ToString();
        p->Place = reader["place"]->ToString();
        p->Direction = reader["direction"]->ToString();

        activeStadiumList->Add(p);
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();

    return activeStadiumList;
    */
}
Stadium^ FootballController::Controller::QueryStadiumById(int stadiumId)
{
    for (int i = 0; i < stadiumList->Count; i++)
        if (stadiumId == stadiumList[i]->Id) {
            return stadiumList[i];
        }
    return nullptr;

    /*
    //Paso 1: se obtiene la conexion
    SqlConnection^ conn = GetConnection();

    //Paso 2: Se prepara la sentencia
    SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM STADIUM AND id=" + stadiumId, conn);

    //Paso 3: Se ejecuta la sentencia
    SqlDataReader^ reader = comm->ExecuteReader();

    //Paso 4: Se procesan los resultados
    Stadium^ p;
    if (reader->Read()) {
        p = gcnew Stadium();
        p->Id = Convert::ToInt32(reader["id"]->ToString());
        p->Name = reader["name"]->ToString();
        p->Place = reader["place"]->ToString();
        p->Direction = reader["direction"]->ToString();
    }

    //Paso 5: Se cierran los obtejos de conexión
    reader->Close();
    conn->Close();
    return p;
    */
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
        if (a == 1) {
            matchList[i]->date = matchList[i]->date - 1;
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

SqlConnection^ FootballController::Controller::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ connStr = "Server=200.16.7.140;Database=a20172392;User ID=a20172392;Password=kHg8wVXF";
    conn->ConnectionString = connStr;
    conn->Open();
    return conn;
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
