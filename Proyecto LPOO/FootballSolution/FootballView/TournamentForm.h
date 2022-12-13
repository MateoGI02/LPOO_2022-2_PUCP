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
#include "TeamsForm.h"

namespace FootballView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FootballModel;
	using namespace FootballController;
	using namespace System::Collections::Generic;
	using namespace Threading;


	/// <summary>
	/// Resumen de TournamentForm
	/// </summary>
	public ref class TournamentForm : public System::Windows::Forms::Form
	{
	public:
		static Organizer^ Organ;
		TournamentForm(void)
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
		~TournamentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::ComboBox^ cmbxTournaSearch;

	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Button^ btnBuscar;


	private: System::Windows::Forms::TabPage^ tabPage5;


	private: System::Windows::Forms::Label^ label25;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::PictureBox^ ptTournament;
	private: System::Windows::Forms::TextBox^ txtTournament;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ btnDeleteTournament;
	private: System::Windows::Forms::Button^ btnUpdateTournament;
	private: System::Windows::Forms::Button^ btnAddTournament;
	private: System::Windows::Forms::DataGridView^ dgvTournament;
	private: System::Windows::Forms::TextBox^ txtPremioOrganizer;
	private: System::Windows::Forms::Button^ btnTournament;
	private: System::Windows::Forms::TextBox^ txtTournamentId;
	private: System::Windows::Forms::Label^ label28;






	private: System::Windows::Forms::DateTimePicker^ dtpEnddate;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::DateTimePicker^ dtpInidate;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::DataGridView^ dgvTourSear;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ComboBox^ cmbHora;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ cmbPartiStadium;

	private: System::Windows::Forms::ComboBox^ cmbParReferee;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DateTimePicker^ dtpInidateResult;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnDeleteDate;
	private: System::Windows::Forms::Button^ btnUpdateDate;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cmbTeamLocal;
	private: System::Windows::Forms::ComboBox^ cmbTeamVisita;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFecha;

	private: System::Windows::Forms::DataGridView^ dgvDate;





	private: System::Windows::Forms::ComboBox^ cmbEquiSearch;

	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::TextBox^ txtNameOrganizer;

	private: System::Windows::Forms::TextBox^ txtCamNum;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdTournament;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameOrganizer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SurnameOrganizer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;






private: System::Windows::Forms::Button^ bttEquiSear;


private: System::Windows::Forms::TextBox^ txtSearTeams;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ txtOrgaSearch;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ txtSearPremio;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ txtDTNameSea;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ bbtAddTeamTourna;
private: System::Windows::Forms::ComboBox^ cmbTourPartido;



private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ bttTourPartido;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoCampeonatoToolStripMenuItem;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoCampeonatoToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ modificarCampeonatoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ buscarEquiposPorCampeonatoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ agregarPartidoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ modificarPartidoToolStripMenuItem;







private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TimeLine;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TeamVisitante;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Referee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stadium;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

private: System::ComponentModel::IContainer^ components;










	protected:
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->txtCamNum = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dtpEnddate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->dtpInidate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtTournamentId = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnTournament = (gcnew System::Windows::Forms::Button());
			this->btnDeleteTournament = (gcnew System::Windows::Forms::Button());
			this->btnUpdateTournament = (gcnew System::Windows::Forms::Button());
			this->btnAddTournament = (gcnew System::Windows::Forms::Button());
			this->dgvTournament = (gcnew System::Windows::Forms::DataGridView());
			this->IdTournament = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameOrganizer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SurnameOrganizer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtPremioOrganizer = (gcnew System::Windows::Forms::TextBox());
			this->txtNameOrganizer = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->ptTournament = (gcnew System::Windows::Forms::PictureBox());
			this->txtTournament = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->bbtAddTeamTourna = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtDTNameSea = (gcnew System::Windows::Forms::TextBox());
			this->txtSearTeams = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtOrgaSearch = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSearPremio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bttEquiSear = (gcnew System::Windows::Forms::Button());
			this->dgvTourSear = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->cmbEquiSearch = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->cmbxTournaSearch = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->bttTourPartido = (gcnew System::Windows::Forms::Button());
			this->cmbTourPartido = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->cmbHora = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cmbPartiStadium = (gcnew System::Windows::Forms::ComboBox());
			this->cmbParReferee = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dtpInidateResult = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteDate = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDate = (gcnew System::Windows::Forms::Button());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cmbTeamLocal = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTeamVisita = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->dgvDate = (gcnew System::Windows::Forms::DataGridView());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimeLine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TeamVisitante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Referee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stadium = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nuevoCampeonatoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nuevoCampeonatoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarCampeonatoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarEquiposPorCampeonatoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarPartidoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarPartidoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTournament))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptTournament))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTourSear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDate))->BeginInit();
			this->contextMenuStrip2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleName = L"";
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(9, 26);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(843, 448);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->txtCamNum);
			this->tabPage5->Controls->Add(this->label1);
			this->tabPage5->Controls->Add(this->dtpEnddate);
			this->tabPage5->Controls->Add(this->label30);
			this->tabPage5->Controls->Add(this->dtpInidate);
			this->tabPage5->Controls->Add(this->label29);
			this->tabPage5->Controls->Add(this->txtTournamentId);
			this->tabPage5->Controls->Add(this->label28);
			this->tabPage5->Controls->Add(this->btnTournament);
			this->tabPage5->Controls->Add(this->btnDeleteTournament);
			this->tabPage5->Controls->Add(this->btnUpdateTournament);
			this->tabPage5->Controls->Add(this->btnAddTournament);
			this->tabPage5->Controls->Add(this->dgvTournament);
			this->tabPage5->Controls->Add(this->txtPremioOrganizer);
			this->tabPage5->Controls->Add(this->txtNameOrganizer);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->ptTournament);
			this->tabPage5->Controls->Add(this->txtTournament);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage5->Size = System::Drawing::Size(835, 422);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"Creacion de Campeonatos";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// txtCamNum
			// 
			this->txtCamNum->Location = System::Drawing::Point(398, 192);
			this->txtCamNum->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtCamNum->Name = L"txtCamNum";
			this->txtCamNum->Size = System::Drawing::Size(146, 20);
			this->txtCamNum->TabIndex = 138;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(334, 193);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 137;
			this->label1->Text = L"Equipos";
			// 
			// dtpEnddate
			// 
			this->dtpEnddate->Location = System::Drawing::Point(398, 151);
			this->dtpEnddate->Name = L"dtpEnddate";
			this->dtpEnddate->Size = System::Drawing::Size(200, 20);
			this->dtpEnddate->TabIndex = 135;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(334, 151);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(62, 13);
			this->label30->TabIndex = 134;
			this->label30->Text = L"Fecha Final";
			// 
			// dtpInidate
			// 
			this->dtpInidate->Location = System::Drawing::Point(398, 111);
			this->dtpInidate->Name = L"dtpInidate";
			this->dtpInidate->Size = System::Drawing::Size(200, 20);
			this->dtpInidate->TabIndex = 133;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(334, 111);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(65, 13);
			this->label29->TabIndex = 132;
			this->label29->Text = L"Fecha Inicio";
			// 
			// txtTournamentId
			// 
			this->txtTournamentId->Location = System::Drawing::Point(134, 111);
			this->txtTournamentId->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtTournamentId->Name = L"txtTournamentId";
			this->txtTournamentId->Size = System::Drawing::Size(146, 20);
			this->txtTournamentId->TabIndex = 131;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(67, 111);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(16, 13);
			this->label28->TabIndex = 130;
			this->label28->Text = L"Id";
			// 
			// btnTournament
			// 
			this->btnTournament->Location = System::Drawing::Point(694, 244);
			this->btnTournament->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnTournament->Name = L"btnTournament";
			this->btnTournament->Size = System::Drawing::Size(103, 32);
			this->btnTournament->TabIndex = 129;
			this->btnTournament->Text = L"Agregar Foto";
			this->btnTournament->UseVisualStyleBackColor = true;
			// 
			// btnDeleteTournament
			// 
			this->btnDeleteTournament->Location = System::Drawing::Point(407, 257);
			this->btnDeleteTournament->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnDeleteTournament->Name = L"btnDeleteTournament";
			this->btnDeleteTournament->Size = System::Drawing::Size(103, 19);
			this->btnDeleteTournament->TabIndex = 128;
			this->btnDeleteTournament->Text = L"ELIMINAR";
			this->btnDeleteTournament->UseVisualStyleBackColor = true;
			this->btnDeleteTournament->Click += gcnew System::EventHandler(this, &TournamentForm::btnDeleteTournament_Click);
			// 
			// btnUpdateTournament
			// 
			this->btnUpdateTournament->Location = System::Drawing::Point(259, 257);
			this->btnUpdateTournament->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnUpdateTournament->Name = L"btnUpdateTournament";
			this->btnUpdateTournament->Size = System::Drawing::Size(103, 19);
			this->btnUpdateTournament->TabIndex = 127;
			this->btnUpdateTournament->Text = L"MODIFICAR";
			this->btnUpdateTournament->UseVisualStyleBackColor = true;
			this->btnUpdateTournament->Click += gcnew System::EventHandler(this, &TournamentForm::btnUpdateTournament_Click);
			// 
			// btnAddTournament
			// 
			this->btnAddTournament->Location = System::Drawing::Point(110, 257);
			this->btnAddTournament->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnAddTournament->Name = L"btnAddTournament";
			this->btnAddTournament->Size = System::Drawing::Size(103, 19);
			this->btnAddTournament->TabIndex = 126;
			this->btnAddTournament->Text = L"AGREGAR";
			this->btnAddTournament->UseVisualStyleBackColor = true;
			this->btnAddTournament->Click += gcnew System::EventHandler(this, &TournamentForm::btnAddTournament_Click);
			// 
			// dgvTournament
			// 
			this->dgvTournament->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTournament->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->IdTournament,
					this->dataGridViewTextBoxColumn1, this->NameOrganizer, this->SurnameOrganizer, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn5
			});
			this->dgvTournament->Location = System::Drawing::Point(17, 304);
			this->dgvTournament->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dgvTournament->Name = L"dgvTournament";
			this->dgvTournament->RowHeadersWidth = 51;
			this->dgvTournament->RowTemplate->Height = 24;
			this->dgvTournament->Size = System::Drawing::Size(791, 122);
			this->dgvTournament->TabIndex = 125;
			this->dgvTournament->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TournamentForm::dgvTournament_CellClick);
			// 
			// IdTournament
			// 
			this->IdTournament->HeaderText = L"Id";
			this->IdTournament->MinimumWidth = 6;
			this->IdTournament->Name = L"IdTournament";
			this->IdTournament->Width = 50;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Campeonato";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 180;
			// 
			// NameOrganizer
			// 
			this->NameOrganizer->HeaderText = L"IDOrgani";
			this->NameOrganizer->MinimumWidth = 6;
			this->NameOrganizer->Name = L"NameOrganizer";
			this->NameOrganizer->Width = 200;
			// 
			// SurnameOrganizer
			// 
			this->SurnameOrganizer->HeaderText = L"NombreOrgani";
			this->SurnameOrganizer->MinimumWidth = 6;
			this->SurnameOrganizer->Name = L"SurnameOrganizer";
			this->SurnameOrganizer->Width = 200;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Premios";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 150;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"#Teams";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 175;
			// 
			// txtPremioOrganizer
			// 
			this->txtPremioOrganizer->Location = System::Drawing::Point(127, 149);
			this->txtPremioOrganizer->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtPremioOrganizer->Name = L"txtPremioOrganizer";
			this->txtPremioOrganizer->Size = System::Drawing::Size(140, 20);
			this->txtPremioOrganizer->TabIndex = 124;
			// 
			// txtNameOrganizer
			// 
			this->txtNameOrganizer->AcceptsReturn = true;
			this->txtNameOrganizer->Location = System::Drawing::Point(163, 200);
			this->txtNameOrganizer->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtNameOrganizer->Name = L"txtNameOrganizer";
			this->txtNameOrganizer->ReadOnly = true;
			this->txtNameOrganizer->Size = System::Drawing::Size(104, 20);
			this->txtNameOrganizer->TabIndex = 119;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(46, 204);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(103, 13);
			this->label25->TabIndex = 116;
			this->label25->Text = L"Usuario Organizador";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(62, 151);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(39, 13);
			this->label23->TabIndex = 114;
			this->label23->Text = L"Premio";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(14, 88);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(67, 13);
			this->label22->TabIndex = 113;
			this->label22->Text = L"Organizador ";
			// 
			// ptTournament
			// 
			this->ptTournament->BackColor = System::Drawing::Color::LightGray;
			this->ptTournament->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ptTournament->Location = System::Drawing::Point(651, 29);
			this->ptTournament->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->ptTournament->Name = L"ptTournament";
			this->ptTournament->Size = System::Drawing::Size(186, 191);
			this->ptTournament->TabIndex = 112;
			this->ptTournament->TabStop = false;
			// 
			// txtTournament
			// 
			this->txtTournament->Location = System::Drawing::Point(147, 29);
			this->txtTournament->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtTournament->Name = L"txtTournament";
			this->txtTournament->Size = System::Drawing::Size(234, 20);
			this->txtTournament->TabIndex = 111;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(38, 32);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(82, 13);
			this->label21->TabIndex = 89;
			this->label21->Text = L"CAMPEONATO";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->bbtAddTeamTourna);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->txtDTNameSea);
			this->tabPage4->Controls->Add(this->txtSearTeams);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->txtOrgaSearch);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->txtSearPremio);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->bttEquiSear);
			this->tabPage4->Controls->Add(this->dgvTourSear);
			this->tabPage4->Controls->Add(this->pictureBox1);
			this->tabPage4->Controls->Add(this->btnBuscar);
			this->tabPage4->Controls->Add(this->cmbEquiSearch);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->cmbxTournaSearch);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage4->Size = System::Drawing::Size(835, 422);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Equipos por Campeonato";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// bbtAddTeamTourna
			// 
			this->bbtAddTeamTourna->Location = System::Drawing::Point(164, 329);
			this->bbtAddTeamTourna->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->bbtAddTeamTourna->Name = L"bbtAddTeamTourna";
			this->bbtAddTeamTourna->Size = System::Drawing::Size(103, 19);
			this->bbtAddTeamTourna->TabIndex = 142;
			this->bbtAddTeamTourna->Text = L"AGREGAR";
			this->bbtAddTeamTourna->UseVisualStyleBackColor = true;
			this->bbtAddTeamTourna->Click += gcnew System::EventHandler(this, &TournamentForm::bbtAddTeamTourna_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(42, 277);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 13);
			this->label14->TabIndex = 141;
			this->label14->Text = L"Nombre (DT)";
			// 
			// txtDTNameSea
			// 
			this->txtDTNameSea->AcceptsReturn = true;
			this->txtDTNameSea->Location = System::Drawing::Point(122, 272);
			this->txtDTNameSea->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtDTNameSea->Name = L"txtDTNameSea";
			this->txtDTNameSea->ReadOnly = true;
			this->txtDTNameSea->Size = System::Drawing::Size(146, 20);
			this->txtDTNameSea->TabIndex = 140;
			// 
			// txtSearTeams
			// 
			this->txtSearTeams->AcceptsReturn = true;
			this->txtSearTeams->Location = System::Drawing::Point(603, 125);
			this->txtSearTeams->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtSearTeams->Name = L"txtSearTeams";
			this->txtSearTeams->ReadOnly = true;
			this->txtSearTeams->Size = System::Drawing::Size(99, 20);
			this->txtSearTeams->TabIndex = 139;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(540, 128);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 138;
			this->label7->Text = L"Equipos";
			// 
			// txtOrgaSearch
			// 
			this->txtOrgaSearch->AcceptsReturn = true;
			this->txtOrgaSearch->Location = System::Drawing::Point(406, 166);
			this->txtOrgaSearch->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtOrgaSearch->Name = L"txtOrgaSearch";
			this->txtOrgaSearch->ReadOnly = true;
			this->txtOrgaSearch->Size = System::Drawing::Size(135, 20);
			this->txtOrgaSearch->TabIndex = 128;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(286, 166);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 13);
			this->label6->TabIndex = 127;
			this->label6->Text = L"Nombre Organizador";
			// 
			// txtSearPremio
			// 
			this->txtSearPremio->AcceptsReturn = true;
			this->txtSearPremio->Location = System::Drawing::Point(406, 123);
			this->txtSearPremio->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtSearPremio->Name = L"txtSearPremio";
			this->txtSearPremio->ReadOnly = true;
			this->txtSearPremio->Size = System::Drawing::Size(99, 20);
			this->txtSearPremio->TabIndex = 126;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(286, 128);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 125;
			this->label5->Text = L"Premio";
			// 
			// bttEquiSear
			// 
			this->bttEquiSear->Location = System::Drawing::Point(25, 329);
			this->bttEquiSear->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->bttEquiSear->Name = L"bttEquiSear";
			this->bttEquiSear->Size = System::Drawing::Size(103, 19);
			this->bttEquiSear->TabIndex = 121;
			this->bttEquiSear->Text = L"BUSCAR";
			this->bttEquiSear->UseVisualStyleBackColor = true;
			this->bttEquiSear->Click += gcnew System::EventHandler(this, &TournamentForm::bttEquiSear_Click);
			// 
			// dgvTourSear
			// 
			this->dgvTourSear->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTourSear->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn4, this->Column1
			});
			this->dgvTourSear->Location = System::Drawing::Point(306, 210);
			this->dgvTourSear->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dgvTourSear->Name = L"dgvTourSear";
			this->dgvTourSear->RowHeadersWidth = 51;
			this->dgvTourSear->RowTemplate->Height = 24;
			this->dgvTourSear->Size = System::Drawing::Size(506, 165);
			this->dgvTourSear->TabIndex = 115;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Equipo";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 175;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"DT";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Jugadores";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox1->Location = System::Drawing::Point(131, 63);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(110, 115);
			this->pictureBox1->TabIndex = 114;
			this->pictureBox1->TabStop = false;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(598, 166);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(103, 19);
			this->btnBuscar->TabIndex = 96;
			this->btnBuscar->Text = L"BUSCAR";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &TournamentForm::btnBuscar_Click);
			// 
			// cmbEquiSearch
			// 
			this->cmbEquiSearch->FormattingEnabled = true;
			this->cmbEquiSearch->Location = System::Drawing::Point(122, 224);
			this->cmbEquiSearch->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbEquiSearch->Name = L"cmbEquiSearch";
			this->cmbEquiSearch->Size = System::Drawing::Size(145, 21);
			this->cmbEquiSearch->TabIndex = 95;
			this->cmbEquiSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &TournamentForm::cmbEquiSearch_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(42, 224);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 13);
			this->label19->TabIndex = 94;
			this->label19->Text = L"Equipo";
			// 
			// cmbxTournaSearch
			// 
			this->cmbxTournaSearch->FormattingEnabled = true;
			this->cmbxTournaSearch->Location = System::Drawing::Point(406, 79);
			this->cmbxTournaSearch->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbxTournaSearch->Name = L"cmbxTournaSearch";
			this->cmbxTournaSearch->Size = System::Drawing::Size(177, 21);
			this->cmbxTournaSearch->TabIndex = 89;
			this->cmbxTournaSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &TournamentForm::cmbxTournaSearch_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(286, 85);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 13);
			this->label17->TabIndex = 88;
			this->label17->Text = L"CAMPEONATO";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->bttTourPartido);
			this->tabPage1->Controls->Add(this->cmbTourPartido);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->cmbHora);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->cmbPartiStadium);
			this->tabPage1->Controls->Add(this->cmbParReferee);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->dtpInidateResult);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->btnDeleteDate);
			this->tabPage1->Controls->Add(this->btnUpdateDate);
			this->tabPage1->Controls->Add(this->btnagregar);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->cmbTeamLocal);
			this->tabPage1->Controls->Add(this->cmbTeamVisita);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->txtFecha);
			this->tabPage1->Controls->Add(this->dgvDate);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage1->Size = System::Drawing::Size(835, 422);
			this->tabPage1->TabIndex = 6;
			this->tabPage1->Text = L"Fecha de Partidos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// bttTourPartido
			// 
			this->bttTourPartido->Location = System::Drawing::Point(421, 20);
			this->bttTourPartido->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->bttTourPartido->Name = L"bttTourPartido";
			this->bttTourPartido->Size = System::Drawing::Size(189, 19);
			this->bttTourPartido->TabIndex = 162;
			this->bttTourPartido->Text = L"SELECCIONAR CAMPEONATO";
			this->bttTourPartido->UseVisualStyleBackColor = true;
			this->bttTourPartido->Click += gcnew System::EventHandler(this, &TournamentForm::bttTourPartido_Click);
			// 
			// cmbTourPartido
			// 
			this->cmbTourPartido->FormattingEnabled = true;
			this->cmbTourPartido->Location = System::Drawing::Point(262, 20);
			this->cmbTourPartido->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbTourPartido->Name = L"cmbTourPartido";
			this->cmbTourPartido->Size = System::Drawing::Size(131, 21);
			this->cmbTourPartido->TabIndex = 161;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(156, 24);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 13);
			this->label15->TabIndex = 158;
			this->label15->Text = L"CAMPEONATO ";
			// 
			// cmbHora
			// 
			this->cmbHora->FormattingEnabled = true;
			this->cmbHora->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"8:00", L"9:00", L"10:00", L"11:00", L"12:00", L"13:00",
					L"14:00", L"15:00", L"16:00", L"17:00", L"18:00", L"19:00", L"20:00", L"21:00", L"22:00"
			});
			this->cmbHora->Location = System::Drawing::Point(717, 55);
			this->cmbHora->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbHora->Name = L"cmbHora";
			this->cmbHora->Size = System::Drawing::Size(57, 21);
			this->cmbHora->TabIndex = 157;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(670, 59);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 13);
			this->label13->TabIndex = 156;
			this->label13->Text = L"HORA";
			// 
			// cmbPartiStadium
			// 
			this->cmbPartiStadium->FormattingEnabled = true;
			this->cmbPartiStadium->Location = System::Drawing::Point(615, 101);
			this->cmbPartiStadium->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbPartiStadium->Name = L"cmbPartiStadium";
			this->cmbPartiStadium->Size = System::Drawing::Size(131, 21);
			this->cmbPartiStadium->TabIndex = 155;
			// 
			// cmbParReferee
			// 
			this->cmbParReferee->FormattingEnabled = true;
			this->cmbParReferee->Location = System::Drawing::Point(377, 101);
			this->cmbParReferee->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbParReferee->Name = L"cmbParReferee";
			this->cmbParReferee->Size = System::Drawing::Size(131, 21);
			this->cmbParReferee->TabIndex = 154;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(550, 102);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 13);
			this->label12->TabIndex = 153;
			this->label12->Text = L"ESTADIO:";
			// 
			// dtpInidateResult
			// 
			this->dtpInidateResult->Location = System::Drawing::Point(437, 57);
			this->dtpInidateResult->Name = L"dtpInidateResult";
			this->dtpInidateResult->Size = System::Drawing::Size(200, 20);
			this->dtpInidateResult->TabIndex = 152;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(324, 102);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 151;
			this->label11->Text = L"ARBITRO";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(324, 59);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 150;
			this->label10->Text = L"FECHA DEL PARTIDO";
			// 
			// btnDeleteDate
			// 
			this->btnDeleteDate->Location = System::Drawing::Point(471, 158);
			this->btnDeleteDate->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnDeleteDate->Name = L"btnDeleteDate";
			this->btnDeleteDate->Size = System::Drawing::Size(62, 30);
			this->btnDeleteDate->TabIndex = 149;
			this->btnDeleteDate->Text = L"Eliminar";
			this->btnDeleteDate->UseVisualStyleBackColor = true;
			this->btnDeleteDate->Click += gcnew System::EventHandler(this, &TournamentForm::btnDeleteDate_Click);
			// 
			// btnUpdateDate
			// 
			this->btnUpdateDate->Location = System::Drawing::Point(335, 158);
			this->btnUpdateDate->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnUpdateDate->Name = L"btnUpdateDate";
			this->btnUpdateDate->Size = System::Drawing::Size(58, 30);
			this->btnUpdateDate->TabIndex = 148;
			this->btnUpdateDate->Text = L"Modificar";
			this->btnUpdateDate->UseVisualStyleBackColor = true;
			this->btnUpdateDate->Click += gcnew System::EventHandler(this, &TournamentForm::btnUpdateDate_Click);
			// 
			// btnagregar
			// 
			this->btnagregar->Location = System::Drawing::Point(194, 158);
			this->btnagregar->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(61, 30);
			this->btnagregar->TabIndex = 147;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = true;
			this->btnagregar->Click += gcnew System::EventHandler(this, &TournamentForm::btnagregar_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 102);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 146;
			this->label8->Text = L"EQUIPO VISITANTE";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 62);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 13);
			this->label9->TabIndex = 145;
			this->label9->Text = L"EQUIPO LOCAL";
			// 
			// cmbTeamLocal
			// 
			this->cmbTeamLocal->FormattingEnabled = true;
			this->cmbTeamLocal->Location = System::Drawing::Point(149, 58);
			this->cmbTeamLocal->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbTeamLocal->Name = L"cmbTeamLocal";
			this->cmbTeamLocal->Size = System::Drawing::Size(131, 21);
			this->cmbTeamLocal->TabIndex = 144;
			// 
			// cmbTeamVisita
			// 
			this->cmbTeamVisita->FormattingEnabled = true;
			this->cmbTeamVisita->Location = System::Drawing::Point(149, 100);
			this->cmbTeamVisita->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbTeamVisita->Name = L"cmbTeamVisita";
			this->cmbTeamVisita->Size = System::Drawing::Size(131, 21);
			this->cmbTeamVisita->TabIndex = 143;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 24);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 142;
			this->label2->Text = L"FECHA";
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(104, 21);
			this->txtFecha->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->ReadOnly = true;
			this->txtFecha->Size = System::Drawing::Size(34, 20);
			this->txtFecha->TabIndex = 141;
			// 
			// dgvDate
			// 
			this->dgvDate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDate->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Time, this->TimeLine,
					this->TeamVisitante, this->Referee, this->Stadium, this->Column2
			});
			this->dgvDate->Location = System::Drawing::Point(34, 214);
			this->dgvDate->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dgvDate->Name = L"dgvDate";
			this->dgvDate->RowHeadersWidth = 51;
			this->dgvDate->RowTemplate->Height = 24;
			this->dgvDate->Size = System::Drawing::Size(765, 202);
			this->dgvDate->TabIndex = 140;
			this->dgvDate->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TournamentForm::dgvDate_CellClick);
			// 
			// Time
			// 
			this->Time->HeaderText = L"Fecha";
			this->Time->MinimumWidth = 6;
			this->Time->Name = L"Time";
			this->Time->Width = 50;
			// 
			// TimeLine
			// 
			this->TimeLine->HeaderText = L"Equipo Local";
			this->TimeLine->MinimumWidth = 6;
			this->TimeLine->Name = L"TimeLine";
			this->TimeLine->Width = 200;
			// 
			// TeamVisitante
			// 
			this->TeamVisitante->HeaderText = L"Equipo Visitante";
			this->TeamVisitante->MinimumWidth = 6;
			this->TeamVisitante->Name = L"TeamVisitante";
			this->TeamVisitante->Width = 200;
			// 
			// Referee
			// 
			this->Referee->HeaderText = L"Arbitro";
			this->Referee->MinimumWidth = 6;
			this->Referee->Name = L"Referee";
			this->Referee->Width = 125;
			// 
			// Stadium
			// 
			this->Stadium->HeaderText = L"Estadio";
			this->Stadium->MinimumWidth = 6;
			this->Stadium->Name = L"Stadium";
			this->Stadium->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Campeonato (Id)";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nuevoCampeonatoToolStripMenuItem });
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(182, 26);
			// 
			// nuevoCampeonatoToolStripMenuItem
			// 
			this->nuevoCampeonatoToolStripMenuItem->Name = L"nuevoCampeonatoToolStripMenuItem";
			this->nuevoCampeonatoToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->nuevoCampeonatoToolStripMenuItem->Text = L"Nuevo Campeonato";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->nuevoCampeonatoToolStripMenuItem1,
					this->modificarCampeonatoToolStripMenuItem, this->buscarEquiposPorCampeonatoToolStripMenuItem, this->agregarPartidoToolStripMenuItem,
					this->modificarPartidoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(881, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nuevoCampeonatoToolStripMenuItem1
			// 
			this->nuevoCampeonatoToolStripMenuItem1->Name = L"nuevoCampeonatoToolStripMenuItem1";
			this->nuevoCampeonatoToolStripMenuItem1->Size = System::Drawing::Size(126, 20);
			this->nuevoCampeonatoToolStripMenuItem1->Text = L"Nuevo Campeonato";
			this->nuevoCampeonatoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &TournamentForm::nuevoCampeonatoToolStripMenuItem1_Click);
			// 
			// modificarCampeonatoToolStripMenuItem
			// 
			this->modificarCampeonatoToolStripMenuItem->Name = L"modificarCampeonatoToolStripMenuItem";
			this->modificarCampeonatoToolStripMenuItem->Size = System::Drawing::Size(142, 20);
			this->modificarCampeonatoToolStripMenuItem->Text = L"Modificar Campeonato";
			this->modificarCampeonatoToolStripMenuItem->Click += gcnew System::EventHandler(this, &TournamentForm::modificarCampeonatoToolStripMenuItem_Click);
			// 
			// buscarEquiposPorCampeonatoToolStripMenuItem
			// 
			this->buscarEquiposPorCampeonatoToolStripMenuItem->Name = L"buscarEquiposPorCampeonatoToolStripMenuItem";
			this->buscarEquiposPorCampeonatoToolStripMenuItem->Size = System::Drawing::Size(192, 20);
			this->buscarEquiposPorCampeonatoToolStripMenuItem->Text = L"Buscar Equipos por Campeonato";
			this->buscarEquiposPorCampeonatoToolStripMenuItem->Click += gcnew System::EventHandler(this, &TournamentForm::buscarEquiposPorCampeonatoToolStripMenuItem_Click);
			// 
			// agregarPartidoToolStripMenuItem
			// 
			this->agregarPartidoToolStripMenuItem->Name = L"agregarPartidoToolStripMenuItem";
			this->agregarPartidoToolStripMenuItem->Size = System::Drawing::Size(102, 20);
			this->agregarPartidoToolStripMenuItem->Text = L"Agregar Partido";
			this->agregarPartidoToolStripMenuItem->Click += gcnew System::EventHandler(this, &TournamentForm::agregarPartidoToolStripMenuItem_Click);
			// 
			// modificarPartidoToolStripMenuItem
			// 
			this->modificarPartidoToolStripMenuItem->Name = L"modificarPartidoToolStripMenuItem";
			this->modificarPartidoToolStripMenuItem->Size = System::Drawing::Size(111, 20);
			this->modificarPartidoToolStripMenuItem->Text = L"Modificar Partido";
			this->modificarPartidoToolStripMenuItem->Click += gcnew System::EventHandler(this, &TournamentForm::modificarPartidoToolStripMenuItem_Click);
			// 
			// TournamentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 485);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"TournamentForm";
			this->Text = L"Campeonatos";
			this->Load += gcnew System::EventHandler(this, &TournamentForm::TournamentForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTournament))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptTournament))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTourSear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDate))->EndInit();
			this->contextMenuStrip2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//Menu superior
private: System::Void nuevoCampeonatoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Desactivartodo();
	FillcmbxTournaSearch();
	FillcmbTourPartido();
	Limpiartodo();
	txtTournament->Enabled = true;
	txtTournamentId->Enabled = true;
	txtPremioOrganizer->Enabled = true;
	txtCamNum->Enabled = true;
	btnTournament->Enabled = true;
	btnAddTournament->Enabled = true;
}
private: System::Void modificarCampeonatoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Desactivartodo();
	Limpiartodo();
	FillcmbxTournaSearch();
	FillcmbTourPartido();
	txtTournament->Enabled = true;
	txtTournamentId->Enabled = true;
	txtPremioOrganizer->Enabled = true;
	txtCamNum->Enabled = true;
	btnTournament->Enabled = true;
	btnUpdateTournament->Enabled = true;
	btnDeleteTournament->Enabled = true;
}
private: System::Void buscarEquiposPorCampeonatoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Desactivartodo();
	Limpiartodo();
	cmbxTournaSearch->Enabled = true;
	btnBuscar->Enabled = true;
	FillcmbxTournaSearch();
	   }
private: System::Void agregarPartidoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Desactivartodo();
	FillcmbTourPartido();
	Limpiartodo();
	cmbTourPartido->Enabled = true;
	bttTourPartido->Enabled = true;
	cmbHora->Enabled = true;
	btnagregar->Enabled = true;
}
private: System::Void modificarPartidoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Desactivartodo();
	Limpiartodo();
	FillcmbTourPartido();
	cmbTourPartido->Enabled = true;
	cmbTeamLocal->Enabled = true;
	cmbTeamVisita->Enabled = true;
	cmbParReferee->Enabled = true;
	cmbPartiStadium->Enabled = true;
	cmbHora->Enabled = true;
	bttTourPartido->Enabled = true;
	btnUpdateDate->Enabled = true;
	btnDeleteDate->Enabled = true;
}

//Cargas
private: System::Void TournamentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshTournament();
	

	FillcmbxTournaSearch();
	FillcmbTourPartido();

	Desactivartodo();
	

	txtNameOrganizer->Text = Organ->Username;
	//Todos_Match();

}
void Desactivartodo() {
	//Ventana1
	txtTournament->Enabled = false;
	txtTournamentId->Enabled = false;
	txtPremioOrganizer->Enabled = false;
	txtCamNum->Enabled = false;
	btnTournament->Enabled = false;
	btnAddTournament->Enabled = false;
	btnUpdateTournament->Enabled = false;
	btnDeleteTournament->Enabled = false;
	//Ventana2
	cmbxTournaSearch->Enabled = false;
	btnBuscar->Enabled = false;
	bttEquiSear->Enabled = false;
	cmbEquiSearch->Enabled = false;
	bbtAddTeamTourna->Enabled = false;
	//Ventana3
	cmbTourPartido->Enabled = false;
	bttTourPartido->Enabled = false;
	cmbTeamLocal->Enabled = false;
	cmbTeamVisita->Enabled = false;
	cmbParReferee->Enabled = false;
	cmbPartiStadium->Enabled = false;
	cmbHora->Enabled = false;
	btnagregar->Enabled = false;
	btnUpdateDate->Enabled = false;
	btnDeleteDate->Enabled = false;
}
void Limpiartodo() {
	//Ventana1
	txtTournament->Text = "";
	txtTournamentId->Text = "";
	txtPremioOrganizer->Text = "";
	txtCamNum->Text = "";
	//Ventana2
	cmbxTournaSearch->Text = "";
	cmbEquiSearch->Text = "";
	txtSearPremio->Text = "";
	txtSearTeams->Text = "";
	txtOrgaSearch->Text = "";
	//Ventana3
	cmbTeamLocal->Text = "";
	cmbTeamVisita->Text = "";
	cmbParReferee->Text = "";
	cmbPartiStadium->Text = "";
	cmbHora->Text = "";
	txtFecha->Clear();
	
}
//Métodos implementados

//Ventana1
public: void RefreshTournament() {
		List<Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		dgvTournament->Rows->Clear();
		for (int i = 0; i < tournamentList->Count; i++) {
			dgvTournament->Rows->Add(gcnew array<String^>{
				"" + tournamentList[i]->Id,
					tournamentList[i]->NameTournament,
				"" + tournamentList[i]->Organizer->Id,
					tournamentList[i]->Organizer->Name,
					tournamentList[i]->Premio,
				"" + tournamentList[i]->numteams,
			});

		}
		return void();
	}
private: System::Void btnAddTournament_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtTournament->Text != "" && txtTournamentId->Text != "" && txtPremioOrganizer->Text !="" && txtCamNum->Text != "") {
		Organizer^ o = Organ;
		Tournament^ u = gcnew Tournament();
		u->Id = Int32::Parse(txtTournamentId->Text);
		u->NameTournament = txtTournament->Text;
		u->Organizer = Organ;
		u->Premio = txtPremioOrganizer->Text;
		u->Inidate = dtpInidate->Value.ToString("yyyy-MM-dd");
		u->Enddate = dtpEnddate->Value.ToString("yyyy-MM-dd");
		u->numteams = Int32::Parse(txtCamNum->Text);
		if (ptTournament != nullptr && ptTournament->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			ptTournament->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			u->Photo = ms->ToArray();

		}
		Controller::AddTournaments(u);
		RefreshTournament();
		ClearTournament();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnUpdateTournament_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtTournament->Text != "" && txtTournamentId->Text != "" && txtPremioOrganizer->Text != "" && txtCamNum->Text != "") {
		Organizer^ o = Organ;
		Tournament^ u = gcnew Tournament();
		u->Id = Int32::Parse(txtTournamentId->Text);
		u->NameTournament = txtTournament->Text;
		u->Organizer = Organ;
		u->Premio = txtPremioOrganizer->Text;
		u->Inidate = dtpInidate->Value.ToString("yyyy-MM-dd");
		u->Enddate = dtpEnddate->Value.ToString("yyyy-MM-dd");
		u->numteams = Int32::Parse(txtCamNum->Text);
		if (ptTournament != nullptr && ptTournament->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			ptTournament->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			u->Photo = ms->ToArray();
		}
		Controller::UpdateTournaments(u);
		RefreshTournament();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnDeleteTournament_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtTournamentId->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			int tournamentsId = Int32::Parse(txtTournamentId->Text);
			Controller::DeleteTournaments(tournamentsId);
			RefreshTournament();
			ClearTournament();
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			MessageBox::Show("No se borro ningun dato");
		}

	}
	else {
		MessageBox::Show("Ingresa al menos el ID del equipo a borrar");
	}
	
}
Void ClearTournament() {
		   txtTournamentId->Clear();
		   txtTournamentId->Clear();
		   txtTournament->Clear();
		   txtPremioOrganizer->Clear();
		   txtCamNum->Clear();
}
private: System::Void pbphototeam_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		ptTournament->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void dgvTournament_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvTournament->SelectedCells[0]->RowIndex;
	if (dgvTournament->CurrentCell != nullptr &&
		dgvTournament->CurrentCell->Value != nullptr &&
		dgvTournament->CurrentCell->Value->ToString() != "") {
		int tournamentsId = Int32::Parse(dgvTournament->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Tournament^ u = Controller::QueryTournamentsById(tournamentsId);
		txtTournamentId->Text = "" + u->Id;
		txtTournament->Text = u->NameTournament;
		txtPremioOrganizer->Text = u->Premio;
		txtCamNum->Text = "" + u->numteams;
		txtCamNum->Text = "" + u->numteams;
		if (u->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(u->Photo);
			ptTournament->Image = Image::FromStream(ms);
		}
		else {
			ptTournament->Image = nullptr;
			ptTournament->Invalidate();
		}
	}
}

//Actualizar datos

//---------------------------------------------------------------------------------------------------------------------------------------------------

//Ventana2
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	bbtAddTeamTourna->Enabled = true;
	cmbEquiSearch->Enabled = true;
	bttEquiSear->Enabled = true;
	cmbEquiSearch->Text = "";
	txtDTNameSea->Clear();
	List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
	dgvTourSear->Rows->Clear();
	if (cmbxTournaSearch->Text != "" || cmbxTournaSearch->SelectedIndex >= 0) {
		Tournament^ o = Dato2();
		for (int i = 0; i < footballteamsList->Count; i++) {
			if (o->Id == footballteamsList[i]->Tournament->Id) {
				dgvTourSear->Rows->Add(gcnew array<String^>{
					footballteamsList[i]->NameTeam,
						footballteamsList[i]->DT->Name,
						"" + footballteamsList[i]->numplayers,
				});
			}
		}
		int selectedRowIndex = dgvTourSear->RowCount;
		if (selectedRowIndex == 1) {
			MessageBox::Show("No se encontraron datos");
		}
		FillcmbEquiSearch();
	}
	else {
		MessageBox::Show("Selecciona Campeonato");
	}
}
private: System::Void bttEquiSear_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Footballteams^>^ footballteamsFiltrados = TeamXcampeonato();
	dgvTourSear->Rows->Clear();
	if (cmbEquiSearch->Text != "" || cmbEquiSearch->SelectedIndex >= 0) {
		for (int i = 0; i < footballteamsFiltrados->Count; i++) {
			if (cmbEquiSearch->Text == footballteamsFiltrados[i]->NameTeam) {
				dgvTourSear->Rows->Add(gcnew array<String^>{
					"" + footballteamsFiltrados[i]->Id,
						footballteamsFiltrados[i]->NameTeam,
						footballteamsFiltrados[i]->DT->Name,
				});
			}
		}
	}
	else {
		txtDTNameSea->Text = "";
		MessageBox::Show("Selecciona Equipo");
	}
	
}
void FillcmbxTournaSearch() {
	cmbxTournaSearch->Items->Clear();
		   List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		   for (int i = 0; i < tournamentList->Count; i++) {
			   cmbxTournaSearch->Items->Add(tournamentList[i]->NameTournament);
		   }
}
Tournament^ Dato2() {
	Tournament^ o = gcnew Tournament();
	o = nullptr;
	if (cmbxTournaSearch->SelectedIndex >= 0) {
		List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		o = tournamentList[cmbxTournaSearch->SelectedIndex];
		txtSearPremio->Text = o->Premio;
		txtSearTeams->Text =""+ o->numteams;
		txtOrgaSearch->Text = o->Organizer->Name;
		return o;
	}
	else {
		return o;
	}
}
private: System::Void cmbxTournaSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Dato2();
}
void FillcmbEquiSearch() {
	cmbEquiSearch->Items->Clear();
    List <Footballteams^>^ footballteamsList = TeamXcampeonato();
		   for (int i = 0; i < footballteamsList->Count; i++) {
			   cmbEquiSearch->Items->Add(footballteamsList[i]->NameTeam);
		   }
	   }
private: System::Void cmbEquiSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Dato3(TeamXcampeonato());
}
Footballteams^ Dato3(List <Footballteams^>^ TeamsFiltrados) {
	Footballteams^ o = gcnew Footballteams();
	o = nullptr;
	if (cmbEquiSearch->SelectedIndex >= 0) {
		List <Footballteams^>^ footballteamsList = TeamXcampeonato();
		o = footballteamsList[cmbEquiSearch->SelectedIndex];
		txtDTNameSea->Text = o->DT->Name + " " + o->DT->Surname;
		return o;
	}
	else {
		txtDTNameSea->Text == "";
		return o;
	}
}
List <Footballteams^>^ TeamXcampeonato() {
	List <Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
	List <Footballteams^>^ TeamsFiltrados = gcnew List <Footballteams^>();
	Tournament^ o = Dato2();
	for (int i = 0; i < footballteamsList->Count; i++) {
		if (o->Id == footballteamsList[i]->Tournament->Id) {
			TeamsFiltrados->Add(footballteamsList[i]);
		}
	}
	return TeamsFiltrados;
}
private: System::Void bbtAddTeamTourna_Click(System::Object^ sender, System::EventArgs^ e) {
	TeamsForm^ TeamsForms = gcnew TeamsForm();
	TeamsForms->ShowDialog();
	TournamentForm_Load(sender, e);
}
//---------------------------------------------------------------------------------------------------------------------------------------------------


//Ventana3
Tournament^ Dato4() {
   Tournament^ o = gcnew Tournament();
   o = nullptr;
   if (cmbTourPartido->SelectedIndex >= 0) {
	   List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
	   o = tournamentList[cmbTourPartido->SelectedIndex];
	   return o;
   }
   else {
	   return o;
   }
 }
Void ClearMatch() {
  cmbTeamLocal->Text = "";
  cmbTeamVisita->Text = "";
  cmbParReferee->Text = "";
  cmbPartiStadium->Text = "";
  txtFecha->Text = "";
}
private: System::Void dgvDate_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvDate->SelectedCells[0]->RowIndex;
	if (dgvDate->CurrentCell != nullptr &&
		dgvDate->CurrentCell->Value != nullptr &&
		dgvDate->CurrentCell->Value->ToString() != "") {
		int Fecha = Int32::Parse(dgvDate->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		int Id = Int32::Parse(dgvDate->Rows[selectedRowIndex]->Cells[5]->Value->ToString());
		match^ m = Controller::QueryMatchById(Fecha, Id);
		cmbTeamLocal->Text = m->TeamLocal->NameTeam;
		cmbTeamVisita->Text = m->TeamVisit->NameTeam;
		cmbParReferee->Text = m->referee->Name;
		cmbPartiStadium->Text = m->stadium->Name;
		txtFecha->Text = "" + Fecha;
		cmbTourPartido->Text = m->tournament->NameTournament;
	}

	
	
}
void FillcmbTourPartido() {
	cmbTourPartido->Items->Clear();
	List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
	for (int i = 0; i < tournamentList->Count; i++) {
	   cmbTourPartido->Items->Add(tournamentList[i]->NameTournament);
	}
}
public: void Todos_Match() {
	List <match^>^ matchList = Controller::QueryAllMatchs();
	dgvDate->Rows->Clear();
	for (int i = 0; i < matchList->Count; i++) {
		dgvDate->Rows->Add(gcnew array<String^>{
			"" + matchList[i]->date,
				matchList[i]->TeamLocal->NameTeam,
				matchList[i]->TeamVisit->NameTeam,
				matchList[i]->referee->Name,
				matchList[i]->stadium->Name,
				""+matchList[i]->tournament->Id,
		});
	}
}
public: void RefreshMatch() {
	List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
	dgvDate->Rows->Clear();
	for (int i = 0; i < matchList->Count; i++) {
		dgvDate->Rows->Add(gcnew array<String^>{
			"" + matchList[i]->date,
				matchList[i]->TeamLocal->NameTeam,
				matchList[i]->TeamVisit->NameTeam,
				matchList[i]->referee->Name,
				matchList[i]->stadium->Name,
				""+matchList[i]->tournament->Id,
		});

	}
	int selectedRowIndex = dgvDate->RowCount;
	if (selectedRowIndex == 1) {
		MessageBox::Show("No se encontraron datos");
	}
}
private: System::Void bttTourPartido_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbTourPartido->Text != "" && cmbTourPartido->SelectedIndex >= 0) {
		cmbTeamLocal->Enabled = true;
		cmbTeamVisita->Enabled = true;
		cmbParReferee->Enabled = true;
		cmbPartiStadium->Enabled = true;
		FillcmbTeamLocal();
		FillcmbTeamVisita();
		FillcmbParReferee();
		FillcmbPartiStadium();
		RefreshMatch();
		ClearMatch();
		FillcmbHora();
		List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
		txtFecha->Text = "" + (matchList->Count + 1);
	}
	else {
		MessageBox::Show("Selecciona Campeonato");
	}
	
}
List <Footballteams^>^ TeamXcampeonatoPartido() {
		   List <Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
		   List <Footballteams^>^ TeamsFiltrados = gcnew List <Footballteams^>();
		   Tournament^ o = Dato4();
		   for (int i = 0; i < footballteamsList->Count; i++) {
			   if (o->Id == footballteamsList[i]->Tournament->Id) {
				   TeamsFiltrados->Add(footballteamsList[i]);
			   }
		   }
		   return TeamsFiltrados;
	   }
void FillcmbTeamLocal() {
	cmbTeamLocal->Items->Clear();
	List <Footballteams^>^ footballteamsList = TeamXcampeonatoPartido();
	for (int i = 0; i < footballteamsList->Count; i++) {
		cmbTeamLocal->Items->Add(footballteamsList[i]->NameTeam);
	}
}
void FillcmbHora() {
	cmbHora->Items->Clear();
	for (int i = 0; i < 22; i++) {
		cmbHora->Items->Add(""+i);
	}
}
void FillcmbTeamVisita() {
	cmbTeamVisita->Items->Clear();
	List <Footballteams^>^ footballteamsList = TeamXcampeonatoPartido();
	for (int i = 0; i < footballteamsList->Count; i++) {
		cmbTeamVisita->Items->Add(footballteamsList[i]->NameTeam);
	}
}
List <FootballModel::Referee^>^ RefereeXcampeonatoPartido() {
	List <FootballModel::Referee^>^ refereeList = Controller::QueryAllReferees();
	List <FootballModel::Referee^>^ refereeListFiltrados = gcnew List <FootballModel::Referee^>();
	Tournament^ o = Dato4();
	for (int i = 0; i < refereeList->Count; i++) {
		if (o->Id == refereeList[i]->tournament->Id) {
			refereeListFiltrados->Add(refereeList[i]);
		}
	}
	return refereeListFiltrados;
}
void FillcmbParReferee() {
	cmbParReferee->Items->Clear();
	List <FootballModel::Referee^>^ refereeList = RefereeXcampeonatoPartido();
	for (int i = 0; i < refereeList->Count; i++) {
		cmbParReferee->Items->Add(refereeList[i]->Name);
	}
}
List <FootballModel::Stadium^>^ StadiumXcampeonatoPartido() {
	List <FootballModel::Stadium^>^ stadiumList = Controller::QueryAllStadium();
	List <FootballModel::Stadium^>^ stadiumListFiltrados = gcnew List <FootballModel::Stadium^>();
	Tournament^ o = Dato4();
	for (int i = 0; i < stadiumList->Count; i++) {
		if (o->Id == stadiumList[i]->tournament->Id) {
			stadiumListFiltrados->Add(stadiumList[i]);
		}
	}
	return stadiumListFiltrados;
}
void FillcmbPartiStadium() {
	cmbPartiStadium->Items->Clear();
	List <FootballModel::Stadium^>^ stadiumList = StadiumXcampeonatoPartido();
	for (int i = 0; i < stadiumList->Count; i++) {
		cmbPartiStadium->Items->Add(stadiumList[i]->Name);
	}
}
Footballteams^ DatoLocal() {
	Footballteams^ f = gcnew Footballteams();
	List <Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
	List <Footballteams^>^ TeamsFiltrados = gcnew List <Footballteams^>();
	Tournament^ o = Dato4();
	f = nullptr;
	for (int i = 0; i < footballteamsList->Count; i++) {
		if (o->Id == footballteamsList[i]->Tournament->Id) {
			TeamsFiltrados->Add(footballteamsList[i]);
		}
	}
	if (cmbTeamLocal->SelectedIndex >= 0) {
		f = TeamsFiltrados[cmbTeamLocal->SelectedIndex];
		return f;
	}
	else {
		return f;
	}
}
Footballteams^ DatoVisita() {
	Footballteams^ f = gcnew Footballteams();
	List <Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
	List <Footballteams^>^ TeamsFiltrados = gcnew List <Footballteams^>();
	Tournament^ o = Dato4();
	f = nullptr;
	for (int i = 0; i < footballteamsList->Count; i++) {
		if (o->Id == footballteamsList[i]->Tournament->Id) {
			TeamsFiltrados->Add(footballteamsList[i]);
		}
	}
	if (cmbTeamVisita->SelectedIndex >= 0) {
		f = TeamsFiltrados[cmbTeamVisita->SelectedIndex];
		return f;
	}
	else {
		return f;
	}
}
FootballModel::Referee^ DatoReferee() {
	FootballModel::Referee^ o = gcnew FootballModel::Referee();
	o = nullptr;
	if (cmbParReferee->SelectedIndex >= 0) {
		List <FootballModel::Referee^>^ refereeList = RefereeXcampeonatoPartido();
		o = refereeList[cmbParReferee->SelectedIndex];
		return o;
	}
	else {
		return o;
	}
}
FootballModel::Stadium^ DatoStadium() {
	FootballModel::Stadium^ o = gcnew FootballModel::Stadium();
	o = nullptr;
	if (cmbPartiStadium->SelectedIndex >= 0) {
		List <FootballModel::Stadium^>^ stadiumList = StadiumXcampeonatoPartido();
		o = stadiumList[cmbPartiStadium->SelectedIndex];
		return o;
	}
	else {
		return o;
	}
}
private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbTeamLocal->Text != "" && cmbTeamVisita->Text != "" && cmbParReferee->Text != "" && cmbPartiStadium->Text != "" && cmbHora->Text != "") {
		match^ u = gcnew match();
		u->TeamLocal = DatoLocal();
		u->tournament = Dato4();
		u->TeamVisit = DatoVisita();
		u->referee = DatoReferee();
		u->stadium = DatoStadium();
		u->hour = Int32::Parse(cmbHora->Text);
		u->date = Int32::Parse(txtFecha->Text);
		u->GolTeamLocal = "??";
		u->GolTeamVisit = "??";
		u->YellowTeamLocal = "??";
		u->RedTeamLocal = "??";
		u->YellowTeamVisit = "??";
		u->RedTeamVisit = "??";
		//
		//

		Controller::AddMatch(u);
		RefreshMatch();
		ClearMatch();
		List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
		txtFecha->Text = "" + (matchList->Count + 1);
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}	
}
private: System::Void btnUpdateDate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbTeamLocal->Text != "" && cmbTeamVisita->Text != "" && cmbParReferee->Text != "" && cmbPartiStadium->Text != "" && cmbHora->Text != "") {
		match^ u = gcnew match();
		u->TeamLocal = DatoLocal();
		u->tournament = Dato4();
		u->TeamVisit = DatoVisita();
		u->referee = DatoReferee();
		u->stadium = DatoStadium();
		u->hour = Int32::Parse(cmbHora->Text);
		u->date = Int32::Parse(txtFecha->Text);
		u->GolTeamLocal = "??";
		u->GolTeamVisit = "??";
		u->YellowTeamLocal = "??";
		u->RedTeamLocal = "??";
		u->YellowTeamVisit = "??";
		u->RedTeamVisit = "??";
		Controller::UpdateMatch(u);
		RefreshMatch();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnDeleteDate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbTourPartido->Text != "" && txtFecha->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			match^ u = gcnew match();
			u->TeamLocal = DatoLocal();
			u->tournament = Dato4();
			u->TeamVisit = DatoVisita();
			u->referee = DatoReferee();
			u->stadium = DatoStadium();
			u->date = Int32::Parse(txtFecha->Text);

			Controller::DeleteMatch(u);
			RefreshMatch();
			ClearMatch();
			List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
			txtFecha->Text = "" + (matchList->Count + 1);
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			MessageBox::Show("No se borro ningun dato");
		}

	}
	else {
		MessageBox::Show("Ingresa al menos el ID del equipo a borrar");
	}
}


};
}
