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


	/// <summary>
	/// Resumen de TeamsForm
	/// </summary>
	public ref class TeamsForm : public System::Windows::Forms::Form
	{
	public:
		TeamsForm(void)
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
		~TeamsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtTeam;
	private: System::Windows::Forms::ComboBox^ cbmTeamsTour;

	private: System::Windows::Forms::PictureBox^ pbphototeam;

	protected:

	protected:




	private: System::Windows::Forms::Button^ btnDeleteTeam;

	private: System::Windows::Forms::Button^ btnUpdateTeam;

	private: System::Windows::Forms::Button^ btnAddTeam;


	private: System::Windows::Forms::DataGridView^ dgvTeams;

	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtTeamId;


	private: System::Windows::Forms::Button^ btn;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevosEquiposToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarEquiposToolStripMenuItem1;
	private: System::Windows::Forms::ComboBox^ cmbEquiDT;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txrTeamNum;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ teamId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ team;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameDT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ surnameDT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ teamTournament;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ bttSearchTeam;





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
			this->txtTeam = (gcnew System::Windows::Forms::TextBox());
			this->cbmTeamsTour = (gcnew System::Windows::Forms::ComboBox());
			this->pbphototeam = (gcnew System::Windows::Forms::PictureBox());
			this->btnDeleteTeam = (gcnew System::Windows::Forms::Button());
			this->btnUpdateTeam = (gcnew System::Windows::Forms::Button());
			this->btnAddTeam = (gcnew System::Windows::Forms::Button());
			this->dgvTeams = (gcnew System::Windows::Forms::DataGridView());
			this->teamId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->team = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameDT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->surnameDT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->teamTournament = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtTeamId = (gcnew System::Windows::Forms::TextBox());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nuevosEquiposToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarEquiposToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmbEquiDT = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txrTeamNum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bttSearchTeam = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphototeam))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTeams))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtTeam
			// 
			this->txtTeam->Location = System::Drawing::Point(100, 68);
			this->txtTeam->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtTeam->Name = L"txtTeam";
			this->txtTeam->Size = System::Drawing::Size(164, 20);
			this->txtTeam->TabIndex = 10;
			// 
			// cbmTeamsTour
			// 
			this->cbmTeamsTour->FormattingEnabled = true;
			this->cbmTeamsTour->Location = System::Drawing::Point(100, 136);
			this->cbmTeamsTour->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cbmTeamsTour->Name = L"cbmTeamsTour";
			this->cbmTeamsTour->Size = System::Drawing::Size(145, 21);
			this->cbmTeamsTour->TabIndex = 16;
			// 
			// pbphototeam
			// 
			this->pbphototeam->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pbphototeam->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbphototeam->Location = System::Drawing::Point(392, 46);
			this->pbphototeam->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pbphototeam->Name = L"pbphototeam";
			this->pbphototeam->Size = System::Drawing::Size(231, 154);
			this->pbphototeam->TabIndex = 19;
			this->pbphototeam->TabStop = false;
			// 
			// btnDeleteTeam
			// 
			this->btnDeleteTeam->Location = System::Drawing::Point(292, 224);
			this->btnDeleteTeam->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnDeleteTeam->Name = L"btnDeleteTeam";
			this->btnDeleteTeam->Size = System::Drawing::Size(103, 19);
			this->btnDeleteTeam->TabIndex = 26;
			this->btnDeleteTeam->Text = L"ELIMINAR";
			this->btnDeleteTeam->UseVisualStyleBackColor = true;
			this->btnDeleteTeam->Click += gcnew System::EventHandler(this, &TeamsForm::btnDeleteTeam_Click);
			// 
			// btnUpdateTeam
			// 
			this->btnUpdateTeam->Location = System::Drawing::Point(160, 224);
			this->btnUpdateTeam->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnUpdateTeam->Name = L"btnUpdateTeam";
			this->btnUpdateTeam->Size = System::Drawing::Size(103, 19);
			this->btnUpdateTeam->TabIndex = 25;
			this->btnUpdateTeam->Text = L"MODIFICAR";
			this->btnUpdateTeam->UseVisualStyleBackColor = true;
			this->btnUpdateTeam->Click += gcnew System::EventHandler(this, &TeamsForm::btnUpdateTeam_Click);
			// 
			// btnAddTeam
			// 
			this->btnAddTeam->Location = System::Drawing::Point(29, 224);
			this->btnAddTeam->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnAddTeam->Name = L"btnAddTeam";
			this->btnAddTeam->Size = System::Drawing::Size(103, 19);
			this->btnAddTeam->TabIndex = 24;
			this->btnAddTeam->Text = L"AGREGAR";
			this->btnAddTeam->UseVisualStyleBackColor = true;
			this->btnAddTeam->Click += gcnew System::EventHandler(this, &TeamsForm::btnAddTeam_Click);
			// 
			// dgvTeams
			// 
			this->dgvTeams->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTeams->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->teamId, this->team,
					this->nameDT, this->surnameDT, this->teamTournament
			});
			this->dgvTeams->Location = System::Drawing::Point(45, 263);
			this->dgvTeams->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dgvTeams->Name = L"dgvTeams";
			this->dgvTeams->RowHeadersWidth = 51;
			this->dgvTeams->RowTemplate->Height = 24;
			this->dgvTeams->Size = System::Drawing::Size(563, 200);
			this->dgvTeams->TabIndex = 29;
			this->dgvTeams->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeamsForm::dgvTeams_CellClick);
			// 
			// teamId
			// 
			this->teamId->HeaderText = L"Id";
			this->teamId->MinimumWidth = 6;
			this->teamId->Name = L"teamId";
			this->teamId->Width = 125;
			// 
			// team
			// 
			this->team->HeaderText = L"Equipos";
			this->team->MinimumWidth = 6;
			this->team->Name = L"team";
			this->team->Width = 150;
			// 
			// nameDT
			// 
			this->nameDT->HeaderText = L"NombresDT";
			this->nameDT->MinimumWidth = 6;
			this->nameDT->Name = L"nameDT";
			this->nameDT->Width = 149;
			// 
			// surnameDT
			// 
			this->surnameDT->HeaderText = L"Campeonato";
			this->surnameDT->MinimumWidth = 6;
			this->surnameDT->Name = L"surnameDT";
			this->surnameDT->Width = 150;
			// 
			// teamTournament
			// 
			this->teamTournament->HeaderText = L"Jugadores";
			this->teamTournament->MinimumWidth = 6;
			this->teamTournament->Name = L"teamTournament";
			this->teamTournament->Width = 150;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 70);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Equipo";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 139);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 13);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Campeonatos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 40);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Id";
			// 
			// txtTeamId
			// 
			this->txtTeamId->Location = System::Drawing::Point(100, 32);
			this->txtTeamId->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtTeamId->Name = L"txtTeamId";
			this->txtTeamId->Size = System::Drawing::Size(59, 20);
			this->txtTeamId->TabIndex = 38;
			// 
			// btn
			// 
			this->btn->Location = System::Drawing::Point(463, 211);
			this->btn->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(103, 32);
			this->btn->TabIndex = 39;
			this->btn->Text = L"Agregar Foto";
			this->btn->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevosEquiposToolStripMenuItem1,
					this->modificarEquiposToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(685, 24);
			this->menuStrip1->TabIndex = 40;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nuevosEquiposToolStripMenuItem1
			// 
			this->nuevosEquiposToolStripMenuItem1->Name = L"nuevosEquiposToolStripMenuItem1";
			this->nuevosEquiposToolStripMenuItem1->Size = System::Drawing::Size(104, 22);
			this->nuevosEquiposToolStripMenuItem1->Text = L"Nuevos Equipos";
			this->nuevosEquiposToolStripMenuItem1->Click += gcnew System::EventHandler(this, &TeamsForm::nuevosEquiposToolStripMenuItem1_Click);
			// 
			// modificarEquiposToolStripMenuItem1
			// 
			this->modificarEquiposToolStripMenuItem1->Name = L"modificarEquiposToolStripMenuItem1";
			this->modificarEquiposToolStripMenuItem1->Size = System::Drawing::Size(115, 22);
			this->modificarEquiposToolStripMenuItem1->Text = L"Modificar Equipos";
			this->modificarEquiposToolStripMenuItem1->Click += gcnew System::EventHandler(this, &TeamsForm::modificarEquiposToolStripMenuItem1_Click);
			// 
			// cmbEquiDT
			// 
			this->cmbEquiDT->FormattingEnabled = true;
			this->cmbEquiDT->Location = System::Drawing::Point(100, 99);
			this->cmbEquiDT->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->cmbEquiDT->Name = L"cmbEquiDT";
			this->cmbEquiDT->Size = System::Drawing::Size(145, 21);
			this->cmbEquiDT->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 180);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Jugadores";
			// 
			// txrTeamNum
			// 
			this->txrTeamNum->Location = System::Drawing::Point(100, 180);
			this->txrTeamNum->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txrTeamNum->Name = L"txrTeamNum";
			this->txrTeamNum->Size = System::Drawing::Size(60, 20);
			this->txrTeamNum->TabIndex = 43;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 103);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Nombre (DT)";
			// 
			// bttSearchTeam
			// 
			this->bttSearchTeam->Location = System::Drawing::Point(263, 123);
			this->bttSearchTeam->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->bttSearchTeam->Name = L"bttSearchTeam";
			this->bttSearchTeam->Size = System::Drawing::Size(103, 19);
			this->bttSearchTeam->TabIndex = 45;
			this->bttSearchTeam->Text = L"BUSCAR";
			this->bttSearchTeam->UseVisualStyleBackColor = true;
			this->bttSearchTeam->Click += gcnew System::EventHandler(this, &TeamsForm::bttSearchTeam_Click);
			// 
			// TeamsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(685, 487);
			this->Controls->Add(this->bttSearchTeam);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txrTeamNum);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbEquiDT);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->txtTeamId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvTeams);
			this->Controls->Add(this->btnDeleteTeam);
			this->Controls->Add(this->btnUpdateTeam);
			this->Controls->Add(this->btnAddTeam);
			this->Controls->Add(this->pbphototeam);
			this->Controls->Add(this->cbmTeamsTour);
			this->Controls->Add(this->txtTeam);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"TeamsForm";
			this->Text = L"Registro de Equipos";
			this->Load += gcnew System::EventHandler(this, &TeamsForm::TeamsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphototeam))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTeams))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


//Métodos Implementados	

public: Void RefreshTeamDGV() {
	List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
	dgvTeams->Rows->Clear();
	for (int i = 0; i < footballteamsList->Count; i++) {
		dgvTeams->Rows->Add(gcnew array<String^>{
			"" + footballteamsList[i]->Id,
				footballteamsList[i]->NameTeam,
				footballteamsList[i]->DT->Name,
				footballteamsList[i]->Tournament->NameTournament,
			"" + footballteamsList[i]->numplayers,
		});

	}
	return Void();

}
private: System::Void btnAddTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cbmTeamsTour->SelectedIndex >= 0 && cmbEquiDT->SelectedIndex >= 0 && txtTeamId->Text!="" && txrTeamNum->Text!="" && txtTeam->Text!="") {
		Footballteams^ t = gcnew Footballteams();
		t->Id = Int32::Parse(txtTeamId->Text);
		t->NameTeam = txtTeam->Text;
		t->numplayers = Int32::Parse(txrTeamNum->Text);
		t->Tournament = Dato();
		t->DT = Dato2();
		t->pj = 0;
		t->pg = 0;
		t->pe = 0;
		t->pp = 0;
		if (pbphototeam != nullptr && pbphototeam->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbphototeam->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			t->Photo = ms->ToArray();
		}
		Controller::AddFootballteams(t);
		RefreshTeamDGV();
		ClearControlsTeam();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnUpdateTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cbmTeamsTour->SelectedIndex >= 0 && cmbEquiDT->SelectedIndex >= 0 && txtTeamId->Text != "" && txrTeamNum->Text != "" && txtTeam->Text != "") {
		Tournament^ to = Dato();
		DT^ dt = Dato2();
		Footballteams^ t = gcnew Footballteams();
		t->Id = Int32::Parse(txtTeamId->Text);
		t->NameTeam = txtTeam->Text;
		t->numplayers = Int32::Parse(txrTeamNum->Text);
		t->Tournament = to;
		t->DT = dt;
		t->pj = 0;
		t->pg = 0;
		t->pe = 0;
		t->pp = 0;
		if (pbphototeam != nullptr && pbphototeam->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbphototeam->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			t->Photo = ms->ToArray();

		}
		Controller::UpdateFootballteams(t);
		RefreshTeamDGV();
	}
	else {
		MessageBox::Show("Completa todos los datos");
	}
}
private: System::Void btnDeleteTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtTeamId->Text != "") {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("¿Está seguro de eliminar?", "Confirmación", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			int footballteamsId = Int32::Parse(txtTeamId->Text);
			Controller::DeleteFootballteams(footballteamsId);
			RefreshTeamDGV();
			ClearControlsTeam();
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
private: System::Void bttSearchTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cbmTeamsTour->Text != "" && cmbEquiDT->Text != "") {
		List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
		dgvTeams->Rows->Clear();
		Tournament^ o = Dato();
		DT^ d = Dato2();
		for (int i = 0; i < footballteamsList->Count; i++) {
			if (o->Id == footballteamsList[i]->Tournament->Id && d->Id == footballteamsList[i]->DT->Id) {
				dgvTeams->Rows->Add(gcnew array<String^>{
					"" + footballteamsList[i]->Id,
						footballteamsList[i]->NameTeam,
						footballteamsList[i]->DT->Name,
						footballteamsList[i]->Tournament->NameTournament,
						"" + footballteamsList[i]->numplayers,
				});
			}
		}
		int selectedRowIndex = dgvTeams->RowCount;
		if (selectedRowIndex == 1) {
			MessageBox::Show("No se encontraron datos");
		}
	}
	else if (cbmTeamsTour->Text != "") {
		List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
		dgvTeams->Rows->Clear();
		Tournament^ o = Dato();
		for (int i = 0; i < footballteamsList->Count; i++) {
			if (o->Id == footballteamsList[i]->Tournament->Id) {
				dgvTeams->Rows->Add(gcnew array<String^>{
					"" + footballteamsList[i]->Id,
						footballteamsList[i]->NameTeam,
						footballteamsList[i]->DT->Name,
						footballteamsList[i]->Tournament->NameTournament,
						"" + footballteamsList[i]->numplayers,
				});
			}
		}
		int selectedRowIndex = dgvTeams->RowCount;
		if (selectedRowIndex == 1) {
			MessageBox::Show("No se encontraron datos");
		}
	}
	else if (cmbEquiDT->Text != "") {
		List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
		dgvTeams->Rows->Clear();
		DT^ d = Dato2();
		for (int i = 0; i < footballteamsList->Count; i++) {
			if (d->Id == footballteamsList[i]->DT->Id) {
				dgvTeams->Rows->Add(gcnew array<String^>{
					"" + footballteamsList[i]->Id,
						footballteamsList[i]->NameTeam,
						footballteamsList[i]->DT->Name,
						footballteamsList[i]->Tournament->NameTournament,
						"" + footballteamsList[i]->numplayers,
				});
			}
		}
		int selectedRowIndex = dgvTeams->RowCount;
		if (selectedRowIndex == 1) {
			MessageBox::Show("No se encontraron datos");
		}
	}
	else {
		MessageBox::Show("Selecciona un DT o Campeonato");
	}
}
void ClearControlsTeam() {
		   txtTeamId->Clear();
		   txtTeam->Clear();
		   cmbEquiDT->Text="";
		   cbmTeamsTour->Text = "";
		   txrTeamNum->Clear();
		  pbphototeam->Image = nullptr;
	   }
private: System::Void dgvTeams_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvTeams->CurrentCell != nullptr &&
		dgvTeams->CurrentCell->Value != nullptr &&
		dgvTeams->CurrentCell->Value->ToString() != "") {
		int selectedRowIndex = dgvTeams->SelectedCells[0]->RowIndex;
		int footballteamsId = Int32::Parse(dgvTeams->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Footballteams^ t = Controller::QueryFootballteamsById(footballteamsId);
		txtTeamId->Text = "" + t->Id;
		txtTeam->Text = t->NameTeam;
		txrTeamNum->Text = "" + t->numplayers;
		cmbEquiDT->Text = t->DT->Name + " " + t->DT->Surname;
		cbmTeamsTour->Text = "" + t->Tournament->NameTournament;
		if (t->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(t->Photo);
			pbphototeam->Image = Image::FromStream(ms);
		}
		else {
			pbphototeam->Image = nullptr;
			pbphototeam->Invalidate();
		}
		RefreshTeamDGV();
	}
	
}
private: System::Void pbphototeam_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbphototeam->Image = gcnew Bitmap(opnfd->FileName);
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------------

//Botones
private: System::Void nuevosEquiposToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsTeam();
	btnAddTeam->Enabled = true;
	btnUpdateTeam->Enabled = false;
	btnDeleteTeam->Enabled = false;
	cmbEquiDT->Enabled = true;
	cbmTeamsTour->Enabled = true;
	txrTeamNum->Enabled = true;
	txtTeam->Enabled = true;
	txtTeamId->Enabled = true;
	bttSearchTeam->Enabled = true;
}
private: System::Void modificarEquiposToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsTeam();
	btnAddTeam->Enabled = false;
	btnUpdateTeam->Enabled = true;
	btnDeleteTeam->Enabled = true;
	cmbEquiDT->Enabled = true;
	cbmTeamsTour->Enabled = true;
	txrTeamNum->Enabled = true;
	txtTeam->Enabled = true;
	txtTeamId->Enabled = true;
	bttSearchTeam->Enabled = true;
}
//-------------------------------------------------------------------------------------------------------------------------------------------

 //Actualizar datos
private: System::Void TeamsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshTeamDGV();
	FillcbmTeamsTour();
	FillcmbEquiDT();
	Dato();
	Dato2();

	ClearControlsTeam();
	btnAddTeam->Enabled = false;
	btnUpdateTeam->Enabled = false;
	btnDeleteTeam->Enabled = false;

	cmbEquiDT->Enabled = false;
	cbmTeamsTour->Enabled = false;
	txrTeamNum->Enabled = false;
	txtTeam->Enabled = false;
	txtTeamId->Enabled = false;
	bttSearchTeam->Enabled = false;
}
void FillcbmTeamsTour() {
	cbmTeamsTour->Items->Clear();
	List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
	for (int i = 0; i < tournamentList->Count; i++) {
		cbmTeamsTour->Items->Add(tournamentList[i]->NameTournament);
	}
	Dato();
}
void FillcmbEquiDT() {
	cmbEquiDT->Items->Clear();
	List <DT^>^ DtList = Controller::QueryAllDt();
	for (int i = 0; i < DtList->Count; i++) {
		cmbEquiDT->Items->Add(DtList[i]->Name + " " + DtList[i]->Surname);
	}
	Dato2();
}
Tournament^ Dato() {
	Tournament^ t = gcnew Tournament();
	t = nullptr;
	if (cbmTeamsTour->SelectedIndex >= 0) {
		List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		t = tournamentList[cbmTeamsTour->SelectedIndex];
		return t;
	}
	else {
		  return t;
	}
}
DT^ Dato2() {
	DT^ Dt = gcnew DT();
	Dt = nullptr;
	if (cmbEquiDT->SelectedIndex >= 0) {
		List <DT^>^ DtList = Controller::QueryAllDt();
		Dt = DtList[cmbEquiDT->SelectedIndex];
		return Dt;
	}
	else {
		return Dt;
	}
}
//---------------------------------------------------------------------------------------------------------------------------------------------------




};
}
