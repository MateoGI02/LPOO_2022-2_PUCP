#pragma once

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



	private: System::Windows::Forms::ComboBox^ comboBox26;
	private: System::Windows::Forms::Label^ label17;





	private: System::Windows::Forms::ComboBox^ comboBox28;
	private: System::Windows::Forms::Label^ label19;










	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TabPage^ tabPage5;



	private: System::Windows::Forms::TextBox^ txtSurnameOrganizer;
	private: System::Windows::Forms::TextBox^ txtNameOrganizer;







	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
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
private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdTournament;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameOrganizer;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ SurnameOrganizer;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DateTimePicker^ dtpEnddate;

private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::DateTimePicker^ dtpInidate;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::DateTimePicker^ dtpInidateResult;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ btnDeleteDate;
private: System::Windows::Forms::Button^ btnUpdateDate;
private: System::Windows::Forms::Button^ btnagregar;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::DataGridView^ dgvDate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TimeLine;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TeamVisitante;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Referee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stadium;







	protected:



























































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
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
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
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtPremioOrganizer = (gcnew System::Windows::Forms::TextBox());
			this->txtSurnameOrganizer = (gcnew System::Windows::Forms::TextBox());
			this->txtNameOrganizer = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->ptTournament = (gcnew System::Windows::Forms::PictureBox());
			this->txtTournament = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->comboBox28 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox26 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dtpInidateResult = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteDate = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDate = (gcnew System::Windows::Forms::Button());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->dgvDate = (gcnew System::Windows::Forms::DataGridView());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimeLine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TeamVisitante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Referee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stadium = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTournament))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptTournament))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDate))->BeginInit();
			this->SuspendLayout();
			this->tabControl1->AccessibleName = L"";
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1124, 573);
			this->tabControl1->TabIndex = 0;
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
			this->tabPage5->Controls->Add(this->txtSurnameOrganizer);
			this->tabPage5->Controls->Add(this->txtNameOrganizer);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->ptTournament);
			this->tabPage5->Controls->Add(this->txtTournament);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1116, 544);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"Creacion de Campeonatos";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->dtpEnddate->Location = System::Drawing::Point(531, 186);
			this->dtpEnddate->Margin = System::Windows::Forms::Padding(4);
			this->dtpEnddate->Name = L"dtpEnddate";
			this->dtpEnddate->Size = System::Drawing::Size(265, 22);
			this->dtpEnddate->TabIndex = 135;
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(445, 186);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(77, 16);
			this->label30->TabIndex = 134;
			this->label30->Text = L"Fecha Final";
			this->dtpInidate->Location = System::Drawing::Point(531, 137);
			this->dtpInidate->Margin = System::Windows::Forms::Padding(4);
			this->dtpInidate->Name = L"dtpInidate";
			this->dtpInidate->Size = System::Drawing::Size(265, 22);
			this->dtpInidate->TabIndex = 133;
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(445, 137);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(79, 16);
			this->label29->TabIndex = 132;
			this->label29->Text = L"Fecha Inicio";
			this->txtTournamentId->Location = System::Drawing::Point(178, 137);
			this->txtTournamentId->Name = L"txtTournamentId";
			this->txtTournamentId->Size = System::Drawing::Size(195, 22);
			this->txtTournamentId->TabIndex = 131;
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(90, 137);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(18, 16);
			this->label28->TabIndex = 130;
			this->label28->Text = L"Id";
			this->btnTournament->Location = System::Drawing::Point(926, 300);
			this->btnTournament->Name = L"btnTournament";
			this->btnTournament->Size = System::Drawing::Size(137, 39);
			this->btnTournament->TabIndex = 129;
			this->btnTournament->Text = L"Agregar Foto";
			this->btnTournament->UseVisualStyleBackColor = true;
			this->btnDeleteTournament->Location = System::Drawing::Point(705, 347);
			this->btnDeleteTournament->Name = L"btnDeleteTournament";
			this->btnDeleteTournament->Size = System::Drawing::Size(137, 23);
			this->btnDeleteTournament->TabIndex = 128;
			this->btnDeleteTournament->Text = L"ELIMINAR";
			this->btnDeleteTournament->UseVisualStyleBackColor = true;
			this->btnDeleteTournament->Click += gcnew System::EventHandler(this, &TournamentForm::btnDeleteTournament_Click);
			this->btnUpdateTournament->Location = System::Drawing::Point(509, 347);
			this->btnUpdateTournament->Name = L"btnUpdateTournament";
			this->btnUpdateTournament->Size = System::Drawing::Size(137, 23);
			this->btnUpdateTournament->TabIndex = 127;
			this->btnUpdateTournament->Text = L"MODIFICAR";
			this->btnUpdateTournament->UseVisualStyleBackColor = true;
			this->btnUpdateTournament->Click += gcnew System::EventHandler(this, &TournamentForm::btnUpdateTournament_Click);
			this->btnAddTournament->Location = System::Drawing::Point(311, 347);
			this->btnAddTournament->Name = L"btnAddTournament";
			this->btnAddTournament->Size = System::Drawing::Size(137, 23);
			this->btnAddTournament->TabIndex = 126;
			this->btnAddTournament->Text = L"AGREGAR";
			this->btnAddTournament->UseVisualStyleBackColor = true;
			this->btnAddTournament->Click += gcnew System::EventHandler(this, &TournamentForm::btnAddTournament_Click);
			this->dgvTournament->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTournament->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->IdTournament,
					this->dataGridViewTextBoxColumn1, this->NameOrganizer, this->SurnameOrganizer, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->dgvTournament->Location = System::Drawing::Point(86, 391);
			this->dgvTournament->Name = L"dgvTournament";
			this->dgvTournament->RowHeadersWidth = 51;
			this->dgvTournament->RowTemplate->Height = 24;
			this->dgvTournament->Size = System::Drawing::Size(1008, 150);
			this->dgvTournament->TabIndex = 125;
			this->dgvTournament->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TournamentForm::dgvTournament_CellClick);
			this->IdTournament->HeaderText = L"Id";
			this->IdTournament->MinimumWidth = 6;
			this->IdTournament->Name = L"IdTournament";
			this->IdTournament->Width = 50;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Campeonato";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 180;
			this->NameOrganizer->HeaderText = L"Nombres";
			this->NameOrganizer->MinimumWidth = 6;
			this->NameOrganizer->Name = L"NameOrganizer";
			this->NameOrganizer->Width = 200;
			this->SurnameOrganizer->HeaderText = L"Apellidos";
			this->SurnameOrganizer->MinimumWidth = 6;
			this->SurnameOrganizer->Name = L"SurnameOrganizer";
			this->SurnameOrganizer->Width = 200;
			this->dataGridViewTextBoxColumn5->HeaderText = L"DNI";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 175;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Premios";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 150;
			this->txtPremioOrganizer->Location = System::Drawing::Point(169, 183);
			this->txtPremioOrganizer->Name = L"txtPremioOrganizer";
			this->txtPremioOrganizer->Size = System::Drawing::Size(185, 22);
			this->txtPremioOrganizer->TabIndex = 124;
			this->txtSurnameOrganizer->Location = System::Drawing::Point(169, 236);
			this->txtSurnameOrganizer->Name = L"txtSurnameOrganizer";
			this->txtSurnameOrganizer->Size = System::Drawing::Size(311, 22);
			this->txtSurnameOrganizer->TabIndex = 120;
			this->txtNameOrganizer->Location = System::Drawing::Point(169, 297);
			this->txtNameOrganizer->Name = L"txtNameOrganizer";
			this->txtNameOrganizer->Size = System::Drawing::Size(311, 22);
			this->txtNameOrganizer->TabIndex = 119;
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(62, 300);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 16);
			this->label25->TabIndex = 116;
			this->label25->Text = L"Nombres";
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(60, 239);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(64, 16);
			this->label24->TabIndex = 115;
			this->label24->Text = L"Apellidos";
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(83, 186);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(50, 16);
			this->label23->TabIndex = 114;
			this->label23->Text = L"Premio";
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(18, 108);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(84, 16);
			this->label22->TabIndex = 113;
			this->label22->Text = L"Organizador ";
			this->ptTournament->BackColor = System::Drawing::Color::LightGray;
			this->ptTournament->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ptTournament->Location = System::Drawing::Point(868, 36);
			this->ptTournament->Name = L"ptTournament";
			this->ptTournament->Size = System::Drawing::Size(247, 234);
			this->ptTournament->TabIndex = 112;
			this->ptTournament->TabStop = false;
			this->txtTournament->Location = System::Drawing::Point(196, 36);
			this->txtTournament->Name = L"txtTournament";
			this->txtTournament->Size = System::Drawing::Size(311, 22);
			this->txtTournament->TabIndex = 111;
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(50, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(102, 16);
			this->label21->TabIndex = 89;
			this->label21->Text = L"CAMPEONATO";
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Controls->Add(this->pictureBox1);
			this->tabPage4->Controls->Add(this->btnDelete);
			this->tabPage4->Controls->Add(this->btnUpdate);
			this->tabPage4->Controls->Add(this->btnAdd);
			this->tabPage4->Controls->Add(this->comboBox28);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->comboBox26);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1116, 544);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Registros del Campeonato";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridView1->Location = System::Drawing::Point(475, 312);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(530, 150);
			this->dataGridView1->TabIndex = 115;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Torneo ";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 180;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Equipos";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 175;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Fechas";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			this->pictureBox1->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox1->Location = System::Drawing::Point(187, 156);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 143);
			this->pictureBox1->TabIndex = 114;
			this->pictureBox1->TabStop = false;
			this->btnDelete->Location = System::Drawing::Point(869, 223);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 23);
			this->btnDelete->TabIndex = 98;
			this->btnDelete->Text = L"ELIMINAR";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnUpdate->Location = System::Drawing::Point(673, 223);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(137, 23);
			this->btnUpdate->TabIndex = 97;
			this->btnUpdate->Text = L"MODIFICAR";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnAdd->Location = System::Drawing::Point(475, 223);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(137, 23);
			this->btnAdd->TabIndex = 96;
			this->btnAdd->Text = L"AGREGAR";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->comboBox28->FormattingEnabled = true;
			this->comboBox28->Location = System::Drawing::Point(161, 326);
			this->comboBox28->Name = L"comboBox28";
			this->comboBox28->Size = System::Drawing::Size(192, 24);
			this->comboBox28->TabIndex = 95;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(56, 326);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 16);
			this->label19->TabIndex = 94;
			this->label19->Text = L"Equipo";
			this->comboBox26->FormattingEnabled = true;
			this->comboBox26->Location = System::Drawing::Point(660, 113);
			this->comboBox26->Name = L"comboBox26";
			this->comboBox26->Size = System::Drawing::Size(235, 24);
			this->comboBox26->TabIndex = 89;
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(539, 116);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 16);
			this->label17->TabIndex = 88;
			this->label17->Text = L"CAMPEONATO";
			this->tabPage1->Controls->Add(this->comboBox5);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->comboBox4);
			this->tabPage1->Controls->Add(this->comboBox3);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->dtpInidateResult);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->btnDeleteDate);
			this->tabPage1->Controls->Add(this->btnUpdateDate);
			this->tabPage1->Controls->Add(this->btnagregar);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->dgvDate);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1116, 544);
			this->tabPage1->TabIndex = 6;
			this->tabPage1->Text = L"Fecha de Partidos";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(956, 68);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(75, 24);
			this->comboBox5->TabIndex = 157;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(895, 73);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 16);
			this->label13->TabIndex = 156;
			this->label13->Text = L"HORA";
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(820, 124);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(173, 24);
			this->comboBox4->TabIndex = 155;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(503, 124);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(173, 24);
			this->comboBox3->TabIndex = 154;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(734, 127);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(69, 16);
			this->label12->TabIndex = 153;
			this->label12->Text = L"ESTADIO:";
			this->dtpInidateResult->Location = System::Drawing::Point(583, 70);
			this->dtpInidateResult->Margin = System::Windows::Forms::Padding(4);
			this->dtpInidateResult->Name = L"dtpInidateResult";
			this->dtpInidateResult->Size = System::Drawing::Size(265, 22);
			this->dtpInidateResult->TabIndex = 152;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(432, 127);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 16);
			this->label11->TabIndex = 151;
			this->label11->Text = L"ARBITRO";
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(432, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(144, 16);
			this->label10->TabIndex = 150;
			this->label10->Text = L"FECHA DEL PARTIDO";
			this->btnDeleteDate->Location = System::Drawing::Point(645, 208);
			this->btnDeleteDate->Name = L"btnDeleteDate";
			this->btnDeleteDate->Size = System::Drawing::Size(75, 23);
			this->btnDeleteDate->TabIndex = 149;
			this->btnDeleteDate->Text = L"Eliminar";
			this->btnDeleteDate->UseVisualStyleBackColor = true;
			this->btnUpdateDate->Location = System::Drawing::Point(481, 208);
			this->btnUpdateDate->Name = L"btnUpdateDate";
			this->btnUpdateDate->Size = System::Drawing::Size(75, 23);
			this->btnUpdateDate->TabIndex = 148;
			this->btnUpdateDate->Text = L"Modificar";
			this->btnUpdateDate->UseVisualStyleBackColor = true;
			this->btnagregar->Location = System::Drawing::Point(310, 208);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(75, 23);
			this->btnagregar->TabIndex = 147;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = true;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(50, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 16);
			this->label8->TabIndex = 146;
			this->label8->Text = L"EQUIPO VISITANTE";
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(51, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 16);
			this->label9->TabIndex = 145;
			this->label9->Text = L"EQUIPO LOCAL";
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(198, 68);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(173, 24);
			this->comboBox2->TabIndex = 144;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(198, 119);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 24);
			this->comboBox1->TabIndex = 143;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 142;
			this->label2->Text = L"FECHA";
			this->textBox11->Location = System::Drawing::Point(109, 24);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(44, 22);
			this->textBox11->TabIndex = 141;
			this->dgvDate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDate->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Time, this->TimeLine,
					this->TeamVisitante, this->Referee, this->Stadium
			});
			this->dgvDate->Location = System::Drawing::Point(136, 258);
			this->dgvDate->Name = L"dgvDate";
			this->dgvDate->RowHeadersWidth = 51;
			this->dgvDate->RowTemplate->Height = 24;
			this->dgvDate->Size = System::Drawing::Size(781, 212);
			this->dgvDate->TabIndex = 140;
			this->Time->HeaderText = L"Fecha";
			this->Time->MinimumWidth = 6;
			this->Time->Name = L"Time";
			this->Time->Width = 80;
			this->TimeLine->HeaderText = L"Equipo Local";
			this->TimeLine->MinimumWidth = 6;
			this->TimeLine->Name = L"TimeLine";
			this->TimeLine->Width = 200;
			this->TeamVisitante->HeaderText = L"Equipo Visitante";
			this->TeamVisitante->MinimumWidth = 6;
			this->TeamVisitante->Name = L"TeamVisitante";
			this->TeamVisitante->Width = 200;
			this->Referee->HeaderText = L"Arbitro";
			this->Referee->MinimumWidth = 6;
			this->Referee->Name = L"Referee";
			this->Referee->Width = 125;
			this->Stadium->HeaderText = L"Estadio";
			this->Stadium->MinimumWidth = 6;
			this->Stadium->Name = L"Stadium";
			this->Stadium->Width = 125;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1136, 597);
			this->Controls->Add(this->tabControl1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDate))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

public: void RefreshTournament();

private: System::Void btnAddTournament_Click(System::Object^ sender, System::EventArgs^ e) {
	Tournament^ u = gcnew Tournament();
		u->Id = Int32::Parse(txtTournamentId->Text);
		u->NameTournament = txtTournament->Text;
		
		u->Surname = txtSurnameOrganizer->Text;
		u->Name = txtNameOrganizer->Text;
		
		u->Premio = txtPremioOrganizer->Text;
		u->Inidate = dtpInidate->Value.ToString("yyyy-MM-dd");
		u->Enddate = dtpEnddate->Value.ToString("yyyy-MM-dd");
		u->Status = 'A';
		if (ptTournament != nullptr && ptTournament->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			ptTournament->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			u->Photo = ms->ToArray();

		}
	Controller::AddTournaments(u);
	RefreshTournament();
	ClearTournament();
}
private: System::Void btnUpdateTournament_Click(System::Object^ sender, System::EventArgs^ e) {
	Tournament^ u = gcnew Tournament();
	u->Id = Int32::Parse(txtTournamentId->Text);
	u->NameTournament = txtTournament->Text;
	
	u->Surname = txtSurnameOrganizer->Text;
	u->Name = txtNameOrganizer->Text;
	
	u->Premio = txtPremioOrganizer->Text;
	u->Inidate = dtpInidate->Value.ToString("yyyy-MM-dd");
	u->Enddate = dtpEnddate->Value.ToString("yyyy-MM-dd");
	u->Status = 'A';
	if (ptTournament != nullptr && ptTournament->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		ptTournament->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		u->Photo = ms->ToArray();

	}
	Controller::UpdateTournaments(u);
	RefreshTournament();



}
private: System::Void btnDeleteTournament_Click(System::Object^ sender, System::EventArgs^ e) {

	int tournamentsId = Int32::Parse(txtTournamentId->Text);
	Controller::DeleteTournaments(tournamentsId);
	RefreshTournament();
	ClearTournament();

}



	   Void ClearTournament() {
		   txtTournamentId->Clear();
		   txtTournamentId->Clear();
		   txtTournament->Clear();
		 
		   txtSurnameOrganizer->Clear();
		   txtNameOrganizer->Clear();
		  
		   txtPremioOrganizer->Clear();
		   //dtpEnddate->Value.ToString("yyyy-MM-dd")->Clear();


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
	int tournamentsId = Int32::Parse(dgvTournament->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Tournament^ u = Controller::QueryTournamentsById(tournamentsId);
	txtTournamentId->Text = "" + u->Id;
	txtTournament->Text = u->NameTournament;
	txtNameOrganizer->Text = u->Name;
	txtSurnameOrganizer->Text = u->Surname;
	if (u->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(u->Photo);
		ptTournament->Image = Image::FromStream(ms);
	}
	else {
		ptTournament->Image = nullptr;
		ptTournament->Invalidate();
	}
}
private: System::Void TournamentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshTournament();
}

private: System::Void comboBox28_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dtpInidateResult_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
