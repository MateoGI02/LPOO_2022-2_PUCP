#pragma once
#include "ComboBoxItem.h"
#include "InscriptionSearchFrom.h"
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnDeleteReferee;



	private: System::Windows::Forms::Button^ btnUpdateReferee;

	private: System::Windows::Forms::Button^ btmAddReferee;


	private: System::Windows::Forms::DataGridView^ dgvReferee;








	private: System::Windows::Forms::ComboBox^ cmbTournament;
	private: System::Windows::Forms::PictureBox^ ptReferee;


	private: System::Windows::Forms::TextBox^ txtNameReferee;



	private: System::Windows::Forms::TextBox^ txtDocReferee;
	private: System::Windows::Forms::TextBox^ txtSnameReferee;






	private: System::Windows::Forms::TabPage^ tabPage3;





	private: System::Windows::Forms::ComboBox^ cmbPosition;




	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::DataGridView^ dgvPlayers;
	private: System::Windows::Forms::PictureBox^ pbPhoto;








	private: System::Windows::Forms::TextBox^ txtNumber;


	private: System::Windows::Forms::ComboBox^ cbmteam;


	private: System::Windows::Forms::TextBox^ txtName;



	private: System::Windows::Forms::TextBox^ txtDocNumber;


	private: System::Windows::Forms::TextBox^ txtSurNames;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbTournament1;
private: System::Windows::Forms::DataGridView^ dgvStadium;






private: System::Windows::Forms::Button^ btnDeleteStadium;

private: System::Windows::Forms::Button^ btnUpdateStadium;

private: System::Windows::Forms::Button^ btnAddStadium;

private: System::Windows::Forms::TextBox^ txtPlace;
private: System::Windows::Forms::TextBox^ txtDirection;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ ptStadium;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
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
			this->ptReferee = (gcnew System::Windows::Forms::PictureBox());
			this->txtNameReferee = (gcnew System::Windows::Forms::TextBox());
			this->txtDocReferee = (gcnew System::Windows::Forms::TextBox());
			this->txtSnameReferee = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtStadiumId = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbTournament1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->ptStadium = (gcnew System::Windows::Forms::PictureBox());
			this->txtNameStadium = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nuevaInscripciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarInscripciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlayers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReferee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptReferee))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStadium))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptStadium))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 33);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1073, 578);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage3
			// 
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
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1065, 549);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Jugadores";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btn
			// 
			this->btn->Location = System::Drawing::Point(606, 298);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(137, 23);
			this->btn->TabIndex = 116;
			this->btn->Text = L"Agregar Foto";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &InscriptionForm::btn_Click);
			// 
			// txtplayerId
			// 
			this->txtplayerId->Location = System::Drawing::Point(130, 26);
			this->txtplayerId->Name = L"txtplayerId";
			this->txtplayerId->Size = System::Drawing::Size(80, 22);
			this->txtplayerId->TabIndex = 115;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(70, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(18, 16);
			this->label18->TabIndex = 114;
			this->label18->Text = L"Id";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(914, 298);
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
			this->label11->Location = System::Drawing::Point(38, 265);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 16);
			this->label11->TabIndex = 111;
			this->label11->Text = L"Posicion";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(38, 218);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 16);
			this->label10->TabIndex = 110;
			this->label10->Text = L"Equipo";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 171);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 109;
			this->label9->Text = L"Numero";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 16);
			this->label8->TabIndex = 108;
			this->label8->Text = L"Nombres";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 107;
			this->label7->Text = L"Apellidos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(252, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 16);
			this->label6->TabIndex = 106;
			this->label6->Text = L"DNI";
			// 
			// cmbPosition
			// 
			this->cmbPosition->FormattingEnabled = true;
			this->cmbPosition->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Arquero", L"Defensa", L"Volante ", L"Delantero" });
			this->cmbPosition->Location = System::Drawing::Point(127, 262);
			this->cmbPosition->Name = L"cmbPosition";
			this->cmbPosition->Size = System::Drawing::Size(192, 24);
			this->cmbPosition->TabIndex = 101;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(914, 171);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(137, 23);
			this->btnUpdate->TabIndex = 99;
			this->btnUpdate->Text = L"MODIFICAR";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &InscriptionForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(914, 54);
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
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(309, 193);
			this->pbPhoto->TabIndex = 96;
			this->pbPhoto->TabStop = false;
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(127, 168);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(83, 22);
			this->txtNumber->TabIndex = 94;
			// 
			// cbmteam
			// 
			this->cbmteam->FormattingEnabled = true;
			this->cbmteam->Location = System::Drawing::Point(127, 215);
			this->cbmteam->Name = L"cbmteam";
			this->cbmteam->Size = System::Drawing::Size(192, 24);
			this->cbmteam->TabIndex = 92;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(127, 124);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(217, 22);
			this->txtName->TabIndex = 91;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(308, 26);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(190, 22);
			this->txtDocNumber->TabIndex = 89;
			// 
			// txtSurNames
			// 
			this->txtSurNames->Location = System::Drawing::Point(127, 76);
			this->txtSurNames->Name = L"txtSurNames";
			this->txtSurNames->Size = System::Drawing::Size(217, 22);
			this->txtSurNames->TabIndex = 87;
			// 
			// tabPage1
			// 
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
			this->tabPage1->Controls->Add(this->ptReferee);
			this->tabPage1->Controls->Add(this->txtNameReferee);
			this->tabPage1->Controls->Add(this->txtDocReferee);
			this->tabPage1->Controls->Add(this->txtSnameReferee);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1065, 549);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Arbitros";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(822, 280);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(137, 23);
			this->btnSearch->TabIndex = 118;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &InscriptionForm::btnSearch_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(520, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 23);
			this->button1->TabIndex = 117;
			this->button1->Text = L"Agregar Foto";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// txtrefereeId
			// 
			this->txtrefereeId->Location = System::Drawing::Point(151, 31);
			this->txtrefereeId->Name = L"txtrefereeId";
			this->txtrefereeId->Size = System::Drawing::Size(80, 22);
			this->txtrefereeId->TabIndex = 92;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(98, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 16);
			this->label2->TabIndex = 91;
			this->label2->Text = L"Id";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(24, 245);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(92, 16);
			this->label17->TabIndex = 90;
			this->label17->Text = L"Campeonatos";
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
			this->label13->Location = System::Drawing::Point(86, 81);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 16);
			this->label13->TabIndex = 86;
			this->label13->Text = L"DNI";
			// 
			// btnDeleteReferee
			// 
			this->btnDeleteReferee->Location = System::Drawing::Point(822, 207);
			this->btnDeleteReferee->Name = L"btnDeleteReferee";
			this->btnDeleteReferee->Size = System::Drawing::Size(137, 23);
			this->btnDeleteReferee->TabIndex = 84;
			this->btnDeleteReferee->Text = L"ELIMINAR";
			this->btnDeleteReferee->UseVisualStyleBackColor = true;
			this->btnDeleteReferee->Click += gcnew System::EventHandler(this, &InscriptionForm::btnDeleteReferee_Click);
			// 
			// btnUpdateReferee
			// 
			this->btnUpdateReferee->Location = System::Drawing::Point(822, 121);
			this->btnUpdateReferee->Name = L"btnUpdateReferee";
			this->btnUpdateReferee->Size = System::Drawing::Size(137, 23);
			this->btnUpdateReferee->TabIndex = 83;
			this->btnUpdateReferee->Text = L"MODIFICAR";
			this->btnUpdateReferee->UseVisualStyleBackColor = true;
			this->btnUpdateReferee->Click += gcnew System::EventHandler(this, &InscriptionForm::btnUpdateReferee_Click);
			// 
			// btmAddReferee
			// 
			this->btmAddReferee->Location = System::Drawing::Point(822, 37);
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
			this->cmbTournament->Location = System::Drawing::Point(151, 237);
			this->cmbTournament->Name = L"cmbTournament";
			this->cmbTournament->Size = System::Drawing::Size(192, 24);
			this->cmbTournament->TabIndex = 78;
			// 
			// ptReferee
			// 
			this->ptReferee->Location = System::Drawing::Point(487, 31);
			this->ptReferee->Name = L"ptReferee";
			this->ptReferee->Size = System::Drawing::Size(214, 210);
			this->ptReferee->TabIndex = 77;
			this->ptReferee->TabStop = false;
			// 
			// txtNameReferee
			// 
			this->txtNameReferee->Location = System::Drawing::Point(151, 181);
			this->txtNameReferee->Name = L"txtNameReferee";
			this->txtNameReferee->Size = System::Drawing::Size(217, 22);
			this->txtNameReferee->TabIndex = 76;
			// 
			// txtDocReferee
			// 
			this->txtDocReferee->Location = System::Drawing::Point(151, 78);
			this->txtDocReferee->Name = L"txtDocReferee";
			this->txtDocReferee->Size = System::Drawing::Size(100, 22);
			this->txtDocReferee->TabIndex = 74;
			// 
			// txtSnameReferee
			// 
			this->txtSnameReferee->Location = System::Drawing::Point(151, 133);
			this->txtSnameReferee->Name = L"txtSnameReferee";
			this->txtSnameReferee->Size = System::Drawing::Size(217, 22);
			this->txtSnameReferee->TabIndex = 72;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->txtStadiumId);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->cmbTournament1);
			this->tabPage2->Controls->Add(this->dgvStadium);
			this->tabPage2->Controls->Add(this->btnDeleteStadium);
			this->tabPage2->Controls->Add(this->btnUpdateStadium);
			this->tabPage2->Controls->Add(this->btnAddStadium);
			this->tabPage2->Controls->Add(this->txtPlace);
			this->tabPage2->Controls->Add(this->txtDirection);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->ptStadium);
			this->tabPage2->Controls->Add(this->txtNameStadium);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1065, 549);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Estadios";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(547, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 117;
			this->button2->Text = L"Agregar Foto";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// txtStadiumId
			// 
			this->txtStadiumId->Location = System::Drawing::Point(115, 46);
			this->txtStadiumId->Name = L"txtStadiumId";
			this->txtStadiumId->Size = System::Drawing::Size(80, 22);
			this->txtStadiumId->TabIndex = 94;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(44, 49);
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
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 88;
			this->label5->Text = L"Campeonatos";
			// 
			// cmbTournament1
			// 
			this->cmbTournament1->FormattingEnabled = true;
			this->cmbTournament1->Location = System::Drawing::Point(115, 243);
			this->cmbTournament1->Name = L"cmbTournament1";
			this->cmbTournament1->Size = System::Drawing::Size(192, 24);
			this->cmbTournament1->TabIndex = 87;
			// 
			// dgvStadium
			// 
			this->dgvStadium->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStadium->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->stadiumId,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn7
			});
			this->dgvStadium->Location = System::Drawing::Point(145, 371);
			this->dgvStadium->Name = L"dgvStadium";
			this->dgvStadium->RowHeadersWidth = 51;
			this->dgvStadium->RowTemplate->Height = 24;
			this->dgvStadium->Size = System::Drawing::Size(729, 150);
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
			this->btnDeleteStadium->Location = System::Drawing::Point(881, 268);
			this->btnDeleteStadium->Name = L"btnDeleteStadium";
			this->btnDeleteStadium->Size = System::Drawing::Size(137, 23);
			this->btnDeleteStadium->TabIndex = 85;
			this->btnDeleteStadium->Text = L"ELIMINAR";
			this->btnDeleteStadium->UseVisualStyleBackColor = true;
			this->btnDeleteStadium->Click += gcnew System::EventHandler(this, &InscriptionForm::btnDeleteStadium_Click);
			// 
			// btnUpdateStadium
			// 
			this->btnUpdateStadium->Location = System::Drawing::Point(881, 162);
			this->btnUpdateStadium->Name = L"btnUpdateStadium";
			this->btnUpdateStadium->Size = System::Drawing::Size(137, 23);
			this->btnUpdateStadium->TabIndex = 84;
			this->btnUpdateStadium->Text = L"MODIFICAR";
			this->btnUpdateStadium->UseVisualStyleBackColor = true;
			this->btnUpdateStadium->Click += gcnew System::EventHandler(this, &InscriptionForm::btnUpdateStadium_Click);
			// 
			// btnAddStadium
			// 
			this->btnAddStadium->Location = System::Drawing::Point(881, 60);
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
			this->txtPlace->Name = L"txtPlace";
			this->txtPlace->Size = System::Drawing::Size(217, 22);
			this->txtPlace->TabIndex = 82;
			// 
			// txtDirection
			// 
			this->txtDirection->Location = System::Drawing::Point(115, 192);
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
			// ptStadium
			// 
			this->ptStadium->Location = System::Drawing::Point(410, 46);
			this->ptStadium->Name = L"ptStadium";
			this->ptStadium->Size = System::Drawing::Size(387, 198);
			this->ptStadium->TabIndex = 78;
			this->ptStadium->TabStop = false;
			// 
			// txtNameStadium
			// 
			this->txtNameStadium->Location = System::Drawing::Point(115, 91);
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
			this->ClientSize = System::Drawing::Size(1091, 624);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"InscriptionForm";
			this->Text = L"Inscripciones ";
			this->Load += gcnew System::EventHandler(this, &InscriptionForm::InscriptionForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlayers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReferee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptReferee))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStadium))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptStadium))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	

#pragma endregion


 /*private: System::Void InscriptionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	 RefreshPlayersDGV();
	 RefreshRefereesDGV();
	 RefreshStadiumsDGV();
 }

 */
		public: void RefreshPlayer() {
			List<Player^>^ playerList = Controller::QueryAllPlayers();
			dgvPlayers->Rows->Clear();
			for (int i = 0; i < playerList->Count; i++) {
				dgvPlayers->Rows->Add(gcnew array<String^>{
					"" + playerList[i]->Id,
						playerList[i]->Number,
						playerList[i]->Name,
						playerList[i]->Surname



				});


			}
		}



		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			Player^ p = gcnew Player();
			p->Id = Int32::Parse(txtplayerId->Text);
			p->DocNumber = txtDocNumber->Text;
			p->Name = txtName->Text;
			p->Surname = txtSurNames->Text;
			p->Status = 'A';
			Controller::AddPlayer(p);
			RefreshPlayer();

		}
		

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Player^ p = gcnew Player();
	
	p->Id = Int32::Parse(txtplayerId->Text);
	p->Number = txtNumber->Text;
	p->DocNumber = txtDocNumber->Text;
	p->Surname = txtSurNames->Text;
	p->Name = txtName->Text;

	

	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		p->Photo = ms->ToArray();

	}
	Controller::UpdatePlayer(p);
	RefreshPlayer();
	
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
	if (dr == System::Windows::Forms::DialogResult::Yes)
	{
		int playerId = Int32::Parse(txtplayerId->Text);
		Controller::DeletePlayer(playerId);
		RefreshPlayer();
		ClearControls();
	}
	else if (dr == System::Windows::Forms::DialogResult::No)
	{
		//do something else
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
			txtNumber->Text = p->Number;
			txtDocNumber->Text = p->DocNumber;
			txtName->Text = p->Name;
			txtSurNames->Text = p->Surname;

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
			//List <Store^>^ storeList = Controller::QueryAllStores();
			List <String^>^ positionList = Controller::QueryAllPositions();
			for (int i = 0; i < positionList->Count; i++) {
				//cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
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
	  void ClearControls() {
		   txtplayerId->Clear();
		   txtNumber->Clear();
		   txtDocNumber->Clear();
		   txtSurNames->Clear();
		   txtName->Clear();
		
		   
		   pbPhoto->Image = nullptr;
	   }
	  

	void ClearControls2() {
		txtrefereeId->Clear();
		txtDocReferee->Clear();
		txtNameReferee->Clear();
		txtSnameReferee->Clear();
	
	}

	void ClearControls3() {
		txtStadiumId->Clear();
		txtNameStadium->Clear();
		txtPlace->Clear();
		txtDirection->Clear();
	}
	
	

	public:Void RefreshRefereesDGV();

		private: System::Void btmAddReferee_Click(System::Object^ sender, System::EventArgs^ e) {
			Referee^ r = gcnew Referee();
			r->Id = Int32::Parse(txtrefereeId->Text);
		
			r->DocNumber = txtDocReferee->Text;
			r->Name = txtNameReferee->Text;
			r->Surname = txtSnameReferee->Text;
	
			r->Status = 'A';
			Controller::AddReferee(r);
			RefreshRefereesDGV();
			ClearControls2();

}








private: System::Void btnUpdateReferee_Click(System::Object^ sender, System::EventArgs^ e) {
		Referee^ r = gcnew Referee();
		r->Id = Int32::Parse(txtrefereeId->Text);
		
		r->DocNumber = txtDocReferee->Text;
		r->Name = txtNameReferee->Text;
		r->Surname = txtSnameReferee->Text;
		
		r->Status = 'A';
		Controller::UpdateReferee(r);
		RefreshRefereesDGV();

}
	private: System::Void btnDeleteReferee_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int refereeId= Int32::Parse(txtrefereeId->Text);
		Controller::DeleteReferee(refereeId);
		RefreshRefereesDGV();
		ClearControls2();

	}
private: System::Void dgvReferee_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvReferee->SelectedCells[0]->RowIndex;
 	int refereeId = Int32::Parse(dgvReferee->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Referee^ r = Controller::QueryRefereeById(refereeId);

			txtrefereeId->Text =  "" + r->Id;
			
			txtDocReferee->Text = "" + r->DocNumber;
			txtNameReferee->Text = r->Name;
			txtSnameReferee->Text = r->Surname;
		
		}
	
	   public:Void RefreshStadiumsDGV();







private: System::Void btnAddStadium_Click(System::Object^ sender, System::EventArgs^ e) {

	Stadium^ s = gcnew Stadium();
	s->Id = Int32::Parse(txtStadiumId->Text);
	s->Name = txtNameStadium->Text;
	s->Place = txtPlace->Text;
	s->Direction = txtDirection->Text;
	s->Status = 'A';
	Controller::AddStadium(s);
	RefreshStadiumsDGV();
	ClearControls3();



}
private: System::Void btnUpdateStadium_Click(System::Object^ sender, System::EventArgs^ e) {

	Stadium^ s = gcnew Stadium();
	s->Id = Int32::Parse(txtStadiumId->Text);
	s->Name = txtNameStadium->Text;
	s->Place = txtPlace->Text;
	s->Direction = txtDirection->Text;
	s->Status = 'A';
	Controller::UpdateStadium(s);
	RefreshStadiumsDGV();
	
}
private: System::Void btnDeleteStadium_Click(System::Object^ sender, System::EventArgs^ e) {

	int stadiumId = Int32::Parse(txtStadiumId->Text);
	Controller::DeleteStadium(stadiumId);
	RefreshStadiumsDGV();
	ClearControls3();
}
private: System::Void dgvStadium_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int selectedRowIndex = dgvStadium->SelectedCells[0]->RowIndex;
	int stadiumId = Int32::Parse(dgvStadium->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Stadium^ s = Controller::QueryStadiumById(stadiumId);

	txtStadiumId->Text = "" + s->Id;
	txtNameStadium->Text = "" + s->Name;
	txtPlace->Text = "" + s->Place;
	txtDirection->Text = s->Direction;
	




}


	   

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	InscriptionSearchFrom^ inscriptionSearchFrom = gcnew InscriptionSearchFrom();
	inscriptionSearchFrom->ShowDialog();

}
	  public: Void AddPersonToInscriptions(Referee^ p) {
		  dgvReferee->Rows->Add(gcnew array<String^> {
			  Convert::ToString(p->Id),
				  p->Name,
		  }

		  );
	  }
private: System::Void InscriptionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshPlayer();
	RefreshRefereesDGV();
	RefreshStadiumsDGV();

}


private: System::Void modificarInscripciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	ClearControls2();
	ClearControls3();
	btnAdd->Enabled = false;
	btnAddStadium->Enabled = false;
	btmAddReferee->Enabled = false;
	btnDeleteReferee->Enabled = true;
	btnDeleteStadium->Enabled = true;
	btnUpdateReferee->Enabled = true;
	btnUpdateStadium->Enabled = true;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}
private: System::Void nuevaInscripciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	ClearControls2();
	ClearControls3();
	btnAdd->Enabled = true;
	btnAddStadium->Enabled = true;
	btmAddReferee->Enabled = true;
	btnDeleteReferee->Enabled = false;
	btnDeleteStadium->Enabled = false;
	btnUpdateReferee->Enabled = false;
	btnUpdateStadium->Enabled = false;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
}
};
}
