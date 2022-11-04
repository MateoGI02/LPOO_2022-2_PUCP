#pragma once


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
	/// Resumen de FootballTeamForm
	/// </summary>
	public ref class PlayersForm : public System::Windows::Forms::Form
	{
	public:
		PlayersForm(void)
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
		~PlayersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ txt;
	private: System::Windows::Forms::TabPage^ playersForm;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ txtNames;
	private: System::Windows::Forms::DataGridView^ dgvPlayer;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ txtPosition;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ txtDocNumber;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ txtNumber;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ txtSurnames;
	private: System::Windows::Forms::Label^ txtTeam;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ txtNameReferee;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ txtDocReferee;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ txtSnameReferee;


	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlayerNum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlayerName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlayerPossicion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Torneos;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ txtTournament;
	private: System::Windows::Forms::Label^ label5;




	protected:



























































	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt = (gcnew System::Windows::Forms::TabControl());
			this->playersForm = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNames = (gcnew System::Windows::Forms::Label());
			this->dgvPlayer = (gcnew System::Windows::Forms::DataGridView());
			this->PlayerNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlayerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlayerPossicion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Torneos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtPosition = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->txtDocNumber = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->txtNumber = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txtSurnames = (gcnew System::Windows::Forms::Label());
			this->txtTeam = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtTournament = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->txtNameReferee = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->txtDocReferee = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->txtSnameReferee = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt->SuspendLayout();
			this->playersForm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// txt
			// 
			this->txt->Controls->Add(this->playersForm);
			this->txt->Controls->Add(this->tabPage2);
			this->txt->Controls->Add(this->tabPage3);
			this->txt->Location = System::Drawing::Point(12, 12);
			this->txt->Name = L"txt";
			this->txt->SelectedIndex = 0;
			this->txt->Size = System::Drawing::Size(692, 583);
			this->txt->TabIndex = 0;
			this->txt->Tag = L"";
			// 
			// playersForm
			// 
			this->playersForm->Controls->Add(this->textBox1);
			this->playersForm->Controls->Add(this->txtNames);
			this->playersForm->Controls->Add(this->dgvPlayer);
			this->playersForm->Controls->Add(this->pictureBox1);
			this->playersForm->Controls->Add(this->comboBox2);
			this->playersForm->Controls->Add(this->btnDelete);
			this->playersForm->Controls->Add(this->btnUpdate);
			this->playersForm->Controls->Add(this->btnAdd);
			this->playersForm->Controls->Add(this->comboBox1);
			this->playersForm->Controls->Add(this->txtPosition);
			this->playersForm->Controls->Add(this->textBox4);
			this->playersForm->Controls->Add(this->txtDocNumber);
			this->playersForm->Controls->Add(this->textBox3);
			this->playersForm->Controls->Add(this->txtNumber);
			this->playersForm->Controls->Add(this->textBox2);
			this->playersForm->Controls->Add(this->txtSurnames);
			this->playersForm->Controls->Add(this->txtTeam);
			this->playersForm->Location = System::Drawing::Point(4, 25);
			this->playersForm->Name = L"playersForm";
			this->playersForm->Padding = System::Windows::Forms::Padding(3);
			this->playersForm->Size = System::Drawing::Size(684, 554);
			this->playersForm->TabIndex = 0;
			this->playersForm->Text = L"Jugadores";
			this->playersForm->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 22);
			this->textBox1->TabIndex = 54;
			// 
			// txtNames
			// 
			this->txtNames->AutoSize = true;
			this->txtNames->Location = System::Drawing::Point(51, 119);
			this->txtNames->Name = L"txtNames";
			this->txtNames->Size = System::Drawing::Size(63, 16);
			this->txtNames->TabIndex = 53;
			this->txtNames->Text = L"Nombres";
			// 
			// dgvPlayer
			// 
			this->dgvPlayer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPlayer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->PlayerNum,
					this->PlayerName, this->PlayerPossicion, this->Torneos
			});
			this->dgvPlayer->Location = System::Drawing::Point(3, 345);
			this->dgvPlayer->Name = L"dgvPlayer";
			this->dgvPlayer->RowHeadersWidth = 51;
			this->dgvPlayer->RowTemplate->Height = 24;
			this->dgvPlayer->Size = System::Drawing::Size(667, 178);
			this->dgvPlayer->TabIndex = 52;
			// 
			// PlayerNum
			// 
			this->PlayerNum->HeaderText = L"DNI";
			this->PlayerNum->MinimumWidth = 6;
			this->PlayerNum->Name = L"PlayerNum";
			this->PlayerNum->Width = 90;
			// 
			// PlayerName
			// 
			this->PlayerName->HeaderText = L"Nombres";
			this->PlayerName->MinimumWidth = 6;
			this->PlayerName->Name = L"PlayerName";
			this->PlayerName->Width = 250;
			// 
			// PlayerPossicion
			// 
			this->PlayerPossicion->HeaderText = L"Posicion";
			this->PlayerPossicion->MinimumWidth = 6;
			this->PlayerPossicion->Name = L"PlayerPossicion";
			this->PlayerPossicion->Width = 150;
			// 
			// Torneos
			// 
			this->Torneos->HeaderText = L"Torneos";
			this->Torneos->MinimumWidth = 6;
			this->Torneos->Name = L"Torneos";
			this->Torneos->Width = 125;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(370, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 196);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(122, 193);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 50;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(476, 293);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 23);
			this->btnDelete->TabIndex = 49;
			this->btnDelete->Text = L"ELIMINAR";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(280, 293);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(137, 23);
			this->btnUpdate->TabIndex = 48;
			this->btnUpdate->Text = L"MODIFICAR";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(82, 293);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(137, 23);
			this->btnAdd->TabIndex = 47;
			this->btnAdd->Text = L"AGREGAR";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(122, 237);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 46;
			// 
			// txtPosition
			// 
			this->txtPosition->AutoSize = true;
			this->txtPosition->Location = System::Drawing::Point(51, 237);
			this->txtPosition->Name = L"txtPosition";
			this->txtPosition->Size = System::Drawing::Size(59, 16);
			this->txtPosition->TabIndex = 45;
			this->txtPosition->Text = L"Posicion";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(122, 44);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 44;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->AutoSize = true;
			this->txtDocNumber->Location = System::Drawing::Point(51, 44);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(30, 16);
			this->txtDocNumber->TabIndex = 43;
			this->txtDocNumber->Text = L"DNI";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 22);
			this->textBox3->TabIndex = 42;
			// 
			// txtNumber
			// 
			this->txtNumber->AutoSize = true;
			this->txtNumber->Location = System::Drawing::Point(51, 156);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(55, 16);
			this->txtNumber->TabIndex = 41;
			this->txtNumber->Text = L"Numero";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 22);
			this->textBox2->TabIndex = 40;
			// 
			// txtSurnames
			// 
			this->txtSurnames->AutoSize = true;
			this->txtSurnames->Location = System::Drawing::Point(51, 82);
			this->txtSurnames->Name = L"txtSurnames";
			this->txtSurnames->Size = System::Drawing::Size(64, 16);
			this->txtSurnames->TabIndex = 39;
			this->txtSurnames->Text = L"Apellidos";
			// 
			// txtTeam
			// 
			this->txtTeam->AutoSize = true;
			this->txtTeam->Location = System::Drawing::Point(51, 201);
			this->txtTeam->Name = L"txtTeam";
			this->txtTeam->Size = System::Drawing::Size(50, 16);
			this->txtTeam->TabIndex = 38;
			this->txtTeam->Text = L"Equipo";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txtTournament);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->txtNameReferee);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->txtDocReferee);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->txtSnameReferee);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(684, 554);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Arbitros";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// txtTournament
			// 
			this->txtTournament->AutoSize = true;
			this->txtTournament->Location = System::Drawing::Point(3, 225);
			this->txtTournament->Name = L"txtTournament";
			this->txtTournament->Size = System::Drawing::Size(92, 16);
			this->txtTournament->TabIndex = 70;
			this->txtTournament->Text = L"Campeonatos";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(464, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 23);
			this->button1->TabIndex = 69;
			this->button1->Text = L"ELIMINAR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(268, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 68;
			this->button2->Text = L"MODIFICAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(70, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 23);
			this->button3->TabIndex = 67;
			this->button3->Text = L"AGREGAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(100, 174);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(217, 22);
			this->textBox8->TabIndex = 66;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Edad";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->Edad, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 346);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(628, 150);
			this->dataGridView2->TabIndex = 64;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"DNI";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 90;
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Edad";
			this->Edad->MinimumWidth = 6;
			this->Edad->Name = L"Edad";
			this->Edad->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 250;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Torneos";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(100, 222);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(192, 24);
			this->comboBox3->TabIndex = 62;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(405, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(188, 196);
			this->pictureBox2->TabIndex = 61;
			this->pictureBox2->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(100, 130);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(217, 22);
			this->textBox5->TabIndex = 60;
			// 
			// txtNameReferee
			// 
			this->txtNameReferee->AutoSize = true;
			this->txtNameReferee->Location = System::Drawing::Point(29, 130);
			this->txtNameReferee->Name = L"txtNameReferee";
			this->txtNameReferee->Size = System::Drawing::Size(63, 16);
			this->txtNameReferee->TabIndex = 59;
			this->txtNameReferee->Text = L"Nombres";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(100, 33);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 58;
			// 
			// txtDocReferee
			// 
			this->txtDocReferee->AutoSize = true;
			this->txtDocReferee->Location = System::Drawing::Point(29, 33);
			this->txtDocReferee->Name = L"txtDocReferee";
			this->txtDocReferee->Size = System::Drawing::Size(30, 16);
			this->txtDocReferee->TabIndex = 57;
			this->txtDocReferee->Text = L"DNI";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(100, 82);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(217, 22);
			this->textBox7->TabIndex = 56;
			// 
			// txtSnameReferee
			// 
			this->txtSnameReferee->AutoSize = true;
			this->txtSnameReferee->Location = System::Drawing::Point(29, 82);
			this->txtSnameReferee->Name = L"txtSnameReferee";
			this->txtSnameReferee->Size = System::Drawing::Size(64, 16);
			this->txtSnameReferee->TabIndex = 55;
			this->txtSnameReferee->Text = L"Apellidos";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->comboBox4);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(684, 554);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Estadios";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 75;
			this->label5->Text = L"Campeonatos";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(99, 227);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(192, 24);
			this->comboBox4->TabIndex = 74;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn7
			});
			this->dataGridView3->Location = System::Drawing::Point(31, 366);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(600, 150);
			this->dataGridView3->TabIndex = 73;
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
			// button4
			// 
			this->button4->Location = System::Drawing::Point(466, 308);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 23);
			this->button4->TabIndex = 72;
			this->button4->Text = L"ELIMINAR";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(270, 308);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 23);
			this->button5->TabIndex = 71;
			this->button5->Text = L"MODIFICAR";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(72, 308);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 23);
			this->button6->TabIndex = 70;
			this->button6->Text = L"AGREGAR";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &PlayersForm::button6_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(99, 126);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(217, 22);
			this->textBox11->TabIndex = 69;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(99, 174);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(217, 22);
			this->textBox10->TabIndex = 68;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 65;
			this->label4->Text = L"Lugar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Direccion";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(353, 60);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(304, 211);
			this->pictureBox3->TabIndex = 63;
			this->pictureBox3->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(99, 73);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(217, 22);
			this->textBox9->TabIndex = 62;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Nombre";
			// 
			// TeamForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(716, 607);
			this->Controls->Add(this->txt);
			this->Name = L"TeamForm";
			this->Text = L"Inscripciones";
			
			this->txt->ResumeLayout(false);
			this->playersForm->ResumeLayout(false);
			this->playersForm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	


	public:
		void RefreshGrid() {
			List<Player^>^ playerList = Controller::QueryAllPlayers();
			dgvPlayer->Rows->Clear();
			for (int i = 0; i < playerList->Count; i++) {
				dgvPlayer->Rows->Add(gcnew array <String^>{
					"" + playerList[i]->Name,
						"" + playerList[i]->Surname,
						"" + playerList[i]->Position

				});
			}

		}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Player^ p = gcnew Player();
	p->Surname = txtSurnames->Text;
	p->Name = txtNames->Text;
	p->Number = Double::Parse(txtNumber->Text);
	p->Position = Int32::Parse(txtPosition->Text);
	Controller::AddPlayer(p);



}

};
}