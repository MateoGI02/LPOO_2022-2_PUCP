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
	private: System::Windows::Forms::ComboBox^ cbmTeams;
	private: System::Windows::Forms::PictureBox^ pbphototeam;

	protected:

	protected:







	private: System::Windows::Forms::TextBox^ txtNameDT;


	private: System::Windows::Forms::TextBox^ txtSurNameDT;

	private: System::Windows::Forms::Button^ btnDeleteTeam;



	private: System::Windows::Forms::Button^ btnUpdateTeam;

	private: System::Windows::Forms::Button^ btnAddTeam;


	private: System::Windows::Forms::DataGridView^ dgvTeams;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label9;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtTeamId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ teamId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ team;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameDT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ surnameDT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ teamTournament;
	private: System::Windows::Forms::Button^ btn;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevosEquiposToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarEquiposToolStripMenuItem1;


















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
			this->cbmTeams = (gcnew System::Windows::Forms::ComboBox());
			this->pbphototeam = (gcnew System::Windows::Forms::PictureBox());
			this->txtNameDT = (gcnew System::Windows::Forms::TextBox());
			this->txtSurNameDT = (gcnew System::Windows::Forms::TextBox());
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtTeamId = (gcnew System::Windows::Forms::TextBox());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nuevosEquiposToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarEquiposToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphototeam))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTeams))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtTeam
			// 
			this->txtTeam->Location = System::Drawing::Point(133, 83);
			this->txtTeam->Name = L"txtTeam";
			this->txtTeam->Size = System::Drawing::Size(217, 22);
			this->txtTeam->TabIndex = 10;
			// 
			// cbmTeams
			// 
			this->cbmTeams->FormattingEnabled = true;
			this->cbmTeams->Location = System::Drawing::Point(132, 214);
			this->cbmTeams->Name = L"cbmTeams";
			this->cbmTeams->Size = System::Drawing::Size(192, 24);
			this->cbmTeams->TabIndex = 16;
			// 
			// pbphototeam
			// 
			this->pbphototeam->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pbphototeam->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbphototeam->Location = System::Drawing::Point(493, 50);
			this->pbphototeam->Name = L"pbphototeam";
			this->pbphototeam->Size = System::Drawing::Size(307, 188);
			this->pbphototeam->TabIndex = 19;
			this->pbphototeam->TabStop = false;
			// 
			// txtNameDT
			// 
			this->txtNameDT->Location = System::Drawing::Point(132, 164);
			this->txtNameDT->Name = L"txtNameDT";
			this->txtNameDT->Size = System::Drawing::Size(217, 22);
			this->txtNameDT->TabIndex = 21;
			// 
			// txtSurNameDT
			// 
			this->txtSurNameDT->Location = System::Drawing::Point(132, 122);
			this->txtSurNameDT->Name = L"txtSurNameDT";
			this->txtSurNameDT->Size = System::Drawing::Size(217, 22);
			this->txtSurNameDT->TabIndex = 22;
			// 
			// btnDeleteTeam
			// 
			this->btnDeleteTeam->Location = System::Drawing::Point(579, 320);
			this->btnDeleteTeam->Name = L"btnDeleteTeam";
			this->btnDeleteTeam->Size = System::Drawing::Size(137, 23);
			this->btnDeleteTeam->TabIndex = 26;
			this->btnDeleteTeam->Text = L"ELIMINAR";
			this->btnDeleteTeam->UseVisualStyleBackColor = true;
			this->btnDeleteTeam->Click += gcnew System::EventHandler(this, &TeamsForm::btnDeleteTeam_Click);
			// 
			// btnUpdateTeam
			// 
			this->btnUpdateTeam->Location = System::Drawing::Point(383, 320);
			this->btnUpdateTeam->Name = L"btnUpdateTeam";
			this->btnUpdateTeam->Size = System::Drawing::Size(137, 23);
			this->btnUpdateTeam->TabIndex = 25;
			this->btnUpdateTeam->Text = L"MODIFICAR";
			this->btnUpdateTeam->UseVisualStyleBackColor = true;
			this->btnUpdateTeam->Click += gcnew System::EventHandler(this, &TeamsForm::btnUpdateTeam_Click);
			// 
			// btnAddTeam
			// 
			this->btnAddTeam->Location = System::Drawing::Point(185, 320);
			this->btnAddTeam->Name = L"btnAddTeam";
			this->btnAddTeam->Size = System::Drawing::Size(137, 23);
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
			this->dgvTeams->Location = System::Drawing::Point(60, 376);
			this->dgvTeams->Name = L"dgvTeams";
			this->dgvTeams->RowHeadersWidth = 51;
			this->dgvTeams->RowTemplate->Height = 24;
			this->dgvTeams->Size = System::Drawing::Size(751, 193);
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
			this->nameDT->HeaderText = L"Nombres ";
			this->nameDT->MinimumWidth = 6;
			this->nameDT->Name = L"nameDT";
			this->nameDT->Width = 149;
			// 
			// surnameDT
			// 
			this->surnameDT->HeaderText = L"Apellidos ";
			this->surnameDT->MinimumWidth = 6;
			this->surnameDT->Name = L"surnameDT";
			this->surnameDT->Width = 150;
			// 
			// teamTournament
			// 
			this->teamTournament->HeaderText = L"Torneo ";
			this->teamTournament->MinimumWidth = 6;
			this->teamTournament->Name = L"teamTournament";
			this->teamTournament->Width = 150;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Equipo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 16);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Apellido (DT)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 16);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Nombres (DT)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 222);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 16);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Campeonatos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Id";
			// 
			// txtTeamId
			// 
			this->txtTeamId->Location = System::Drawing::Point(133, 40);
			this->txtTeamId->Name = L"txtTeamId";
			this->txtTeamId->Size = System::Drawing::Size(77, 22);
			this->txtTeamId->TabIndex = 38;
			// 
			// btn
			// 
			this->btn->Location = System::Drawing::Point(583, 259);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(137, 39);
			this->btn->TabIndex = 39;
			this->btn->Text = L"Agregar Foto";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &TeamsForm::pbphototeam_Click);
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
			this->menuStrip1->Size = System::Drawing::Size(914, 28);
			this->menuStrip1->TabIndex = 40;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nuevosEquiposToolStripMenuItem1
			// 
			this->nuevosEquiposToolStripMenuItem1->Name = L"nuevosEquiposToolStripMenuItem1";
			this->nuevosEquiposToolStripMenuItem1->Size = System::Drawing::Size(129, 24);
			this->nuevosEquiposToolStripMenuItem1->Text = L"Nuevos Equipos";
			this->nuevosEquiposToolStripMenuItem1->Click += gcnew System::EventHandler(this, &TeamsForm::nuevosEquiposToolStripMenuItem1_Click);
			// 
			// modificarEquiposToolStripMenuItem1
			// 
			this->modificarEquiposToolStripMenuItem1->Name = L"modificarEquiposToolStripMenuItem1";
			this->modificarEquiposToolStripMenuItem1->Size = System::Drawing::Size(144, 24);
			this->modificarEquiposToolStripMenuItem1->Text = L"Modificar Equipos";
			this->modificarEquiposToolStripMenuItem1->Click += gcnew System::EventHandler(this, &TeamsForm::modificarEquiposToolStripMenuItem1_Click);
			// 
			// TeamsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 625);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->txtTeamId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvTeams);
			this->Controls->Add(this->btnDeleteTeam);
			this->Controls->Add(this->btnUpdateTeam);
			this->Controls->Add(this->btnAddTeam);
			this->Controls->Add(this->txtSurNameDT);
			this->Controls->Add(this->txtNameDT);
			this->Controls->Add(this->pbphototeam);
			this->Controls->Add(this->cbmTeams);
			this->Controls->Add(this->txtTeam);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
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

		
	public: Void RefreshTeamDGV();

private: System::Void btnAddTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	Footballteams^ t = gcnew Footballteams();
	t->Id= Int32::Parse(txtTeamId->Text);
	t->NameTeam = txtTeam->Text;
	t->Name = txtNameDT->Text;
	t->Surname = txtSurNameDT->Text;
	t->Status = 'A';
	if (pbphototeam != nullptr && pbphototeam->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbphototeam->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		t->Photo = ms->ToArray();

	}
	Controller::AddFootballteams(t);
	RefreshTeamDGV();
	ClearControlsTeam();


}
private: System::Void btnUpdateTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	Footballteams^ t = gcnew Footballteams();
	t->Id = Int32::Parse(txtTeamId->Text);
	t->NameTeam = txtTeam->Text;
	t->Name = txtNameDT->Text;
	t->Surname = txtSurNameDT->Text;
	
	
	t->Status = 'A';
	if (pbphototeam != nullptr && pbphototeam->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbphototeam->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		t->Photo = ms->ToArray();

	}
	Controller::UpdateFootballteams(t);
	RefreshTeamDGV();



}
private: System::Void btnDeleteTeam_Click(System::Object^ sender, System::EventArgs^ e) {

	int footballteamsId = Int32::Parse(txtTeamId->Text);
	Controller::DeleteFootballteams(footballteamsId);
	RefreshTeamDGV();
	ClearControlsTeam();


}
	   void ClearControlsTeam() {
		   txtTeamId->Clear();
		   txtTeam->Clear();
		   txtNameDT->Clear();
		   txtSurNameDT->Clear();
		  
		  pbphototeam->Image = nullptr;
	   }



private: System::Void dgvTeams_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvTeams->SelectedCells[0]->RowIndex;
	int footballteamsId = Int32::Parse(dgvTeams->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Footballteams^ t = Controller::QueryFootballteamsById(footballteamsId);
	txtTeamId->Text = "" + t->Id;
	txtTeam->Text = t->NameTeam;
	txtNameDT->Text = t->Name;
	txtSurNameDT->Text = t->Surname;
	if (t->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(t->Photo);
		pbphototeam->Image = Image::FromStream(ms);
	}
	else {
		pbphototeam->Image = nullptr;
		pbphototeam->Invalidate();
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

/*private: System::Void nuevosEquiposToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsTeam();
	btnAddTeam->Enabled = true;
	btnUpdateTeam->Enabled = false;
	btnDeleteTeam->Enabled = false;

}
private: System::Void modificarEquiposToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsTeam();
	btnAddTeam->Enabled = false;
	btnUpdateTeam->Enabled = true;
	btnDeleteTeam->Enabled = true;
}*/
private: System::Void TeamsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshTeamDGV();
}

private: System::Void nuevosEquiposToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsTeam();
	btnAddTeam->Enabled = true;
	btnUpdateTeam->Enabled = false;
	btnDeleteTeam->Enabled = false;
}
private: System::Void modificarEquiposToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControlsTeam();
	btnAddTeam->Enabled = false;
	btnUpdateTeam->Enabled = true;
	btnDeleteTeam->Enabled = true;
}
};
}
