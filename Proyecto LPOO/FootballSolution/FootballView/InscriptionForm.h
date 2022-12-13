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
#include "ComboBoxItem.h"
#include "InscriptionSearchFrom.h"
#include "TeamsForm.h"
#include "TournamentForm.h"

namespace FootballView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FootballController;
	using namespace FootballModel;
	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class  InscriptionForm : public System::Windows::Forms::Form
	{
	public:
		static Organizer^ Organi;
		InscriptionForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InscriptionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ ptbxPlayer;
	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnDeleteReferee;

	private: System::Windows::Forms::Button^ btnUpdateReferee;

	private: System::Windows::Forms::Button^ btmAddReferee;

	private: System::Windows::Forms::DataGridView^ dgvReferee;

	private: System::Windows::Forms::ComboBox^ cmbTournament;


	private: System::Windows::Forms::TextBox^ txtNameReferee;

	private: System::Windows::Forms::TextBox^ txtDocReferee;
	private: System::Windows::Forms::TextBox^ txtSnameReferee;

	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::ComboBox^ cmbPosition;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::DataGridView^ dgvPlayers;


	private: System::Windows::Forms::TextBox^ txtNumber;

	private: System::Windows::Forms::ComboBox^ cbmteam;

	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::TextBox^ txtDocNumber;

	private: System::Windows::Forms::TextBox^ txtSurNames;

	private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::ComboBox^ cmbStadiTour;

private: System::Windows::Forms::DataGridView^ dgvStadium;

private: System::Windows::Forms::Button^ btnDeleteStadium;

private: System::Windows::Forms::Button^ btnUpdateStadium;

private: System::Windows::Forms::Button^ btnAddStadium;

private: System::Windows::Forms::TextBox^ txtPlace;
private: System::Windows::Forms::TextBox^ txtDirection;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


private: System::Windows::Forms::TextBox^ txtNameStadium;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

private: System::Windows::Forms::Button^ btnDelete;

private: System::Windows::Forms::Label^ label17;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ txtplayerId;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ txtrefereeId;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ txtStadiumId;

private: System::Windows::Forms::Label^ label19;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ stadiumId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;

private: System::Windows::Forms::Button^ btn;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ refereeId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ refereeSurname;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::MenuStrip^ menuStrip1;

private: System::Windows::Forms::Button^ btnSearch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ playerId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlayerNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ playerName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ playerSurname;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ playerTeam;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ playerPosition;
private: System::Windows::Forms::ToolStripMenuItem^ modificarInscripciónToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ nuevaInscripciónToolStripMenuItem;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::TextBox^ textdtId;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ buttondtDelete;
private: System::Windows::Forms::Button^ buttondtUpdate;
private: System::Windows::Forms::Button^ buttondtAddDT;

private: System::Windows::Forms::Button^ buttondtFoto;

private: System::Windows::Forms::TextBox^ textdtDoc;
private: System::Windows::Forms::TextBox^ textdtAge;
private: System::Windows::Forms::TextBox^ textdtName;
private: System::Windows::Forms::TextBox^ textdtApellido;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::DataGridView^ dataDT;

private: System::Windows::Forms::TabPage^ tabOrganizer;
private: System::Windows::Forms::Button^ bttAddOr;

private: System::Windows::Forms::DataGridView^ dgvOrga;

private: System::Windows::Forms::Button^ bttDeleteOrga;

private: System::Windows::Forms::Button^ bttUpdateOrga;

private: System::Windows::Forms::Button^ bttAddOrga;

private: System::Windows::Forms::TextBox^ textDocOrga;
private: System::Windows::Forms::TextBox^ textAgeOrga;
private: System::Windows::Forms::TextBox^ textNameOrga;
private: System::Windows::Forms::TextBox^ texSurnaOrga;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textIdOrga;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ txtContraseña;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ txtUsuario;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ txtdtExperience;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Experiencia;



private: System::Windows::Forms::ComboBox^ cmbPosciRefe;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ txtYearExperience;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;




private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;


private: System::Windows::Forms::PictureBox^ pbPhoto;
private: System::Windows::Forms::PictureBox^ ptReferee;
private: System::Windows::Forms::PictureBox^ ptStadium;
private: System::Windows::Forms::PictureBox^ ptbDt;

private: System::Windows::Forms::PictureBox^ ptbOrganizer;
private: System::Windows::Forms::Button^ bttPlayerTeam;
private: System::Windows::Forms::Button^ bttRefeTour;
private: System::Windows::Forms::Button^ bttStadiTour;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ptbxPlayer = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->bttPlayerTeam = (gcnew System::Windows::Forms::Button());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->txtplayerId = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbPosition = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dgvPlayers = (gcnew System::Windows::Forms::DataGridView());
			this->playerId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlayerNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->playerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->playerSurname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->playerTeam = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->playerPosition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->cbmteam = (gcnew System::Windows::Forms::ComboBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDocNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtSurNames = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->bttRefeTour = (gcnew System::Windows::Forms::Button());
			this->ptReferee = (gcnew System::Windows::Forms::PictureBox());
			this->cmbPosciRefe = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->txtYearExperience = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtrefereeId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteReferee = (gcnew System::Windows::Forms::Button());
			this->btnUpdateReferee = (gcnew System::Windows::Forms::Button());
			this->btmAddReferee = (gcnew System::Windows::Forms::Button());
			this->dgvReferee = (gcnew System::Windows::Forms::DataGridView());
			this->refereeId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->refereeSurname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cmbTournament = (gcnew System::Windows::Forms::ComboBox());
			this->txtNameReferee = (gcnew System::Windows::Forms::TextBox());
			this->txtDocReferee = (gcnew System::Windows::Forms::TextBox());
			this->txtSnameReferee = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->bttStadiTour = (gcnew System::Windows::Forms::Button());
			this->ptStadium = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtStadiumId = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbStadiTour = (gcnew System::Windows::Forms::ComboBox());
			this->dgvStadium = (gcnew System::Windows::Forms::DataGridView());
			this->stadiumId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDeleteStadium = (gcnew System::Windows::Forms::Button());
			this->btnUpdateStadium = (gcnew System::Windows::Forms::Button());
			this->btnAddStadium = (gcnew System::Windows::Forms::Button());
			this->txtPlace = (gcnew System::Windows::Forms::TextBox());
			this->txtDirection = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNameStadium = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->ptbDt = (gcnew System::Windows::Forms::PictureBox());
			this->txtdtExperience = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dataDT = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Experiencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttondtDelete = (gcnew System::Windows::Forms::Button());
			this->buttondtUpdate = (gcnew System::Windows::Forms::Button());
			this->buttondtAddDT = (gcnew System::Windows::Forms::Button());
			this->buttondtFoto = (gcnew System::Windows::Forms::Button());
			this->textdtDoc = (gcnew System::Windows::Forms::TextBox());
			this->textdtAge = (gcnew System::Windows::Forms::TextBox());
			this->textdtName = (gcnew System::Windows::Forms::TextBox());
			this->textdtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textdtId = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabOrganizer = (gcnew System::Windows::Forms::TabPage());
			this->ptbOrganizer = (gcnew System::Windows::Forms::PictureBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->bttAddOr = (gcnew System::Windows::Forms::Button());
			this->dgvOrga = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bttDeleteOrga = (gcnew System::Windows::Forms::Button());
			this->bttUpdateOrga = (gcnew System::Windows::Forms::Button());
			this->bttAddOrga = (gcnew System::Windows::Forms::Button());
			this->textDocOrga = (gcnew System::Windows::Forms::TextBox());
			this->textAgeOrga = (gcnew System::Windows::Forms::TextBox());
			this->textNameOrga = (gcnew System::Windows::Forms::TextBox());
			this->texSurnaOrga = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textIdOrga = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nuevaInscripciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarInscripciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ptbxPlayer->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlayers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptReferee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReferee))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptStadium))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStadium))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbDt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataDT))->BeginInit();
			this->tabOrganizer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbOrganizer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrga))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ptbxPlayer
			// 
			this->ptbxPlayer->AccessibleName = L"";
			this->ptbxPlayer->Controls->Add(this->tabPage3);
			this->ptbxPlayer->Controls->Add(this->tabPage1);
			this->ptbxPlayer->Controls->Add(this->tabPage2);
			this->ptbxPlayer->Controls->Add(this->tabPage4);
			this->ptbxPlayer->Controls->Add(this->tabOrganizer);
			this->ptbxPlayer->Location = System::Drawing::Point(12, 34);
			this->ptbxPlayer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ptbxPlayer->Name = L"ptbxPlayer";
			this->ptbxPlayer->SelectedIndex = 0;
			this->ptbxPlayer->Size = System::Drawing::Size(1074, 578);
			this->ptbxPlayer->TabIndex = 4;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->bttPlayerTeam);
			this->tabPage3->Controls->Add(this->btn);
			this->tabPage3->Controls->Add(this->txtplayerId);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->btnDelete);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->cmbPosition);
			this->tabPage3->Controls->Add(this->btnUpdate);
			this->tabPage3->Controls->Add(this->btnAdd);
			this->tabPage3->Controls->Add(this->dgvPlayers);
			this->tabPage3->Controls->Add(this->pbPhoto);
			this->tabPage3->Controls->Add(this->txtNumber);
			this->tabPage3->Controls->Add(this->cbmteam);
			this->tabPage3->Controls->Add(this->txtName);
			this->tabPage3->Controls->Add(this->txtDocNumber);
			this->tabPage3->Controls->Add(this->txtSurNames);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Size = System::Drawing::Size(1066, 549);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Jugadores";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// bttPlayerTeam
			// 
			this->bttPlayerTeam->Location = System::Drawing::Point(350, 208);
			this->bttPlayerTeam->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttPlayerTeam->Name = L"bttPlayerTeam";
			this->bttPlayerTeam->Size = System::Drawing::Size(133, 37);
			this->bttPlayerTeam->TabIndex = 119;
			this->bttPlayerTeam->Text = L"EDITAR EQUIPO";
			this->bttPlayerTeam->UseVisualStyleBackColor = true;
			this->bttPlayerTeam->Click += gcnew System::EventHandler(this, &InscriptionForm::bttPlayerTeam_Click);
			// 
			// btn
			// 
			this->btn->Location = System::Drawing::Point(605, 298);
			this->btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(137, 23);
			this->btn->TabIndex = 116;
			this->btn->Text = L"Agregar Foto";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &InscriptionForm::btn_Click);
			// 
			// txtplayerId
			// 
			this->txtplayerId->Location = System::Drawing::Point(131, 26);
			this->txtplayerId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtplayerId->Name = L"txtplayerId";
			this->txtplayerId->Size = System::Drawing::Size(80, 22);
			this->txtplayerId->TabIndex = 115;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(69, 30);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(18, 16);
			this->label18->TabIndex = 114;
			this->label18->Text = L"Id";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(915, 298);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 23);
			this->btnDelete->TabIndex = 113;
			this->btnDelete->Text = L"ELIMINAR";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &InscriptionForm::btnDelete_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(37, 275);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 16);
			this->label11->TabIndex = 111;
			this->label11->Text = L"Posicion";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(37, 218);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 16);
			this->label10->TabIndex = 110;
			this->label10->Text = L"Equipo";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(37, 171);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 109;
			this->label9->Text = L"Numero";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 16);
			this->label8->TabIndex = 108;
			this->label8->Text = L"Nombres";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 107;
			this->label7->Text = L"Apellidos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(252, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 16);
			this->label6->TabIndex = 106;
			this->label6->Text = L"DNI";
			// 
			// cmbPosition
			// 
			this->cmbPosition->FormattingEnabled = true;
			this->cmbPosition->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Arquero", L"Defensa", L"Volante ", L"Delantero" });
			this->cmbPosition->Location = System::Drawing::Point(126, 267);
			this->cmbPosition->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbPosition->Name = L"cmbPosition";
			this->cmbPosition->Size = System::Drawing::Size(192, 24);
			this->cmbPosition->TabIndex = 101;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(915, 171);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(137, 23);
			this->btnUpdate->TabIndex = 99;
			this->btnUpdate->Text = L"MODIFICAR";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &InscriptionForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(915, 54);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(137, 23);
			this->btnAdd->TabIndex = 98;
			this->btnAdd->Text = L"AGREGAR";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &InscriptionForm::btnAdd_Click);
			// 
			// dgvPlayers
			// 
			this->dgvPlayers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPlayers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->playerId,
					this->PlayerNumber, this->playerName, this->playerSurname, this->playerTeam, this->playerPosition
			});
			this->dgvPlayers->Location = System::Drawing::Point(140, 359);
			this->dgvPlayers->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvPlayers->Name = L"dgvPlayers";
			this->dgvPlayers->RowHeadersWidth = 51;
			this->dgvPlayers->RowTemplate->Height = 24;
			this->dgvPlayers->Size = System::Drawing::Size(813, 150);
			this->dgvPlayers->TabIndex = 97;
			this->dgvPlayers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InscriptionForm::dgvPlayers_CellClick);
			// 
			// playerId
			// 
			this->playerId->HeaderText = L"Id";
			this->playerId->MinimumWidth = 6;
			this->playerId->Name = L"playerId";
			this->playerId->Width = 50;
			// 
			// PlayerNumber
			// 
			this->PlayerNumber->HeaderText = L"Numero";
			this->PlayerNumber->MinimumWidth = 6;
			this->PlayerNumber->Name = L"PlayerNumber";
			this->PlayerNumber->Width = 125;
			// 
			// playerName
			// 
			this->playerName->HeaderText = L"Nombres";
			this->playerName->MinimumWidth = 6;
			this->playerName->Name = L"playerName";
			this->playerName->Width = 150;
			// 
			// playerSurname
			// 
			this->playerSurname->HeaderText = L"Apellidos";
			this->playerSurname->MinimumWidth = 6;
			this->playerSurname->Name = L"playerSurname";
			this->playerSurname->Width = 125;
			// 
			// playerTeam
			// 
			this->playerTeam->HeaderText = L"Equipos";
			this->playerTeam->MinimumWidth = 6;
			this->playerTeam->Name = L"playerTeam";
			this->playerTeam->Width = 150;
			// 
			// playerPosition
			// 
			this->playerPosition->HeaderText = L"Posicion";
			this->playerPosition->MinimumWidth = 6;
			this->playerPosition->Name = L"playerPosition";
			this->playerPosition->Width = 160;
			// 
			// pbPhoto
			// 
			this->pbPhoto->BackColor = System::Drawing::Color::LightGray;
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(517, 76);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(310, 194);
			this->pbPhoto->TabIndex = 96;
			this->pbPhoto->TabStop = false;
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(126, 167);
			this->txtNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(82, 22);
			this->txtNumber->TabIndex = 94;
			// 
			// cbmteam
			// 
			this->cbmteam->FormattingEnabled = true;
			this->cbmteam->Location = System::Drawing::Point(126, 215);
			this->cbmteam->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbmteam->Name = L"cbmteam";
			this->cbmteam->Size = System::Drawing::Size(192, 24);
			this->cbmteam->TabIndex = 92;
			this->cbmteam->SelectedIndexChanged += gcnew System::EventHandler(this, &InscriptionForm::cbmteam_SelectedIndexChanged_1);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(126, 124);
			this->txtName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(217, 22);
			this->txtName->TabIndex = 91;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(308, 26);
			this->txtDocNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(191, 22);
			this->txtDocNumber->TabIndex = 89;
			// 
			// txtSurNames
			// 
			this->txtSurNames->Location = System::Drawing::Point(126, 76);
			this->txtSurNames->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSurNames->Name = L"txtSurNames";
			this->txtSurNames->Size = System::Drawing::Size(217, 22);
			this->txtSurNames->TabIndex = 87;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->bttRefeTour);
			this->tabPage1->Controls->Add(this->ptReferee);
			this->tabPage1->Controls->Add(this->cmbPosciRefe);
			this->tabPage1->Controls->Add(this->label34);
			this->tabPage1->Controls->Add(this->txtYearExperience);
			this->tabPage1->Controls->Add(this->label33);
			this->tabPage1->Controls->Add(this->label32);
			this->tabPage1->Controls->Add(this->btnSearch);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->txtrefereeId);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->btnDeleteReferee);
			this->tabPage1->Controls->Add(this->btnUpdateReferee);
			this->tabPage1->Controls->Add(this->btmAddReferee);
			this->tabPage1->Controls->Add(this->dgvReferee);
			this->tabPage1->Controls->Add(this->cmbTournament);
			this->tabPage1->Controls->Add(this->txtNameReferee);
			this->tabPage1->Controls->Add(this->txtDocReferee);
			this->tabPage1->Controls->Add(this->txtSnameReferee);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1066, 549);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Arbitros";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// bttRefeTour
			// 
			this->bttRefeTour->Location = System::Drawing::Point(375, 258);
			this->bttRefeTour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttRefeTour->Name = L"bttRefeTour";
			this->bttRefeTour->Size = System::Drawing::Size(137, 47);
			this->bttRefeTour->TabIndex = 127;
			this->bttRefeTour->Text = L"EDITAR CAMPEONATO";
			this->bttRefeTour->UseVisualStyleBackColor = true;
			this->bttRefeTour->Click += gcnew System::EventHandler(this, &InscriptionForm::bttRefeTour_Click);
			// 
			// ptReferee
			// 
			this->ptReferee->BackColor = System::Drawing::Color::LightGray;
			this->ptReferee->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ptReferee->Location = System::Drawing::Point(448, 49);
			this->ptReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ptReferee->Name = L"ptReferee";
			this->ptReferee->Size = System::Drawing::Size(310, 194);
			this->ptReferee->TabIndex = 126;
			this->ptReferee->TabStop = false;
			// 
			// cmbPosciRefe
			// 
			this->cmbPosciRefe->FormattingEnabled = true;
			this->cmbPosciRefe->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Lateral", L"Central", L"VAR" });
			this->cmbPosciRefe->Location = System::Drawing::Point(151, 230);
			this->cmbPosciRefe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbPosciRefe->Name = L"cmbPosciRefe";
			this->cmbPosciRefe->Size = System::Drawing::Size(192, 24);
			this->cmbPosciRefe->TabIndex = 125;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(25, 324);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(107, 16);
			this->label34->TabIndex = 124;
			this->label34->Text = L"Year Experience";
			// 
			// txtYearExperience
			// 
			this->txtYearExperience->Location = System::Drawing::Point(151, 324);
			this->txtYearExperience->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtYearExperience->Name = L"txtYearExperience";
			this->txtYearExperience->Size = System::Drawing::Size(80, 22);
			this->txtYearExperience->TabIndex = 123;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(55, 234);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(59, 16);
			this->label33->TabIndex = 122;
			this->label33->Text = L"Posición";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(25, 327);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 16);
			this->label32->TabIndex = 121;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(821, 281);
			this->btnSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(137, 23);
			this->btnSearch->TabIndex = 118;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &InscriptionForm::btnSearch_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(562, 270);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 23);
			this->button1->TabIndex = 117;
			this->button1->Text = L"Agregar Foto";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// txtrefereeId
			// 
			this->txtrefereeId->Location = System::Drawing::Point(151, 30);
			this->txtrefereeId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtrefereeId->Name = L"txtrefereeId";
			this->txtrefereeId->Size = System::Drawing::Size(80, 22);
			this->txtrefereeId->TabIndex = 92;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(99, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 16);
			this->label2->TabIndex = 91;
			this->label2->Text = L"Id";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(24, 281);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 16);
			this->label17->TabIndex = 90;
			this->label17->Text = L"Campeonato";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(53, 187);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 16);
			this->label15->TabIndex = 88;
			this->label15->Text = L"Nombres";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(52, 139);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 16);
			this->label14->TabIndex = 87;
			this->label14->Text = L"Apellidos";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(85, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 16);
			this->label13->TabIndex = 86;
			this->label13->Text = L"DNI";
			// 
			// btnDeleteReferee
			// 
			this->btnDeleteReferee->Location = System::Drawing::Point(821, 206);
			this->btnDeleteReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteReferee->Name = L"btnDeleteReferee";
			this->btnDeleteReferee->Size = System::Drawing::Size(137, 23);
			this->btnDeleteReferee->TabIndex = 84;
			this->btnDeleteReferee->Text = L"ELIMINAR";
			this->btnDeleteReferee->UseVisualStyleBackColor = true;
			this->btnDeleteReferee->Click += gcnew System::EventHandler(this, &InscriptionForm::btnDeleteReferee_Click);
			// 
			// btnUpdateReferee
			// 
			this->btnUpdateReferee->Location = System::Drawing::Point(821, 121);
			this->btnUpdateReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateReferee->Name = L"btnUpdateReferee";
			this->btnUpdateReferee->Size = System::Drawing::Size(137, 23);
			this->btnUpdateReferee->TabIndex = 83;
			this->btnUpdateReferee->Text = L"MODIFICAR";
			this->btnUpdateReferee->UseVisualStyleBackColor = true;
			this->btnUpdateReferee->Click += gcnew System::EventHandler(this, &InscriptionForm::btnUpdateReferee_Click);
			// 
			// btmAddReferee
			// 
			this->btmAddReferee->Location = System::Drawing::Point(821, 37);
			this->btmAddReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmAddReferee->Name = L"btmAddReferee";
			this->btmAddReferee->Size = System::Drawing::Size(137, 23);
			this->btmAddReferee->TabIndex = 82;
			this->btmAddReferee->Text = L"AGREGAR";
			this->btmAddReferee->UseVisualStyleBackColor = true;
			this->btmAddReferee->Click += gcnew System::EventHandler(this, &InscriptionForm::btmAddReferee_Click);
			// 
			// dgvReferee
			// 
			this->dgvReferee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvReferee->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->refereeId,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn2, this->refereeSurname, this->dataGridViewTextBoxColumn3
			});
			this->dgvReferee->Location = System::Drawing::Point(67, 366);
			this->dgvReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvReferee->Name = L"dgvReferee";
			this->dgvReferee->RowHeadersWidth = 51;
			this->dgvReferee->RowTemplate->Height = 24;
			this->dgvReferee->Size = System::Drawing::Size(919, 132);
			this->dgvReferee->TabIndex = 79;
			this->dgvReferee->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InscriptionForm::dgvReferee_CellClick);
			// 
			// refereeId
			// 
			this->refereeId->HeaderText = L"Id";
			this->refereeId->MinimumWidth = 6;
			this->refereeId->Name = L"refereeId";
			this->refereeId->Width = 125;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"DNI";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 90;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 250;
			// 
			// refereeSurname
			// 
			this->refereeSurname->HeaderText = L"Apellidos";
			this->refereeSurname->MinimumWidth = 6;
			this->refereeSurname->Name = L"refereeSurname";
			this->refereeSurname->Width = 250;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Torneos";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// cmbTournament
			// 
			this->cmbTournament->FormattingEnabled = true;
			this->cmbTournament->Location = System::Drawing::Point(151, 278);
			this->cmbTournament->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbTournament->Name = L"cmbTournament";
			this->cmbTournament->Size = System::Drawing::Size(192, 24);
			this->cmbTournament->TabIndex = 78;
			this->cmbTournament->SelectedIndexChanged += gcnew System::EventHandler(this, &InscriptionForm::cmbTournament_SelectedIndexChanged);
			// 
			// txtNameReferee
			// 
			this->txtNameReferee->Location = System::Drawing::Point(151, 181);
			this->txtNameReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameReferee->Name = L"txtNameReferee";
			this->txtNameReferee->Size = System::Drawing::Size(217, 22);
			this->txtNameReferee->TabIndex = 76;
			// 
			// txtDocReferee
			// 
			this->txtDocReferee->Location = System::Drawing::Point(151, 78);
			this->txtDocReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDocReferee->Name = L"txtDocReferee";
			this->txtDocReferee->Size = System::Drawing::Size(100, 22);
			this->txtDocReferee->TabIndex = 74;
			// 
			// txtSnameReferee
			// 
			this->txtSnameReferee->Location = System::Drawing::Point(151, 133);
			this->txtSnameReferee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSnameReferee->Name = L"txtSnameReferee";
			this->txtSnameReferee->Size = System::Drawing::Size(217, 22);
			this->txtSnameReferee->TabIndex = 72;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->bttStadiTour);
			this->tabPage2->Controls->Add(this->ptStadium);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->txtStadiumId);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->cmbStadiTour);
			this->tabPage2->Controls->Add(this->dgvStadium);
			this->tabPage2->Controls->Add(this->btnDeleteStadium);
			this->tabPage2->Controls->Add(this->btnUpdateStadium);
			this->tabPage2->Controls->Add(this->btnAddStadium);
			this->tabPage2->Controls->Add(this->txtPlace);
			this->tabPage2->Controls->Add(this->txtDirection);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->txtNameStadium);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1066, 549);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Estadios";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// bttStadiTour
			// 
			this->bttStadiTour->Location = System::Drawing::Point(354, 221);
			this->bttStadiTour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttStadiTour->Name = L"bttStadiTour";
			this->bttStadiTour->Size = System::Drawing::Size(137, 45);
			this->bttStadiTour->TabIndex = 128;
			this->bttStadiTour->Text = L"EDITAR CAMPEONATO";
			this->bttStadiTour->UseVisualStyleBackColor = true;
			this->bttStadiTour->Click += gcnew System::EventHandler(this, &InscriptionForm::bttStadiTour_Click);
			// 
			// ptStadium
			// 
			this->ptStadium->BackColor = System::Drawing::Color::LightGray;
			this->ptStadium->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ptStadium->Location = System::Drawing::Point(515, 60);
			this->ptStadium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ptStadium->Name = L"ptStadium";
			this->ptStadium->Size = System::Drawing::Size(310, 194);
			this->ptStadium->TabIndex = 127;
			this->ptStadium->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(597, 278);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 117;
			this->button2->Text = L"Agregar Foto";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// txtStadiumId
			// 
			this->txtStadiumId->Location = System::Drawing::Point(115, 46);
			this->txtStadiumId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStadiumId->Name = L"txtStadiumId";
			this->txtStadiumId->Size = System::Drawing::Size(80, 22);
			this->txtStadiumId->TabIndex = 94;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(44, 50);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(18, 16);
			this->label19->TabIndex = 93;
			this->label19->Text = L"Id";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 16);
			this->label5->TabIndex = 88;
			this->label5->Text = L"Campeonato";
			// 
			// cmbStadiTour
			// 
			this->cmbStadiTour->FormattingEnabled = true;
			this->cmbStadiTour->Location = System::Drawing::Point(146, 242);
			this->cmbStadiTour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbStadiTour->Name = L"cmbStadiTour";
			this->cmbStadiTour->Size = System::Drawing::Size(192, 24);
			this->cmbStadiTour->TabIndex = 87;
			this->cmbStadiTour->SelectedIndexChanged += gcnew System::EventHandler(this, &InscriptionForm::cmbStadiTour_SelectedIndexChanged);
			// 
			// dgvStadium
			// 
			this->dgvStadium->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStadium->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->stadiumId,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn7
			});
			this->dgvStadium->Location = System::Drawing::Point(68, 325);
			this->dgvStadium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvStadium->Name = L"dgvStadium";
			this->dgvStadium->RowHeadersWidth = 51;
			this->dgvStadium->RowTemplate->Height = 24;
			this->dgvStadium->Size = System::Drawing::Size(859, 195);
			this->dgvStadium->TabIndex = 86;
			this->dgvStadium->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InscriptionForm::dgvStadium_CellClick);
			// 
			// stadiumId
			// 
			this->stadiumId->HeaderText = L"Id";
			this->stadiumId->MinimumWidth = 6;
			this->stadiumId->Name = L"stadiumId";
			this->stadiumId->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 250;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Lugar";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 150;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Dirección";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 150;
			// 
			// btnDeleteStadium
			// 
			this->btnDeleteStadium->Location = System::Drawing::Point(882, 268);
			this->btnDeleteStadium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteStadium->Name = L"btnDeleteStadium";
			this->btnDeleteStadium->Size = System::Drawing::Size(137, 23);
			this->btnDeleteStadium->TabIndex = 85;
			this->btnDeleteStadium->Text = L"ELIMINAR";
			this->btnDeleteStadium->UseVisualStyleBackColor = true;
			this->btnDeleteStadium->Click += gcnew System::EventHandler(this, &InscriptionForm::btnDeleteStadium_Click);
			// 
			// btnUpdateStadium
			// 
			this->btnUpdateStadium->Location = System::Drawing::Point(882, 162);
			this->btnUpdateStadium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateStadium->Name = L"btnUpdateStadium";
			this->btnUpdateStadium->Size = System::Drawing::Size(137, 23);
			this->btnUpdateStadium->TabIndex = 84;
			this->btnUpdateStadium->Text = L"MODIFICAR";
			this->btnUpdateStadium->UseVisualStyleBackColor = true;
			this->btnUpdateStadium->Click += gcnew System::EventHandler(this, &InscriptionForm::btnUpdateStadium_Click);
			// 
			// btnAddStadium
			// 
			this->btnAddStadium->Location = System::Drawing::Point(882, 60);
			this->btnAddStadium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddStadium->Name = L"btnAddStadium";
			this->btnAddStadium->Size = System::Drawing::Size(137, 23);
			this->btnAddStadium->TabIndex = 83;
			this->btnAddStadium->Text = L"AGREGAR";
			this->btnAddStadium->UseVisualStyleBackColor = true;
			this->btnAddStadium->Click += gcnew System::EventHandler(this, &InscriptionForm::btnAddStadium_Click);
			// 
			// txtPlace
			// 
			this->txtPlace->Location = System::Drawing::Point(115, 144);
			this->txtPlace->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPlace->Name = L"txtPlace";
			this->txtPlace->Size = System::Drawing::Size(217, 22);
			this->txtPlace->TabIndex = 82;
			// 
			// txtDirection
			// 
			this->txtDirection->Location = System::Drawing::Point(115, 192);
			this->txtDirection->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDirection->Name = L"txtDirection";
			this->txtDirection->Size = System::Drawing::Size(217, 22);
			this->txtDirection->TabIndex = 81;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 80;
			this->label4->Text = L"Lugar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 79;
			this->label3->Text = L"Direccion";
			// 
			// txtNameStadium
			// 
			this->txtNameStadium->Location = System::Drawing::Point(115, 91);
			this->txtNameStadium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameStadium->Name = L"txtNameStadium";
			this->txtNameStadium->Size = System::Drawing::Size(217, 22);
			this->txtNameStadium->TabIndex = 77;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 76;
			this->label1->Text = L"Nombre";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->ptbDt);
			this->tabPage4->Controls->Add(this->txtdtExperience);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->dataDT);
			this->tabPage4->Controls->Add(this->buttondtDelete);
			this->tabPage4->Controls->Add(this->buttondtUpdate);
			this->tabPage4->Controls->Add(this->buttondtAddDT);
			this->tabPage4->Controls->Add(this->buttondtFoto);
			this->tabPage4->Controls->Add(this->textdtDoc);
			this->tabPage4->Controls->Add(this->textdtAge);
			this->tabPage4->Controls->Add(this->textdtName);
			this->tabPage4->Controls->Add(this->textdtApellido);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->textdtId);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(4);
			this->tabPage4->Size = System::Drawing::Size(1066, 549);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"DT";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// ptbDt
			// 
			this->ptbDt->BackColor = System::Drawing::Color::LightGray;
			this->ptbDt->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ptbDt->Location = System::Drawing::Point(429, 50);
			this->ptbDt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ptbDt->Name = L"ptbDt";
			this->ptbDt->Size = System::Drawing::Size(310, 194);
			this->ptbDt->TabIndex = 128;
			this->ptbDt->TabStop = false;
			// 
			// txtdtExperience
			// 
			this->txtdtExperience->Location = System::Drawing::Point(165, 245);
			this->txtdtExperience->Margin = System::Windows::Forms::Padding(4);
			this->txtdtExperience->Name = L"txtdtExperience";
			this->txtdtExperience->Size = System::Drawing::Size(132, 22);
			this->txtdtExperience->TabIndex = 124;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(66, 247);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(78, 16);
			this->label23->TabIndex = 123;
			this->label23->Text = L"Experiencia";
			// 
			// dataDT
			// 
			this->dataDT->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataDT->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn4,
					this->Edad, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->Experiencia
			});
			this->dataDT->Location = System::Drawing::Point(93, 332);
			this->dataDT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataDT->Name = L"dataDT";
			this->dataDT->RowHeadersWidth = 51;
			this->dataDT->RowTemplate->Height = 24;
			this->dataDT->Size = System::Drawing::Size(813, 150);
			this->dataDT->TabIndex = 122;
			this->dataDT->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InscriptionForm::dataDT_CellClick);
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Documento";
			this->Edad->MinimumWidth = 8;
			this->Edad->Name = L"Edad";
			this->Edad->Width = 150;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 150;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Apellidos";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// Experiencia
			// 
			this->Experiencia->HeaderText = L"Experiencia";
			this->Experiencia->MinimumWidth = 8;
			this->Experiencia->Name = L"Experiencia";
			this->Experiencia->Width = 150;
			// 
			// buttondtDelete
			// 
			this->buttondtDelete->Location = System::Drawing::Point(860, 242);
			this->buttondtDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttondtDelete->Name = L"buttondtDelete";
			this->buttondtDelete->Size = System::Drawing::Size(137, 23);
			this->buttondtDelete->TabIndex = 121;
			this->buttondtDelete->Text = L"ELIMINAR";
			this->buttondtDelete->UseVisualStyleBackColor = true;
			this->buttondtDelete->Click += gcnew System::EventHandler(this, &InscriptionForm::buttondtDelete_Click);
			// 
			// buttondtUpdate
			// 
			this->buttondtUpdate->Location = System::Drawing::Point(860, 135);
			this->buttondtUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttondtUpdate->Name = L"buttondtUpdate";
			this->buttondtUpdate->Size = System::Drawing::Size(137, 23);
			this->buttondtUpdate->TabIndex = 120;
			this->buttondtUpdate->Text = L"MODIFICAR";
			this->buttondtUpdate->UseVisualStyleBackColor = true;
			this->buttondtUpdate->Click += gcnew System::EventHandler(this, &InscriptionForm::buttondtUpdate_Click);
			// 
			// buttondtAddDT
			// 
			this->buttondtAddDT->Location = System::Drawing::Point(860, 34);
			this->buttondtAddDT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttondtAddDT->Name = L"buttondtAddDT";
			this->buttondtAddDT->Size = System::Drawing::Size(137, 23);
			this->buttondtAddDT->TabIndex = 119;
			this->buttondtAddDT->Text = L"AGREGAR";
			this->buttondtAddDT->UseVisualStyleBackColor = true;
			this->buttondtAddDT->Click += gcnew System::EventHandler(this, &InscriptionForm::buttondtAddDT_Click);
			// 
			// buttondtFoto
			// 
			this->buttondtFoto->Location = System::Drawing::Point(462, 262);
			this->buttondtFoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttondtFoto->Name = L"buttondtFoto";
			this->buttondtFoto->Size = System::Drawing::Size(137, 23);
			this->buttondtFoto->TabIndex = 118;
			this->buttondtFoto->Text = L"Agregar Foto";
			this->buttondtFoto->UseVisualStyleBackColor = true;
			this->buttondtFoto->Click += gcnew System::EventHandler(this, &InscriptionForm::buttondtFoto_Click);
			// 
			// textdtDoc
			// 
			this->textdtDoc->Location = System::Drawing::Point(165, 206);
			this->textdtDoc->Margin = System::Windows::Forms::Padding(4);
			this->textdtDoc->Name = L"textdtDoc";
			this->textdtDoc->Size = System::Drawing::Size(132, 22);
			this->textdtDoc->TabIndex = 9;
			// 
			// textdtAge
			// 
			this->textdtAge->Location = System::Drawing::Point(165, 174);
			this->textdtAge->Margin = System::Windows::Forms::Padding(4);
			this->textdtAge->Name = L"textdtAge";
			this->textdtAge->Size = System::Drawing::Size(132, 22);
			this->textdtAge->TabIndex = 8;
			// 
			// textdtName
			// 
			this->textdtName->Location = System::Drawing::Point(165, 134);
			this->textdtName->Margin = System::Windows::Forms::Padding(4);
			this->textdtName->Name = L"textdtName";
			this->textdtName->Size = System::Drawing::Size(132, 22);
			this->textdtName->TabIndex = 7;
			// 
			// textdtApellido
			// 
			this->textdtApellido->Location = System::Drawing::Point(165, 94);
			this->textdtApellido->Margin = System::Windows::Forms::Padding(4);
			this->textdtApellido->Name = L"textdtApellido";
			this->textdtApellido->Size = System::Drawing::Size(132, 22);
			this->textdtApellido->TabIndex = 6;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(66, 212);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(76, 16);
			this->label22->TabIndex = 5;
			this->label22->Text = L"Documento";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(66, 174);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 16);
			this->label21->TabIndex = 4;
			this->label21->Text = L"Edad";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(66, 138);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(56, 16);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Nombre";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(66, 98);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 16);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Apellido";
			// 
			// textdtId
			// 
			this->textdtId->Location = System::Drawing::Point(165, 50);
			this->textdtId->Margin = System::Windows::Forms::Padding(4);
			this->textdtId->Name = L"textdtId";
			this->textdtId->Size = System::Drawing::Size(132, 22);
			this->textdtId->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(66, 52);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Id";
			// 
			// tabOrganizer
			// 
			this->tabOrganizer->Controls->Add(this->ptbOrganizer);
			this->tabOrganizer->Controls->Add(this->txtContraseña);
			this->tabOrganizer->Controls->Add(this->label30);
			this->tabOrganizer->Controls->Add(this->txtUsuario);
			this->tabOrganizer->Controls->Add(this->label29);
			this->tabOrganizer->Controls->Add(this->bttAddOr);
			this->tabOrganizer->Controls->Add(this->dgvOrga);
			this->tabOrganizer->Controls->Add(this->bttDeleteOrga);
			this->tabOrganizer->Controls->Add(this->bttUpdateOrga);
			this->tabOrganizer->Controls->Add(this->bttAddOrga);
			this->tabOrganizer->Controls->Add(this->textDocOrga);
			this->tabOrganizer->Controls->Add(this->textAgeOrga);
			this->tabOrganizer->Controls->Add(this->textNameOrga);
			this->tabOrganizer->Controls->Add(this->texSurnaOrga);
			this->tabOrganizer->Controls->Add(this->label24);
			this->tabOrganizer->Controls->Add(this->label25);
			this->tabOrganizer->Controls->Add(this->label26);
			this->tabOrganizer->Controls->Add(this->label27);
			this->tabOrganizer->Controls->Add(this->textIdOrga);
			this->tabOrganizer->Controls->Add(this->label28);
			this->tabOrganizer->Location = System::Drawing::Point(4, 25);
			this->tabOrganizer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabOrganizer->Name = L"tabOrganizer";
			this->tabOrganizer->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabOrganizer->Size = System::Drawing::Size(1066, 549);
			this->tabOrganizer->TabIndex = 4;
			this->tabOrganizer->Text = L"Organizer";
			this->tabOrganizer->UseVisualStyleBackColor = true;
			// 
			// ptbOrganizer
			// 
			this->ptbOrganizer->BackColor = System::Drawing::Color::LightGray;
			this->ptbOrganizer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ptbOrganizer->Location = System::Drawing::Point(429, 68);
			this->ptbOrganizer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ptbOrganizer->Name = L"ptbOrganizer";
			this->ptbOrganizer->Size = System::Drawing::Size(310, 194);
			this->ptbOrganizer->TabIndex = 144;
			this->ptbOrganizer->TabStop = false;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(167, 297);
			this->txtContraseña->Margin = System::Windows::Forms::Padding(4);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(132, 22);
			this->txtContraseña->TabIndex = 142;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(68, 297);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(76, 16);
			this->label30->TabIndex = 141;
			this->label30->Text = L"Contraseña";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(167, 263);
			this->txtUsuario->Margin = System::Windows::Forms::Padding(4);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(132, 22);
			this->txtUsuario->TabIndex = 140;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(68, 263);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(54, 16);
			this->label29->TabIndex = 139;
			this->label29->Text = L"Usuario";
			// 
			// bttAddOr
			// 
			this->bttAddOr->Location = System::Drawing::Point(477, 290);
			this->bttAddOr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttAddOr->Name = L"bttAddOr";
			this->bttAddOr->Size = System::Drawing::Size(137, 23);
			this->bttAddOr->TabIndex = 138;
			this->bttAddOr->Text = L"Agregar Foto";
			this->bttAddOr->UseVisualStyleBackColor = true;
			this->bttAddOr->Click += gcnew System::EventHandler(this, &InscriptionForm::bttAddOr_Click);
			// 
			// dgvOrga
			// 
			this->dgvOrga->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrga->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->Column1
			});
			this->dgvOrga->Location = System::Drawing::Point(94, 350);
			this->dgvOrga->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvOrga->Name = L"dgvOrga";
			this->dgvOrga->RowHeadersWidth = 51;
			this->dgvOrga->RowTemplate->Height = 24;
			this->dgvOrga->Size = System::Drawing::Size(813, 150);
			this->dgvOrga->TabIndex = 136;
			this->dgvOrga->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InscriptionForm::dgvOrga_CellClick);
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 50;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"DNI";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 150;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 150;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Apellidos";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Username";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// bttDeleteOrga
			// 
			this->bttDeleteOrga->Location = System::Drawing::Point(862, 260);
			this->bttDeleteOrga->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttDeleteOrga->Name = L"bttDeleteOrga";
			this->bttDeleteOrga->Size = System::Drawing::Size(137, 23);
			this->bttDeleteOrga->TabIndex = 135;
			this->bttDeleteOrga->Text = L"ELIMINAR";
			this->bttDeleteOrga->UseVisualStyleBackColor = true;
			this->bttDeleteOrga->Click += gcnew System::EventHandler(this, &InscriptionForm::bttDeleteOrga_Click);
			// 
			// bttUpdateOrga
			// 
			this->bttUpdateOrga->Location = System::Drawing::Point(862, 154);
			this->bttUpdateOrga->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttUpdateOrga->Name = L"bttUpdateOrga";
			this->bttUpdateOrga->Size = System::Drawing::Size(137, 23);
			this->bttUpdateOrga->TabIndex = 134;
			this->bttUpdateOrga->Text = L"MODIFICAR";
			this->bttUpdateOrga->UseVisualStyleBackColor = true;
			this->bttUpdateOrga->Click += gcnew System::EventHandler(this, &InscriptionForm::bttUpdateOrga_Click);
			// 
			// bttAddOrga
			// 
			this->bttAddOrga->Location = System::Drawing::Point(862, 52);
			this->bttAddOrga->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttAddOrga->Name = L"bttAddOrga";
			this->bttAddOrga->Size = System::Drawing::Size(137, 23);
			this->bttAddOrga->TabIndex = 133;
			this->bttAddOrga->Text = L"AGREGAR";
			this->bttAddOrga->UseVisualStyleBackColor = true;
			this->bttAddOrga->Click += gcnew System::EventHandler(this, &InscriptionForm::bttAddOrga_Click);
			// 
			// textDocOrga
			// 
			this->textDocOrga->Location = System::Drawing::Point(167, 226);
			this->textDocOrga->Margin = System::Windows::Forms::Padding(4);
			this->textDocOrga->Name = L"textDocOrga";
			this->textDocOrga->Size = System::Drawing::Size(132, 22);
			this->textDocOrga->TabIndex = 132;
			// 
			// textAgeOrga
			// 
			this->textAgeOrga->Location = System::Drawing::Point(167, 194);
			this->textAgeOrga->Margin = System::Windows::Forms::Padding(4);
			this->textAgeOrga->Name = L"textAgeOrga";
			this->textAgeOrga->Size = System::Drawing::Size(132, 22);
			this->textAgeOrga->TabIndex = 131;
			// 
			// textNameOrga
			// 
			this->textNameOrga->Location = System::Drawing::Point(167, 153);
			this->textNameOrga->Margin = System::Windows::Forms::Padding(4);
			this->textNameOrga->Name = L"textNameOrga";
			this->textNameOrga->Size = System::Drawing::Size(132, 22);
			this->textNameOrga->TabIndex = 130;
			// 
			// texSurnaOrga
			// 
			this->texSurnaOrga->Location = System::Drawing::Point(167, 112);
			this->texSurnaOrga->Margin = System::Windows::Forms::Padding(4);
			this->texSurnaOrga->Name = L"texSurnaOrga";
			this->texSurnaOrga->Size = System::Drawing::Size(132, 22);
			this->texSurnaOrga->TabIndex = 129;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(68, 230);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(76, 16);
			this->label24->TabIndex = 128;
			this->label24->Text = L"Documento";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(68, 194);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(40, 16);
			this->label25->TabIndex = 127;
			this->label25->Text = L"Edad";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(68, 156);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(56, 16);
			this->label26->TabIndex = 126;
			this->label26->Text = L"Nombre";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(68, 116);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(57, 16);
			this->label27->TabIndex = 125;
			this->label27->Text = L"Apellido";
			// 
			// textIdOrga
			// 
			this->textIdOrga->Location = System::Drawing::Point(167, 68);
			this->textIdOrga->Margin = System::Windows::Forms::Padding(4);
			this->textIdOrga->Name = L"textIdOrga";
			this->textIdOrga->Size = System::Drawing::Size(132, 22);
			this->textIdOrga->TabIndex = 124;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(68, 70);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(18, 16);
			this->label28->TabIndex = 123;
			this->label28->Text = L"Id";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevaInscripciónToolStripMenuItem,
					this->modificarInscripciónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1091, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nuevaInscripciónToolStripMenuItem
			// 
			this->nuevaInscripciónToolStripMenuItem->Name = L"nuevaInscripciónToolStripMenuItem";
			this->nuevaInscripciónToolStripMenuItem->Size = System::Drawing::Size(140, 24);
			this->nuevaInscripciónToolStripMenuItem->Text = L"Nueva inscripción";
			this->nuevaInscripciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &InscriptionForm::nuevaInscripciónToolStripMenuItem_Click);
			// 
			// modificarInscripciónToolStripMenuItem
			// 
			this->modificarInscripciónToolStripMenuItem->Name = L"modificarInscripciónToolStripMenuItem";
			this->modificarInscripciónToolStripMenuItem->Size = System::Drawing::Size(166, 24);
			this->modificarInscripciónToolStripMenuItem->Text = L"Modificar inscripción ";
			this->modificarInscripciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &InscriptionForm::modificarInscripciónToolStripMenuItem_Click);
			// 
			// InscriptionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 599);
			this->Controls->Add(this->ptbxPlayer);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"InscriptionForm";
			this->Text = L"Inscripciones ";
			this->Load += gcnew System::EventHandler(this, &InscriptionForm::InscriptionForm_Load);
			this->ptbxPlayer->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlayers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptReferee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReferee))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptStadium))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStadium))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbDt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataDT))->EndInit();
			this->tabOrganizer->ResumeLayout(false);
			this->tabOrganizer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbOrganizer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrga))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
//Métodos implementados
//Actualizar datos

//ActualizaTodoElForm
private: System::Void InscriptionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	 
	Desactivartodo();
	RefreshDt();
	ClearDT();

	ClearControlsOrganizer();
	RefreshOrganizer();

	RefreshPlayer();
	Fillcbmteam();
	Dato();

	RefreshRefereesDGV();
	FillcmbTournament();
	Dato4();

	 ClearControlsPlayer();
	 ClearReferee();
	 
	 RefreshStadiumsDGV();
	 ClearControls3();
	 Dato2();
	 FillcmbStadiTour();
 }
void Desactivartodo() {
		   bttPlayerTeam->Enabled = false;
		   bttRefeTour->Enabled = false;
		   bttStadiTour->Enabled = false;
		   txtYearExperience->Enabled = false;
		   btnAdd->Enabled = false;
		   btnAddStadium->Enabled = false;
		   btmAddReferee->Enabled = false;
		   btnDeleteReferee->Enabled = false;
		   btnDeleteStadium->Enabled = false;
		   btnUpdateReferee->Enabled = false;
		   btnUpdateStadium->Enabled = false;
		   btnUpdate->Enabled = false;
		   btnDelete->Enabled = false;
		   bttAddOrga->Enabled = false;
		   bttUpdateOrga->Enabled = false;
		   bttDeleteOrga->Enabled = false;
		   buttondtAddDT->Enabled = false;
		   buttondtUpdate->Enabled = false;
		   buttondtDelete->Enabled = false;
		   cbmteam->Enabled = false;
		   cmbPosition->Enabled = false;
		   cmbPosciRefe->Enabled = false;
		   cmbTournament->Enabled = false;
		   cmbStadiTour->Enabled = false;

		   txtName->Enabled = false;
		   txtNumber->Enabled = false;
		   txtplayerId->Enabled = false;
		   txtDocNumber->Enabled = false;
		   txtSurNames->Enabled = false;
		   txtrefereeId->Enabled = false;
		   txtDocReferee->Enabled = false;
		   txtSnameReferee->Enabled = false;
		   txtNameReferee->Enabled = false;
		   txtStadiumId->Enabled = false;
		   txtNameStadium->Enabled = false;
		   txtPlace->Enabled = false;
		   txtDirection->Enabled = false;
		   textdtId->Enabled = false;
		   textdtDoc->Enabled = false;
		   textdtName->Enabled = false;
		   textdtApellido->Enabled = false;
		   textdtAge->Enabled = false;
		   txtdtExperience->Enabled = false;
		   textIdOrga->Enabled = false;
		   textDocOrga->Enabled = false;
		   textNameOrga->Enabled = false;
		   texSurnaOrga->Enabled = false;
		   txtUsuario->Enabled = false;
		   txtContraseña->Enabled = false;
		   textAgeOrga->Enabled = false;
	   }

//Jugadores
public: void RefreshPlayer() {
			List<Player^>^ playerList = Controller::QueryAllPlayers();
			dgvPlayers->Rows->Clear();
			for (int i = 0; i < playerList->Count; i++) {
				dgvPlayers->Rows->Add(gcnew array<String^>{
					"" + playerList[i]->Id,
					"" + playerList[i]->Number,
						playerList[i]->Name,
						playerList[i]->Surname,
						playerList[i]->footballteams->NameTeam,
				});
			}
		}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtplayerId->Text != "" && txtDocNumber->Text != "" && txtName->Text != "" && txtSurNames->Text != "" &&
		txtNumber->Text != "" && cmbPosition->Text != "" && cbmteam->Text != "") {
		Footballteams^ f = Dato();
		Player^ p = gcnew Player();
		p->Id = Int32::Parse(txtplayerId->Text);
		p->DocNumber = txtDocNumber->Text;
		p->Name = txtName->Text;
		p->Surname = txtSurNames->Text;
		p->footballteams = f;
		p->Number = Int32::Parse(txtNumber->Text);
		p->Position = cmbPosition->Text;
		Controller::AddPlayer(p);
		RefreshPlayer();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
		}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtplayerId->Text != "" && txtDocNumber->Text != "" && txtName->Text != "" && txtSurNames->Text != "" &&
		txtNumber->Text != "" && cmbPosition->Text != "" && cbmteam->Text != "") {
		Footballteams^ f = Dato();
		Player^ p = gcnew Player();
		p->Id = Int32::Parse(txtplayerId->Text);
		p->DocNumber = txtDocNumber->Text;
		p->Name = txtName->Text;
		p->Surname = txtSurNames->Text;
		p->footballteams = f;
		p->Number = Int32::Parse(txtNumber->Text);
		p->Position = cmbPosition->Text;
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			p->Photo = ms->ToArray();
		}
		Controller::UpdatePlayer(p);
		RefreshPlayer();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtplayerId->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			int playerId = Int32::Parse(txtplayerId->Text);
			Controller::DeletePlayer(playerId);
			RefreshPlayer();
			ClearControlsPlayer();
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			MessageBox::Show("No se borro ningun dato");
		}

	}
	else {
		MessageBox::Show("Ingresa al menos el ID del organizador a borrar");
	}

}
private: System::Void dgvPlayers_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvPlayers->CurrentCell != nullptr &&
			dgvPlayers->CurrentCell->Value != nullptr &&
			dgvPlayers->CurrentCell->Value->ToString() != "") {
			int selectedRowIndex = dgvPlayers->SelectedCells[0]->RowIndex;
			int playerId = Int32::Parse(dgvPlayers->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
			Player^ p = Controller::QueryPlayerById(playerId);
			txtplayerId->Text = "" + p->Id;
			txtNumber->Text = "" + p->Number;
			txtDocNumber->Text = p->DocNumber;
			txtName->Text = p->Name;
			txtSurNames->Text = p->Surname;
			cbmteam->Text =p->footballteams->NameTeam;
			cmbPosition->Text= p->Position;
			if (p->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
				pbPhoto->Image = Image::FromStream(ms);
			}
			else {
				pbPhoto->Image = nullptr;
				pbPhoto->Invalidate();
			}
		}
}
void FillCmbPositions() {
			cmbPosition->Items->Clear();
			List <String^>^ positionList;
			positionList->Add("Delantero");
			positionList->Add("Volante");
			positionList->Add("Defensa");
			positionList->Add("Arquero");
			positionList->Add("Exterior");
			for (int i = 0; i < positionList->Count; i++) {
				cmbPosition->Items->Add(positionList[i]);
			}	
}
private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
void ClearControlsPlayer() {
		   txtplayerId->Clear();
		   txtNumber->Clear();
		   txtDocNumber->Clear();
		   txtSurNames->Clear();
		   txtName->Clear();
		   pbPhoto->Image = nullptr;
		   cbmteam->Text = "";
	   }
private: System::Void bttPlayerTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	TeamsForm^ TeamsForms = gcnew TeamsForm();
	TeamsForms->ShowDialog();
	InscriptionForm_Load(sender, e);
}
//Actualizar datos
void Fillcbmteam() {
	cbmteam->Items->Clear();
		   List <Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
		   for (int i = 0; i < footballteamsList->Count; i++) {
			   cbmteam->Items->Add(footballteamsList[i]->NameTeam);
		   }
		   Dato();
	   }
Footballteams^ Dato() {
	Footballteams^ t = gcnew Footballteams();
		   t = nullptr;
		   if (cbmteam->SelectedIndex >= 0) {
			   List <Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
			   t = footballteamsList[cbmteam->SelectedIndex];
			   return t;
		   }
		   else {
			   return t;
		   }
	   }
private: System::Void cbmteam_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	Dato();
}
//---------------------------------------------------------------------------------------------------------------------

//Organizer
public: void RefreshOrganizer() {
	List<Organizer^>^ OrganizerList = Controller::QueryAllOrganizer();
	dgvOrga->Rows->Clear();
	for (int i = 0; i < OrganizerList->Count; i++) {
		dgvOrga->Rows->Add(gcnew array<String^>{
			"" + OrganizerList[i]->Id,
				OrganizerList[i]->DocNumber,
				OrganizerList[i]->Name,
				OrganizerList[i]->Surname,
				OrganizerList[i]->Username
		});
	}
}
void ClearControlsOrganizer() {
		  textIdOrga->Clear();
		  textDocOrga->Clear();
		  textNameOrga->Clear();
		  texSurnaOrga->Clear();
		  txtUsuario->Clear();
		  txtContraseña->Clear();
		  textAgeOrga->Clear();
		  ptbOrganizer->Image = nullptr;
}
private: System::Void bttAddOrga_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textIdOrga->Text != "" && textDocOrga->Text != "" && textNameOrga->Text != "" && texSurnaOrga->Text != "" && 
			txtUsuario->Text != "" && txtContraseña->Text != "" && textAgeOrga->Text != "") {
		Organizer^ o = gcnew Organizer();
		o->Id = Int32::Parse(textIdOrga->Text);
		o->DocNumber = textDocOrga->Text;
		o->Name = textNameOrga->Text;
		o->Surname = texSurnaOrga->Text;
		o->Username = txtUsuario->Text;
		o->Password = txtContraseña->Text;
		o->Age = Int32::Parse(textAgeOrga->Text);
		if (ptbOrganizer != nullptr && ptbOrganizer->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			ptbOrganizer->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			o->Photo = ms->ToArray();
		}
		Controller::AddOrganizer(o);
		RefreshOrganizer();
		ClearControlsOrganizer();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void bttUpdateOrga_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textIdOrga->Text != "" && textDocOrga->Text != "" && textNameOrga->Text != "" && texSurnaOrga->Text != "" &&
		txtUsuario->Text != "" && txtContraseña->Text != "" && textAgeOrga->Text != "") {
		Organizer^ o = gcnew Organizer();
		o->Id = Int32::Parse(textIdOrga->Text);
		o->DocNumber = textDocOrga->Text;
		o->Name = textNameOrga->Text;
		o->Surname = texSurnaOrga->Text;
		o->Username = txtUsuario->Text;
		o->Password = txtContraseña->Text;
		o->Age = Int32::Parse(textAgeOrga->Text);
		if (ptbOrganizer != nullptr && ptbOrganizer->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			ptbOrganizer->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			o->Photo = ms->ToArray();
		}
		Controller::UpdateOrganizer(o);
		RefreshOrganizer();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
	
}
private: System::Void bttDeleteOrga_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textIdOrga->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			int organizerId = Int32::Parse(textIdOrga->Text);
			Controller::DeleteOrganizer(organizerId);
			RefreshOrganizer();
			ClearControlsOrganizer();
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			MessageBox::Show("No se borro ningun dato");
		}

	}
	else {
		MessageBox::Show("Ingresa al menos el ID del organizador a borrar");
	}
}
private: System::Void dgvOrga_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvOrga->CurrentCell != nullptr &&
		dgvOrga->CurrentCell->Value != nullptr &&
		dgvOrga->CurrentCell->Value->ToString() != "") {
		int selectedRowIndexO = dgvOrga->SelectedCells[0]->RowIndex;
		int organizerId = Int32::Parse(dgvOrga->Rows[selectedRowIndexO]->Cells[0]->Value->ToString());
		Organizer^ o = Controller::QueryOrganizerById(organizerId);
		textIdOrga->Text = ""+o->Id;
		textDocOrga->Text = o->DocNumber;
		textNameOrga->Text = o->Name;
		texSurnaOrga->Text = o->Surname;
		txtUsuario->Text = o->Username;
		txtContraseña->Text= o->Password;
		textAgeOrga->Text = "" + o->Age;
		if (o->Photo != nullptr) {
			System::IO::MemoryStream^ ms1 = gcnew System::IO::MemoryStream(o->Photo);
			ptbOrganizer->Image = Image::FromStream(ms1);
		}
		else {
			ptbOrganizer->Image = nullptr;
			ptbOrganizer->Invalidate();
		}
	}
}
private: System::Void bttAddOr_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		ptbOrganizer->Image = gcnew Bitmap(opnfd->FileName);
	}
}
//----------------------------------------------------------------------------------------------------------------------------------------

//DT
public: void RefreshDt() {
		   List<DT^>^ DtList = Controller::QueryAllDt();
		   dataDT->Rows->Clear();
		   for (int i = 0; i < DtList->Count; i++) {
			   dataDT->Rows->Add(gcnew array<String^>{
				   "" + DtList[i]->Id,
					   DtList[i]->DocNumber,
					   DtList[i]->Name,
					   DtList[i]->Surname,
				   "" + DtList[i]->Experience,
			   });
		   }
}
void ClearDT() {
		   textdtId->Clear();
		   textdtDoc->Clear();
		   textdtName->Clear();
		   textdtApellido->Clear();
		   textdtAge->Clear();
		   txtdtExperience->Clear();
		   pbPhoto->Image = nullptr;
}
private: System::Void buttondtAddDT_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textdtId->Text != "" && textdtDoc->Text != "" && textdtName->Text != "" && textdtApellido->Text != "" &&
		textdtAge->Text != "" && txtdtExperience->Text != "") {
		DT^ d = gcnew DT();
		d->Id = Int32::Parse(textdtId->Text);
		d->DocNumber = textdtDoc->Text;
		d->Name = textdtName->Text;
		d->Surname = textdtApellido->Text;
		d->Age = Int32::Parse(textdtAge->Text);
		d->Experience = Int32::Parse(txtdtExperience->Text);
		if (ptbDt != nullptr && ptbDt->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			ptbDt->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			d->Photo = ms->ToArray();
		}
		Controller::AddDT(d);
		RefreshDt();
		ClearDT();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void buttondtUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textdtId->Text != "" && textdtDoc->Text != "" && textdtName->Text != "" && textdtApellido->Text != "" &&
		textdtAge->Text != "" && txtdtExperience->Text != "") {
		DT^ d = gcnew DT();
		d->Id = Int32::Parse(textdtId->Text);
		d->DocNumber = textdtDoc->Text;
		d->Name = textdtName->Text;
		d->Surname = textdtApellido->Text;
		d->Age = Int32::Parse(textdtAge->Text);
		d->Experience = Int32::Parse(txtdtExperience->Text);
		if (ptbDt != nullptr && ptbDt->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			ptbDt->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			d->Photo = ms->ToArray();
		}
		Controller::UpdateDt(d);
		RefreshDt();
		ClearDT();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
	
}
private: System::Void buttondtDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textdtId->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			int DtId = Int32::Parse(textdtId->Text);
			Controller::DeleteDt(DtId);
			RefreshDt();
			ClearDT();
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			MessageBox::Show("No se borro ningun dato");
		}

	}
	else {
		MessageBox::Show("Ingresa al menos el ID del entrenador a borrar");
	}
}
private: System::Void dataDT_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataDT->CurrentCell != nullptr &&
		dataDT->CurrentCell->Value != nullptr &&
		dataDT->CurrentCell->Value->ToString() != "") {
		int selectedRowIndexO = dataDT->SelectedCells[0]->RowIndex;
		int dtId = Int32::Parse(dataDT->Rows[selectedRowIndexO]->Cells[0]->Value->ToString());
		DT^ o = Controller::QueryDtById(dtId);
		textdtId->Text = "" + o->Id;
		textdtDoc->Text = o->DocNumber;
		textdtName->Text = o->Name;
		textdtApellido->Text = o->Surname;
		textdtAge->Text = "" + o->Age;
		txtdtExperience->Text = "" + o->Experience;
		if (o->Photo != nullptr) {
			System::IO::MemoryStream^ ms1 = gcnew System::IO::MemoryStream(o->Photo);
			ptbDt->Image = Image::FromStream(ms1);
		}
		else {
			ptbDt->Image = nullptr;
			ptbDt->Invalidate();
		}
	}
}
private: System::Void buttondtFoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
//----------------------------------------------------------------------------------------------------------------------------------------

//Referee
void ClearReferee() {
		   txtrefereeId->Clear();
		   txtDocReferee->Clear();
		   txtNameReferee->Clear();
		   txtSnameReferee->Clear();
		   cmbTournament->Text = "";
	   }
public:Void RefreshRefereesDGV() {
	List <Referee^>^ refereeList = Controller::QueryAllReferees();
	dgvReferee->Rows->Clear();
	for (int i = 0; i < refereeList->Count; i++) {
		dgvReferee->Rows->Add(gcnew array<String^> {
			"" + refereeList[i]->Id,
				refereeList[i]->DocNumber,
				refereeList[i]->Name,
				refereeList[i]->Surname,
				refereeList[i]->Position,
				refereeList[i]->tournament->NameTournament,
		});

	}
	return Void();
}
private: System::Void btmAddReferee_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbPosciRefe->Text != "" && cmbTournament->Text != "" && txtYearExperience->Text != "" && txtNameReferee->Text != "" &&
		txtSnameReferee->Text != "" && txtDocReferee->Text != "" && txtrefereeId->Text != "") {
		Tournament^ t = Dato4();
		Referee^ r = gcnew Referee();
		r->Id = Int32::Parse(txtrefereeId->Text);
		r->DocNumber = txtDocReferee->Text;
		r->Name = txtNameReferee->Text;
		r->Surname = txtSnameReferee->Text;
		r->tournament = t;
		r->Position = cmbPosciRefe->Text;
		r->yearexp = Int32::Parse(txtYearExperience->Text);
		Controller::AddReferee(r);
		RefreshRefereesDGV();
		ClearReferee();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnUpdateReferee_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbPosciRefe->Text != "" && cmbTournament->Text != "" && txtYearExperience->Text != "" && txtNameReferee->Text != "" &&
		txtSnameReferee->Text != "" && txtDocReferee->Text != "" && txtrefereeId->Text != "") {
		Tournament^ t = Dato4();
		Referee^ r = gcnew Referee();
		r->Id = Int32::Parse(txtrefereeId->Text);
		r->DocNumber = txtDocReferee->Text;
		r->Name = txtNameReferee->Text;
		r->Surname = txtSnameReferee->Text;
		r->tournament = t;
		r->Position = cmbPosciRefe->Text;
		r->yearexp = Int32::Parse(txtYearExperience->Text);
		Controller::UpdateReferee(r);
		RefreshRefereesDGV();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
	
}
private: System::Void btnDeleteReferee_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtrefereeId->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			int refereeId = Int32::Parse(txtrefereeId->Text);
			Controller::DeleteReferee(refereeId);
			RefreshRefereesDGV();
			ClearReferee();
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			MessageBox::Show("No se borro ningun dato");
		}

	}
	else {
		MessageBox::Show("Ingresa al menos el ID del arbitro a borrar");
	}
}
private: System::Void dgvReferee_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvReferee->CurrentCell != nullptr &&
		dgvReferee->CurrentCell->Value != nullptr &&
		dgvReferee->CurrentCell->Value->ToString() != "") {
		int selectedRowIndex = dgvReferee->SelectedCells[0]->RowIndex;
		int refereeId = Int32::Parse(dgvReferee->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Referee^ r = Controller::QueryRefereeById(refereeId);
		txtrefereeId->Text = "" + r->Id;
		txtDocReferee->Text = r->DocNumber;
		txtNameReferee->Text = r->Name;
		txtSnameReferee->Text = r->Surname;
		cmbTournament->Text = "" + r->tournament->NameTournament;
		txtYearExperience->Text = "" + r->yearexp;
		cmbPosciRefe->Text= r->Position;
	}
}
void FillcmbPosciRefe() {
		   cmbPosition->Items->Clear();
		   List <String^>^ positionList;
		   positionList->Add("Delantero");
		   positionList->Add("Volante");
		   positionList->Add("Defensa");
		   positionList->Add("Arquero");
		   positionList->Add("Exterior");
		   for (int i = 0; i < positionList->Count; i++) {
			   cmbPosition->Items->Add(positionList[i]);
		   }
}
private: System::Void bttRefeTour_Click(System::Object^ sender, System::EventArgs^ e) {
	TournamentForm^ tournamentForms = gcnew TournamentForm();
	TournamentForm::Organ = Organi;
	tournamentForms->ShowDialog();
	InscriptionForm_Load(sender, e);
}
 //Actualizar datos
void FillcmbTournament() {
		   cmbTournament->Items->Clear();
		   List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		   for (int i = 0; i < tournamentList->Count; i++) {
			   cmbTournament->Items->Add(tournamentList[i]->NameTournament);
		   }
		   Dato4();
	   }
Tournament^ Dato4() {
		   Tournament^ t = gcnew Tournament();
		   t = nullptr;
		   if (cmbTournament->SelectedIndex >= 0) {
			   List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
			   t = tournamentList[cmbTournament->SelectedIndex];
			   return t;
		   }
		   else {
			   return t;
		   }
	   }
private: System::Void cmbTournament_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Dato4();
}
//----------------------------------------------------------------------------------------------------------------------------------------

//Stadium
void ClearControls3() {
		txtStadiumId->Clear();
		txtNameStadium->Clear();
		txtPlace->Clear();
		txtDirection->Clear();
		cmbStadiTour->Text = "";
	}
public:Void RefreshStadiumsDGV() {
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
private: System::Void btnAddStadium_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtStadiumId->Text != "" && txtNameStadium->Text != "" && txtPlace->Text != "" && txtDirection->Text != "" &&
		cmbStadiTour->Text != "") {
		Stadium^ s = gcnew Stadium();
		s->Id = Int32::Parse(txtStadiumId->Text);
		s->Name = txtNameStadium->Text;
		s->Place = txtPlace->Text;
		s->Direction = txtDirection->Text;
		s->tournament = Dato2();
		Controller::AddStadium(s);
		RefreshStadiumsDGV();
		ClearControls3();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnUpdateStadium_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtStadiumId->Text != "" && txtNameStadium->Text != "" && txtPlace->Text != "" && txtDirection->Text != "" &&
		cmbStadiTour->Text != "") {
		Tournament^ r = Dato2();
		Stadium^ s = gcnew Stadium();
		s->Id = Int32::Parse(txtStadiumId->Text);
		s->Name = txtNameStadium->Text;
		s->Place = txtPlace->Text;
		s->Direction = txtDirection->Text;
		s->tournament = r;
		Controller::UpdateStadium(s);
		RefreshStadiumsDGV();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
	
}
private: System::Void btnDeleteStadium_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtStadiumId->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			int stadiumId = Int32::Parse(txtStadiumId->Text);
			Controller::DeleteStadium(stadiumId);
			RefreshStadiumsDGV();
			ClearControls3();
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			MessageBox::Show("No se borro ningun dato");
		}

	}
	else {
		MessageBox::Show("Ingresa al menos el ID del estadio a borrar");
	}
}
private: System::Void dgvStadium_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvStadium->CurrentCell != nullptr &&
		dgvStadium->CurrentCell->Value != nullptr &&
		dgvStadium->CurrentCell->Value->ToString() != "") {
		int selectedRowIndex = dgvStadium->SelectedCells[0]->RowIndex;
		int stadiumId = Int32::Parse(dgvStadium->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Stadium^ s = Controller::QueryStadiumById(stadiumId);
		txtStadiumId->Text = "" + s->Id;
		txtNameStadium->Text = "" + s->Name;
		txtPlace->Text = "" + s->Place;
		txtDirection->Text = s->Direction;
		cmbStadiTour->Text = "" + s->tournament->NameTournament;
	}	
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	InscriptionSearchFrom^ inscriptionSearchFrom = gcnew InscriptionSearchFrom();
	inscriptionSearchFrom->ShowDialog();
}
private: System::Void bttStadiTour_Click(System::Object^ sender, System::EventArgs^ e) {
		   TournamentForm^ tournamentForms = gcnew TournamentForm();
		   TournamentForm::Organ = Organi;
		   tournamentForms->ShowDialog();
		   InscriptionForm_Load(sender, e);
	   }
 //Actualizar datos
void FillcmbStadiTour() {
	cmbStadiTour->Items->Clear();
		   List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		   for (int i = 0; i < tournamentList->Count; i++) {
			   cmbStadiTour->Items->Add(tournamentList[i]->NameTournament);
		   }
		   Dato2();
	   }
Tournament^ Dato2() {
		   Tournament^ t = gcnew Tournament();
		   t = nullptr;
		   if (cmbStadiTour->SelectedIndex >= 0) {
			   List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
			   t = tournamentList[cmbStadiTour->SelectedIndex];
			   return t;
		   }
		   else {
			   return t;
		   }
	   }
private: System::Void cmbStadiTour_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Dato2();
}
	   //----------------------------------------------------------------------------------------------------------------------------------------

private: System::Void modificarInscripciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsPlayer();
	ClearReferee();
	ClearControls3();
	ClearControlsOrganizer();
	ClearDT();
	Fillcbmteam();
	Fillcbmteam();
	FillcmbTournament();
	FillcmbStadiTour();
	txtYearExperience->Enabled = true;
	txtName->Enabled = true;
	txtNumber->Enabled = true;
	txtplayerId->Enabled = true;
	txtDocNumber->Enabled = true;
	txtSurNames->Enabled = true;
	txtrefereeId->Enabled = true;
	txtDocReferee->Enabled = true;
	txtSnameReferee->Enabled = true;
	txtNameReferee->Enabled = true;
	txtStadiumId->Enabled = true;
	txtNameStadium->Enabled = true;
	txtPlace->Enabled = true;
	txtDirection->Enabled = true;
	textdtId->Enabled = true;
	textdtDoc->Enabled = true;
	textdtName->Enabled = true;
	textdtApellido->Enabled = true;
	textdtAge->Enabled = true;
	txtdtExperience->Enabled = true;
	textIdOrga->Enabled = true;
	textDocOrga->Enabled = true;
	textNameOrga->Enabled = true;
	texSurnaOrga->Enabled = true;
	txtUsuario->Enabled = true;
	txtContraseña->Enabled = true;
	textAgeOrga->Enabled = true;
	btnAdd->Enabled = false;
	btnAddStadium->Enabled = false;
	btmAddReferee->Enabled = false;
	btnDeleteReferee->Enabled = true;
	btnDeleteStadium->Enabled = true;
	btnUpdateReferee->Enabled = true;
	btnUpdateStadium->Enabled = true;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
	bttAddOrga->Enabled = false;
	bttUpdateOrga->Enabled = true;
	bttDeleteOrga->Enabled = true;
	buttondtAddDT->Enabled = false;
	btnUpdateReferee->Enabled = true;
	btnDeleteReferee->Enabled = true;
	cbmteam->Enabled = true;
	cmbPosition->Enabled = true;
	cmbPosciRefe->Enabled = true;
	cmbTournament->Enabled = true;
	cmbStadiTour->Enabled = true;
}
private: System::Void nuevaInscripciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsOrganizer();
	ClearDT();
	ClearControlsPlayer();
	ClearReferee();
	ClearControls3();
	Fillcbmteam();
	Fillcbmteam();
	FillcmbTournament();
	FillcmbStadiTour();
	bttPlayerTeam->Enabled = true;
	bttRefeTour->Enabled = true;
	bttStadiTour->Enabled = true;
	cmbPosition->Enabled = true;
	cmbPosciRefe->Enabled = true;
	cmbTournament->Enabled = true;
	cmbStadiTour->Enabled = true;
	btnAdd->Enabled = true;
	btnAddStadium->Enabled = true;
	btmAddReferee->Enabled = true;
	btnDeleteReferee->Enabled = false;
	btnDeleteStadium->Enabled = false;
	btnUpdateReferee->Enabled = false;
	btnUpdateStadium->Enabled = false;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
	bttAddOrga->Enabled = true;
	bttUpdateOrga->Enabled = false;
	bttDeleteOrga->Enabled = false;
	buttondtAddDT->Enabled = true;
	btnUpdateReferee->Enabled = false;
	btnDeleteReferee->Enabled = false;
	cbmteam->Enabled = true;
	txtName->Enabled = true;
	txtNumber->Enabled = true;
	txtplayerId->Enabled = true;
	txtDocNumber->Enabled = true;
	txtSurNames->Enabled = true;
	txtrefereeId->Enabled = true;
	txtDocReferee->Enabled = true;
	txtSnameReferee->Enabled = true;
	txtNameReferee->Enabled = true;
	txtStadiumId->Enabled = true;
	txtNameStadium->Enabled = true;
	txtPlace->Enabled = true;
	txtDirection->Enabled = true;
	textdtId->Enabled = true;
	textdtDoc->Enabled = true;
	textdtName->Enabled = true;
	textdtApellido->Enabled = true;
	textdtAge->Enabled = true;
	txtdtExperience->Enabled = true;
	textIdOrga->Enabled = true;
	textDocOrga->Enabled = true;
	textNameOrga->Enabled = true;
	texSurnaOrga->Enabled = true;
	txtUsuario->Enabled = true;
	txtContraseña->Enabled = true;
	textAgeOrga->Enabled = true;
	txtYearExperience->Enabled = true;
}


//Fin Métodos



};
}
