#pragma once
#include "ComboBoxItem.h"

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
	using namespace Threading;
	

	/// <summary>
	/// Resumen de Results
	/// </summary>
	public ref class Results1 : public System::Windows::Forms::Form
	{
	
		
	public:
		Results1(void)
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
		~Results1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
















	private: System::Windows::Forms::RadioButton^ rbtnMasc;
	private: System::Windows::Forms::ComboBox^ cmbresultados;
	private: System::Windows::Forms::Button^ btnSearchResultados;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ puntajesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ golesYTarjetasToolStripMenuItem;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;






















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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Results1::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->cmbresultados = (gcnew System::Windows::Forms::ComboBox());
			this->btnSearchResultados = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->puntajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->golesYTarjetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbresultados
			// 
			this->cmbresultados->FormattingEnabled = true;
			this->cmbresultados->Location = System::Drawing::Point(398, 143);
			this->cmbresultados->Name = L"cmbresultados";
			this->cmbresultados->Size = System::Drawing::Size(237, 24);
			this->cmbresultados->TabIndex = 27;
			// 
			// btnSearchResultados
			// 
			this->btnSearchResultados->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->btnSearchResultados->Location = System::Drawing::Point(667, 135);
			this->btnSearchResultados->Name = L"btnSearchResultados";
			this->btnSearchResultados->Size = System::Drawing::Size(107, 39);
			this->btnSearchResultados->TabIndex = 26;
			this->btnSearchResultados->Text = L"BUSCAR";
			this->btnSearchResultados->UseVisualStyleBackColor = false;
			this->btnSearchResultados->Click += gcnew System::EventHandler(this, &Results1::btnSearchResultados_Click_1);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(23, 184);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Partidos Ganados";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Partidos Empatados";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Partidos Perdidos";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1221, 460);
			this->chart1->TabIndex = 25;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			title1->Name = L"Puntaje por Equipo";
			title1->Text = L"Partidos por Equipo";
			this->chart1->Titles->Add(title1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(11, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(663, 62);
			this->label1->TabIndex = 24;
			this->label1->Text = L"GRAFICAS POR CAMPEONATO";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(586, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(683, 95);
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(594, 95);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->puntajesToolStripMenuItem,
					this->golesYTarjetasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1269, 28);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// puntajesToolStripMenuItem
			// 
			this->puntajesToolStripMenuItem->Name = L"puntajesToolStripMenuItem";
			this->puntajesToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->puntajesToolStripMenuItem->Text = L"Puntajes";
			this->puntajesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Results1::puntajesToolStripMenuItem_Click);
			// 
			// golesYTarjetasToolStripMenuItem
			// 
			this->golesYTarjetasToolStripMenuItem->Name = L"golesYTarjetasToolStripMenuItem";
			this->golesYTarjetasToolStripMenuItem->Size = System::Drawing::Size(125, 24);
			this->golesYTarjetasToolStripMenuItem->Text = L"Goles y Tarjetas";
			this->golesYTarjetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Results1::golesYTarjetasToolStripMenuItem_Click);
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(103, 180);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Goles";
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(445, 439);
			this->chart2->TabIndex = 29;
			this->chart2->Text = L"chart2";
			title2->BackColor = System::Drawing::Color::Transparent;
			title2->BorderColor = System::Drawing::Color::White;
			title2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			title2->Name = L"Goles por Equipo";
			title2->Text = L"Goles por Equipo";
			this->chart2->Titles->Add(title2);
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(704, 180);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Tarjetas Amarillas";
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L"Tarjetas Rojas";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Size = System::Drawing::Size(500, 435);
			this->chart3->TabIndex = 30;
			this->chart3->Text = L"chart3";
			title3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title3->ForeColor = System::Drawing::Color::DarkOliveGreen;
			title3->Name = L"Tarjetas por Equipo";
			title3->Text = L"Tarjetas por Equipo";
			this->chart3->Titles->Add(title3);
			// 
			// Results1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1269, 656);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->cmbresultados);
			this->Controls->Add(this->btnSearchResultados);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Results1";
			this->Text = L"Grafica de Resultados";
			this->Load += gcnew System::EventHandler(this, &Results1::Results1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int a = 0;

		void FillcmbMatchSearch() {
			cmbresultados->Items->Clear();
			List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
			for (int i = 0; i < tournamentList->Count; i++) {
				cmbresultados->Items->Add(tournamentList[i]->NameTournament);
			}
		}
		Tournament^ Dato9() {
			Tournament^ o = gcnew Tournament();
			o = nullptr;
			if (cmbresultados->SelectedIndex >= 0) {
				List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
				o = tournamentList[cmbresultados->SelectedIndex];
				return o;
			}
			else {
				return o;
			}
		}

		match^ Dato() {
			match^ m = gcnew match();
			m = nullptr;
			if (cmbresultados->SelectedIndex >= 0) {
				List <match^>^ matchList = Controller::QueryMatchByTournament(Dato9()->Id);
				m = matchList[cmbresultados->SelectedIndex];
				return m;
			}
			else {
				return m;
			}
		}

	private: System::Void Results1_Load(System::Object^ sender, System::EventArgs^ e) {
		FillcmbMatchSearch();
		BloquearTodo();
	
	}
		 

private: System::Void cmbresultados_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	//FillvoidGrafics();

}

	private: System::Void btnSearchResultados_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (cmbresultados->SelectedIndex >= 0 && a==1) {

			//Cálculo Puntaje
			List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
			Tournament^ o = Dato9();
			List <match^>^ matchList = Controller::QueryMatchByTournament(Dato9()->Id);
			for (int j = 0; j < footballteamsList->Count; j++) {
				footballteamsList[j]->pj = 0;
				footballteamsList[j]->pg = 0;
				footballteamsList[j]->pe = 0;
				footballteamsList[j]->pp = 0;
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
							}
							else {
								footballteamsList[j]->pp += 1;
							}
							footballteamsList[j]->puntos = footballteamsList[j]->pg * 3 + footballteamsList[j]->pe;
							Controller::UpdateFootballteams(footballteamsList[j]);
						}
						else if (matchList[i]->TeamLocal->Id == footballteamsList[j]->Id) {
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
			/********************************/

			chart1->Series["Partidos Ganados"]->Points->Clear();
			chart1->Series["Partidos Empatados"]->Points->Clear();
			chart1->Series["Partidos Perdidos"]->Points->Clear();
			List<Footballteams^>^ footballteamsList2 = Controller::QueryAllFootballteams();
			Tournament^ o2 = Dato9();
			List<match^>^ matchList2 = Controller::QueryMatchByTournament(Dato9()->Id);

			for (int i = 0; i < footballteamsList2->Count; i++) {

				if (o2->Id == footballteamsList2[i]->Tournament->Id) {

					//chart1->Series["Puntos"]->Points->;
					chart1->Series["Partidos Ganados"]->Points->AddXY(footballteamsList2[i]->NameTeam, footballteamsList2[i]->pg);
					chart1->Series["Partidos Empatados"]->Points->AddXY(footballteamsList2[i]->NameTeam, footballteamsList2[i]->pe);
					chart1->Series["Partidos Perdidos"]->Points->AddXY(footballteamsList2[i]->NameTeam, footballteamsList2[i]->pp);
					//chart1->Series["Partidos Ganados"]->Label=Convert::ToString(footballteamsList[i]->pg);
					//chart1->Series["Partidos Empatados"]->Label = Convert::ToString(footballteamsList[i]->pg);
					//chart1->Series["Partidos Perdidos"]->Label = Convert::ToString(footballteamsList[i]->pg);

						//chart1->Series["Puntos"]->Points->AddY(Convert::ToString(footballteamsList[i]->puntos));
				}

			}
		}
		if (cmbresultados->SelectedIndex >= 0 && a==2) {
			chart2->Series["Goles"]->Points->Clear();
			chart3->Series["Tarjetas Amarillas"]->Points->Clear();
			chart3->Series["Tarjetas Rojas"]->Points->Clear();
			List<Footballteams^>^ footballteamsList = Controller::QueryAllFootballteams();
			//List<match^>^ matchList = Controller::QueryAllMatchs();
			Tournament^ o = Dato9();
			List<match^>^ matchList = Controller::QueryMatchByTournament(Dato9()->Id);

			
			for (int i = 0; i < matchList->Count; i++) {

				for (int j = 0; j < footballteamsList->Count; j++) {
					if (matchList[i]->TeamVisit->Id == footballteamsList[j]->Id) {

						footballteamsList[j]->GoalsV = Int32::Parse(matchList[i]->GolTeamVisit);
						footballteamsList[j]->TarjetasV =  Int32::Parse(matchList[i]->YellowTeamVisit);
						footballteamsList[j]->TarjetasVR = Int32::Parse(matchList[i]->RedTeamVisit);


						//if (o->Id == footballteamsList[i]->Tournament->Id) {

							//chart1->Series["Puntos"]->Points->;
							//chart2->Series["Goles"]->Points->AddY(Convert::ToInt32(footballteamsList[i]->));

							//chart3->Series["Tarjetas"]->Points->AddXY(footballteamsList[i]->NameTeam, footballteamsList[i]->pe);
							//chart1->Series["Partidos Perdidos"]->Points->AddXY(footballteamsList[i]->NameTeam, footballteamsList[i]->pp);
							//chart1->Series["Partidos Ganados"]->Label=Convert::ToString(footballteamsList[i]->pg);
							//chart1->Series["Partidos Empatados"]->Label = Convert::ToString(footballteamsList[i]->pg);
							//chart1->Series["Partidos Perdidos"]->Label = Convert::ToString(footballteamsList[i]->pg);

								//chart1->Series["Puntos"]->Points->AddY(Convert::ToString(footballteamsList[i]->puntos));
						Controller::UpdateFootballteams(footballteamsList[j]);
					}
					else if (matchList[i]->TeamLocal->Id == footballteamsList[j]->Id) {
						footballteamsList[j]->GoalsL = Int32::Parse(matchList[i]->GolTeamLocal);
						footballteamsList[j]->TarjetasL = Int32::Parse(matchList[i]->YellowTeamLocal);
						footballteamsList[j]->TarjetasLR = Int32::Parse(matchList[i]->RedTeamLocal);

						Controller::UpdateFootballteams(footballteamsList[j]);
					}

					footballteamsList[j]->Goals = footballteamsList[j]->GoalsV + footballteamsList[j]->GoalsL;
					footballteamsList[j]->TarjetasA = footballteamsList[j]->TarjetasL + footballteamsList[j]->TarjetasV;
					footballteamsList[j]->TarjetasR = footballteamsList[j]->TarjetasLR + footballteamsList[j]->TarjetasVR;
				}

			}

			for (int i = 0; i < footballteamsList->Count; i++) {

				if (o->Id == footballteamsList[i]->Tournament->Id) {
					
						chart2->Series["Goles"]->Points->AddXY(footballteamsList[i]->NameTeam, Convert::ToString(footballteamsList[i]->Goals));
						//->Series["Goles"]->Points->AddXY(Convert::ToString(footballteamsList[i]->Goals), "");
						chart3->Series["Tarjetas Amarillas"]->Points->AddXY(footballteamsList[i]->NameTeam, footballteamsList[i]->TarjetasA);
						chart3->Series["Tarjetas Rojas"]->Points->AddXY(footballteamsList[i]->NameTeam, footballteamsList[i]->TarjetasR);
					
					//chart2->Series["Goles"]->Label= Convert::ToString(footballteamsList[i]->Goals);
				
				}
			
			
			
			}
		}
		

	}

		   void BloquearTodo() {
			   chart1->Visible = false;
			   chart2->Visible = false;
			   chart3->Visible = false;
		   }

private: System::Void puntajesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Visible = true;
	chart2->Visible = false;
	chart3->Visible = false;
	a = 1;
}
private: System::Void golesYTarjetasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	a = 2;
	chart1->Visible = false;
	chart2->Visible = true;
	chart3->Visible = true;

}
};
}
