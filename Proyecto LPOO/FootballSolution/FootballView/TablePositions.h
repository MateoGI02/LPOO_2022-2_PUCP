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
	/// Resumen de TablePositions
	/// </summary>
	public ref class TablePositions : public System::Windows::Forms::Form
	{
	public:
		TablePositions(void)
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
		~TablePositions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttTableTourPartido2;
	protected:
	private: System::Windows::Forms::ComboBox^ cmbTableMatchTour;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dgvTableTourSear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PUNTOS;











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
			this->bttTableTourPartido2 = (gcnew System::Windows::Forms::Button());
			this->cmbTableMatchTour = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dgvTableTourSear = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PUNTOS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTableTourSear))->BeginInit();
			this->SuspendLayout();
			// 
			// bttTableTourPartido2
			// 
			this->bttTableTourPartido2->Location = System::Drawing::Point(256, 29);
			this->bttTableTourPartido2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->bttTableTourPartido2->Name = L"bttTableTourPartido2";
			this->bttTableTourPartido2->Size = System::Drawing::Size(189, 19);
			this->bttTableTourPartido2->TabIndex = 166;
			this->bttTableTourPartido2->Text = L"SELECCIONAR CAMPEONATO";
			this->bttTableTourPartido2->UseVisualStyleBackColor = true;
			this->bttTableTourPartido2->Click += gcnew System::EventHandler(this, &TablePositions::bttTableTourPartido2_Click);
			// 
			// cmbTableMatchTour
			// 
			this->cmbTableMatchTour->FormattingEnabled = true;
			this->cmbTableMatchTour->Location = System::Drawing::Point(98, 28);
			this->cmbTableMatchTour->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbTableMatchTour->Name = L"cmbTableMatchTour";
			this->cmbTableMatchTour->Size = System::Drawing::Size(147, 21);
			this->cmbTableMatchTour->TabIndex = 165;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 28);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 164;
			this->label2->Text = L"Campeonato: ";
			// 
			// dgvTableTourSear
			// 
			this->dgvTableTourSear->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTableTourSear->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn4, this->Column1, this->Column2, this->PP, this->PUNTOS
			});
			this->dgvTableTourSear->Location = System::Drawing::Point(11, 74);
			this->dgvTableTourSear->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dgvTableTourSear->Name = L"dgvTableTourSear";
			this->dgvTableTourSear->RowHeadersWidth = 51;
			this->dgvTableTourSear->RowTemplate->Height = 24;
			this->dgvTableTourSear->Size = System::Drawing::Size(515, 456);
			this->dgvTableTourSear->TabIndex = 167;
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
			this->dataGridViewTextBoxColumn4->HeaderText = L"PJ";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"PG";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"PE";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// PP
			// 
			this->PP->HeaderText = L"PP";
			this->PP->MinimumWidth = 6;
			this->PP->Name = L"PP";
			this->PP->Width = 50;
			// 
			// PUNTOS
			// 
			this->PUNTOS->HeaderText = L"PUNTOS";
			this->PUNTOS->MinimumWidth = 6;
			this->PUNTOS->Name = L"PUNTOS";
			this->PUNTOS->Width = 70;
			// 
			// TablePositions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 542);
			this->Controls->Add(this->dgvTableTourSear);
			this->Controls->Add(this->bttTableTourPartido2);
			this->Controls->Add(this->cmbTableMatchTour);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"TablePositions";
			this->Text = L"Tabla de Posiciones";
			this->Load += gcnew System::EventHandler(this, &TablePositions::TablePositions_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTableTourSear))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void TablePositions_Load(System::Object^ sender, System::EventArgs^ e) {
	FillcmbTableMatchTour();
}

private: System::Void bttTableTourPartido2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbTableMatchTour->SelectedIndex >= 0) {
		List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
		dgvTableTourSear->Rows->Clear();
		Tournament^ o = Dato2();
		List <match^>^ matchList = Controller::QueryMatchByTournament(Dato2()->Id);
		for (int j = 0; j < footballteamsList->Count; j++) {
				footballteamsList[j]->pj =0;
			    footballteamsList[j]->pg =0;
				footballteamsList[j]->pe =0;
				footballteamsList[j]->pp =0;
				footballteamsList[j]->puntos = 0;
			Controller::UpdateFootballteams(footballteamsList[j]);
		}
		for (int i = 0; i < matchList->Count; i++) {
			if (matchList[i]->GolTeamLocal == "??" || matchList[i]->GolTeamVisit == "??") {
				//No hace nada
			}
			else {
				for (int j = 0; j < footballteamsList->Count; j++) {
					if (matchList[i]->TeamVisit->Id == footballteamsList[j]->Id) {
						footballteamsList[j]->pj += 1;
						if (Int32::Parse(matchList[i]->GolTeamVisit) > Int32::Parse(matchList[i]->GolTeamLocal)) {
							footballteamsList[j]->pg += 1;
						}
						else if (Int32::Parse(matchList[i]->GolTeamVisit) == Int32::Parse(matchList[i]->GolTeamLocal)) {
							footballteamsList[j]->pe += 1;
						}else{
							footballteamsList[j]->pp += 1;
						}
						footballteamsList[j]->puntos = footballteamsList[j]->pg * 3 + footballteamsList[j]->pe;
						Controller::UpdateFootballteams(footballteamsList[j]);
					}else if (matchList[i]->TeamLocal->Id == footballteamsList[j]->Id) {
						footballteamsList[j]->pj += 1;
						if (Int32::Parse(matchList[i]->GolTeamVisit) > Int32::Parse(matchList[i]->GolTeamLocal)) {
							footballteamsList[j]->pp += 1;
						}
						else if (Int32::Parse(matchList[i]->GolTeamVisit) == Int32::Parse(matchList[i]->GolTeamLocal)) {
							footballteamsList[j]->pe += 1;
						}
						else {
							footballteamsList[j]->pg += 1;
						}
						footballteamsList[j]->puntos = footballteamsList[j]->pg * 3 + footballteamsList[j]->pe;
						Controller::UpdateFootballteams(footballteamsList[j]);
					}
				}
			}
		}
		for (int i = 0; i < footballteamsList->Count; i++) {
			if (o->Id == footballteamsList[i]->Tournament->Id) {
				dgvTableTourSear->Rows->Add(gcnew array<String^>{
					footballteamsList[i]->NameTeam,
						"" + footballteamsList[i]->pj,
						"" + footballteamsList[i]->pg,
						"" + footballteamsList[i]->pe,
						"" + footballteamsList[i]->pp,
						"" + footballteamsList[i]->puntos,
				});
			}
		}
		int selectedRowIndex = dgvTableTourSear->RowCount;
		if (selectedRowIndex == 1) {
			MessageBox::Show("No se encontraron datos");
		}


	}
	else {
		MessageBox::Show("Seleccione un campeonato");
	}
}

//
Tournament^ Dato2() {
	Tournament^ o = gcnew Tournament();
	o = nullptr;
	if (cmbTableMatchTour->SelectedIndex >= 0) {
		List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		o = tournamentList[cmbTableMatchTour->SelectedIndex];
		return o;
	}
	else {
		return o;
	}
}
void FillcmbTableMatchTour() {
   cmbTableMatchTour->Items->Clear();
   List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
   for (int i = 0; i < tournamentList->Count; i++) {
	   cmbTableMatchTour->Items->Add(tournamentList[i]->NameTournament);
  }
}

};
}
