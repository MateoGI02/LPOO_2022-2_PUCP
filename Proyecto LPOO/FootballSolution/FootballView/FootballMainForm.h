#pragma once
#include "InscriptionForm.h"
#include "TeamsForm.h"
#include "LoginForm.h"
#include "TournamentForm.h"
#include "Results1.h"
#include "DatosMatch.h"
#include "TablePositions.h"

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
	/// Resumen de FootballMainForm
	/// </summary>
	public ref class FootballMainForm : public System::Windows::Forms::Form
	{
	public:
		static Organizer^ Orga;
		FootballMainForm(void)		
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
		~FootballMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearEquipoToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ tablaDePosicionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasPorPartidoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inscripcionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cTorneosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ resultadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ tablaPosicionesPorCampeonatoToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bttIniTeam;
	private: System::Windows::Forms::Button^ bttIniInscrip;
	private: System::Windows::Forms::Button^ bttIniTour;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripMenuItem^ resultadosPartidosToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FootballMainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearEquipoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inscripcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cTorneosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resultadosPartidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tablaDePosicionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tablaPosicionesPorCampeonatoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasPorPartidoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resultadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bttIniTeam = (gcnew System::Windows::Forms::Button());
			this->bttIniInscrip = (gcnew System::Windows::Forms::Button());
			this->bttIniTour = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->menúToolStripMenuItem,
					this->crearEquipoToolStripMenuItem, this->tablaDePosicionesToolStripMenuItem, this->estadisticasPorPartidoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1189, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cerrarToolStripMenuItem });
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menúToolStripMenuItem->Text = L"Menú";
			// 
			// cerrarToolStripMenuItem
			// 
			this->cerrarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarToolStripMenuItem.Image")));
			this->cerrarToolStripMenuItem->Name = L"cerrarToolStripMenuItem";
			this->cerrarToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cerrarToolStripMenuItem->Text = L"Cerrar";
			this->cerrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::cerrarToolStripMenuItem_Click);
			// 
			// crearEquipoToolStripMenuItem
			// 
			this->crearEquipoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->registroToolStripMenuItem,
					this->inscripcionesToolStripMenuItem, this->cTorneosToolStripMenuItem, this->resultadosPartidosToolStripMenuItem
			});
			this->crearEquipoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"crearEquipoToolStripMenuItem.Image")));
			this->crearEquipoToolStripMenuItem->Name = L"crearEquipoToolStripMenuItem";
			this->crearEquipoToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->crearEquipoToolStripMenuItem->Text = L"Registro";
			// 
			// registroToolStripMenuItem
			// 
			this->registroToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registroToolStripMenuItem.Image")));
			this->registroToolStripMenuItem->Name = L"registroToolStripMenuItem";
			this->registroToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->registroToolStripMenuItem->Text = L"Registro de Equipos";
			this->registroToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::registroToolStripMenuItem_Click);
			// 
			// inscripcionesToolStripMenuItem
			// 
			this->inscripcionesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"inscripcionesToolStripMenuItem.Image")));
			this->inscripcionesToolStripMenuItem->Name = L"inscripcionesToolStripMenuItem";
			this->inscripcionesToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->inscripcionesToolStripMenuItem->Text = L"Inscripciones";
			this->inscripcionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::inscripcionesToolStripMenuItem_Click);
			// 
			// cTorneosToolStripMenuItem
			// 
			this->cTorneosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cTorneosToolStripMenuItem.Image")));
			this->cTorneosToolStripMenuItem->Name = L"cTorneosToolStripMenuItem";
			this->cTorneosToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->cTorneosToolStripMenuItem->Text = L"Torneos";
			this->cTorneosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::cTorneosToolStripMenuItem_Click);
			// 
			// resultadosPartidosToolStripMenuItem
			// 
			this->resultadosPartidosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resultadosPartidosToolStripMenuItem.Image")));
			this->resultadosPartidosToolStripMenuItem->Name = L"resultadosPartidosToolStripMenuItem";
			this->resultadosPartidosToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->resultadosPartidosToolStripMenuItem->Text = L"Resultados Partidos";
			this->resultadosPartidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::resultadosPartidosToolStripMenuItem_Click);
			// 
			// tablaDePosicionesToolStripMenuItem
			// 
			this->tablaDePosicionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tablaPosicionesPorCampeonatoToolStripMenuItem });
			this->tablaDePosicionesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tablaDePosicionesToolStripMenuItem.Image")));
			this->tablaDePosicionesToolStripMenuItem->Name = L"tablaDePosicionesToolStripMenuItem";
			this->tablaDePosicionesToolStripMenuItem->Size = System::Drawing::Size(171, 24);
			this->tablaDePosicionesToolStripMenuItem->Text = L"Tabla de Posiciones";
			// 
			// tablaPosicionesPorCampeonatoToolStripMenuItem
			// 
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Name = L"tablaPosicionesPorCampeonatoToolStripMenuItem";
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Size = System::Drawing::Size(314, 26);
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Text = L"Tabla Posiciones por campeonato";
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::tablaPosicionesPorCampeonatoToolStripMenuItem_Click);
			// 
			// estadisticasPorPartidoToolStripMenuItem
			// 
			this->estadisticasPorPartidoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->resultadosToolStripMenuItem });
			this->estadisticasPorPartidoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"estadisticasPorPartidoToolStripMenuItem.Image")));
			this->estadisticasPorPartidoToolStripMenuItem->Name = L"estadisticasPorPartidoToolStripMenuItem";
			this->estadisticasPorPartidoToolStripMenuItem->Size = System::Drawing::Size(199, 24);
			this->estadisticasPorPartidoToolStripMenuItem->Text = L"Estadisticas por partido";
			// 
			// resultadosToolStripMenuItem
			// 
			this->resultadosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resultadosToolStripMenuItem.Image")));
			this->resultadosToolStripMenuItem->Name = L"resultadosToolStripMenuItem";
			this->resultadosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->resultadosToolStripMenuItem->Text = L"Resultados";
			this->resultadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::resultadosToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(175, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registro";
			// 
			// bttIniTeam
			// 
			this->bttIniTeam->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->bttIniTeam->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttIniTeam->Location = System::Drawing::Point(57, 90);
			this->bttIniTeam->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttIniTeam->Name = L"bttIniTeam";
			this->bttIniTeam->Size = System::Drawing::Size(165, 41);
			this->bttIniTeam->TabIndex = 1;
			this->bttIniTeam->Text = L"Registro de Equipos";
			this->bttIniTeam->UseVisualStyleBackColor = false;
			this->bttIniTeam->Click += gcnew System::EventHandler(this, &FootballMainForm::bttIniTeam_Click);
			// 
			// bttIniInscrip
			// 
			this->bttIniInscrip->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->bttIniInscrip->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttIniInscrip->Location = System::Drawing::Point(56, 162);
			this->bttIniInscrip->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttIniInscrip->Name = L"bttIniInscrip";
			this->bttIniInscrip->Size = System::Drawing::Size(165, 41);
			this->bttIniInscrip->TabIndex = 2;
			this->bttIniInscrip->Text = L"Inscripciones";
			this->bttIniInscrip->UseVisualStyleBackColor = false;
			this->bttIniInscrip->Click += gcnew System::EventHandler(this, &FootballMainForm::bttIniInscrip_Click);
			// 
			// bttIniTour
			// 
			this->bttIniTour->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->bttIniTour->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttIniTour->Location = System::Drawing::Point(259, 90);
			this->bttIniTour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttIniTour->Name = L"bttIniTour";
			this->bttIniTour->Size = System::Drawing::Size(165, 41);
			this->bttIniTour->TabIndex = 3;
			this->bttIniTour->Text = L"Torneos";
			this->bttIniTour->UseVisualStyleBackColor = false;
			this->bttIniTour->Click += gcnew System::EventHandler(this, &FootballMainForm::bttIniTour_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->bttIniTour);
			this->panel1->Controls->Add(this->bttIniInscrip);
			this->panel1->Controls->Add(this->bttIniTeam);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(39, 66);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(492, 249);
			this->panel1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(259, 162);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 41);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Resultados Partidos";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FootballMainForm::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(596, 66);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(492, 111);
			this->panel2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(179, 48);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 41);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Ver Tabla";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FootballMainForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(124, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 32);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Tabla de posiciones";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(596, 206);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(492, 110);
			this->panel3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(179, 48);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ver Gráficos";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FootballMainForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(99, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 32);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Estadísticas por Partido";
			// 
			// FootballMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 641);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FootballMainForm";
			this->Text = L"App de Campeonatos";
			this->Load += gcnew System::EventHandler(this, &FootballMainForm::FootballMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
//Inscripciones botones
private: System::Void inscripcionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void registroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	TeamsForm^ teamsForm = gcnew TeamsForm();
	teamsForm->MdiParent = this;
	teamsForm->Show();
}
private: System::Void cTorneosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void resultadosPartidosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	DatosMatch^ datosMatch = gcnew DatosMatch();
	datosMatch->MdiParent = this;
	datosMatch->Show();
}
private: System::Void tablaPosicionesPorCampeonatoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	TablePositions^ tablePositions = gcnew TablePositions();
	tablePositions->MdiParent = this;
	tablePositions->Show();
}



private: System::Void FootballMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog();
}

private: System::Void resultadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	Results1^ results1 = gcnew Results1();
	results1->MdiParent = this;
	results1->Show();
}

private: System::Void cerrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void equiposPorCampeonatoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}


//Botones de inicio
private: System::Void bttIniTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	TeamsForm^ teamsForm = gcnew TeamsForm();
	teamsForm->MdiParent = this;
	teamsForm->Show();

}
private: System::Void bttIniInscrip_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void bttIniTour_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	DatosMatch^ datosMatch = gcnew DatosMatch();
	datosMatch->MdiParent = this;
	datosMatch->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	TablePositions^ tablePositions = gcnew TablePositions();
	tablePositions->MdiParent = this;
	tablePositions->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel1->Enabled = false;
	panel2->Visible = false;
	panel2->Enabled = false;
	panel3->Visible = false;
	panel3->Enabled = false;
	Results1^ results1 = gcnew Results1();
	results1->MdiParent = this;
	results1->Show();
}
//*****************************************************************************************************








};
}
