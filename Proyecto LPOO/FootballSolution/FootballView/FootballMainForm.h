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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(892, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cerrarToolStripMenuItem });
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menúToolStripMenuItem->Text = L"Menú";
			// 
			// cerrarToolStripMenuItem
			// 
			this->cerrarToolStripMenuItem->Name = L"cerrarToolStripMenuItem";
			this->cerrarToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->cerrarToolStripMenuItem->Text = L"Cerrar";
			this->cerrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::cerrarToolStripMenuItem_Click);
			// 
			// crearEquipoToolStripMenuItem
			// 
			this->crearEquipoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->registroToolStripMenuItem,
					this->inscripcionesToolStripMenuItem, this->cTorneosToolStripMenuItem, this->resultadosPartidosToolStripMenuItem
			});
			this->crearEquipoToolStripMenuItem->Name = L"crearEquipoToolStripMenuItem";
			this->crearEquipoToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->crearEquipoToolStripMenuItem->Text = L"Registro";
			// 
			// registroToolStripMenuItem
			// 
			this->registroToolStripMenuItem->Name = L"registroToolStripMenuItem";
			this->registroToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->registroToolStripMenuItem->Text = L"Registro de Equipos";
			this->registroToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::registroToolStripMenuItem_Click);
			// 
			// inscripcionesToolStripMenuItem
			// 
			this->inscripcionesToolStripMenuItem->Name = L"inscripcionesToolStripMenuItem";
			this->inscripcionesToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->inscripcionesToolStripMenuItem->Text = L"Inscripciones";
			this->inscripcionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::inscripcionesToolStripMenuItem_Click);
			// 
			// cTorneosToolStripMenuItem
			// 
			this->cTorneosToolStripMenuItem->Name = L"cTorneosToolStripMenuItem";
			this->cTorneosToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->cTorneosToolStripMenuItem->Text = L"Torneos";
			this->cTorneosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::cTorneosToolStripMenuItem_Click);
			// 
			// resultadosPartidosToolStripMenuItem
			// 
			this->resultadosPartidosToolStripMenuItem->Name = L"resultadosPartidosToolStripMenuItem";
			this->resultadosPartidosToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->resultadosPartidosToolStripMenuItem->Text = L"Resultados Partidos";
			this->resultadosPartidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::resultadosPartidosToolStripMenuItem_Click);
			// 
			// tablaDePosicionesToolStripMenuItem
			// 
			this->tablaDePosicionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tablaPosicionesPorCampeonatoToolStripMenuItem });
			this->tablaDePosicionesToolStripMenuItem->Name = L"tablaDePosicionesToolStripMenuItem";
			this->tablaDePosicionesToolStripMenuItem->Size = System::Drawing::Size(121, 20);
			this->tablaDePosicionesToolStripMenuItem->Text = L"Tabla de Posiciones";
			// 
			// tablaPosicionesPorCampeonatoToolStripMenuItem
			// 
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Name = L"tablaPosicionesPorCampeonatoToolStripMenuItem";
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Size = System::Drawing::Size(251, 22);
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Text = L"Tabla Posiciones por campeonato";
			this->tablaPosicionesPorCampeonatoToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::tablaPosicionesPorCampeonatoToolStripMenuItem_Click);
			// 
			// estadisticasPorPartidoToolStripMenuItem
			// 
			this->estadisticasPorPartidoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->resultadosToolStripMenuItem });
			this->estadisticasPorPartidoToolStripMenuItem->Name = L"estadisticasPorPartidoToolStripMenuItem";
			this->estadisticasPorPartidoToolStripMenuItem->Size = System::Drawing::Size(141, 20);
			this->estadisticasPorPartidoToolStripMenuItem->Text = L"Estadisticas por partido";
			// 
			// resultadosToolStripMenuItem
			// 
			this->resultadosToolStripMenuItem->Name = L"resultadosToolStripMenuItem";
			this->resultadosToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->resultadosToolStripMenuItem->Text = L"Resultados";
			this->resultadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::resultadosToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(131, 26);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registro";
			// 
			// bttIniTeam
			// 
			this->bttIniTeam->Location = System::Drawing::Point(43, 73);
			this->bttIniTeam->Margin = System::Windows::Forms::Padding(2);
			this->bttIniTeam->Name = L"bttIniTeam";
			this->bttIniTeam->Size = System::Drawing::Size(124, 33);
			this->bttIniTeam->TabIndex = 1;
			this->bttIniTeam->Text = L"Registro de Equipos";
			this->bttIniTeam->UseVisualStyleBackColor = true;
			this->bttIniTeam->Click += gcnew System::EventHandler(this, &FootballMainForm::bttIniTeam_Click);
			// 
			// bttIniInscrip
			// 
			this->bttIniInscrip->Location = System::Drawing::Point(42, 132);
			this->bttIniInscrip->Margin = System::Windows::Forms::Padding(2);
			this->bttIniInscrip->Name = L"bttIniInscrip";
			this->bttIniInscrip->Size = System::Drawing::Size(124, 33);
			this->bttIniInscrip->TabIndex = 2;
			this->bttIniInscrip->Text = L"Inscripciones";
			this->bttIniInscrip->UseVisualStyleBackColor = true;
			this->bttIniInscrip->Click += gcnew System::EventHandler(this, &FootballMainForm::bttIniInscrip_Click);
			// 
			// bttIniTour
			// 
			this->bttIniTour->Location = System::Drawing::Point(194, 73);
			this->bttIniTour->Margin = System::Windows::Forms::Padding(2);
			this->bttIniTour->Name = L"bttIniTour";
			this->bttIniTour->Size = System::Drawing::Size(124, 33);
			this->bttIniTour->TabIndex = 3;
			this->bttIniTour->Text = L"Torneos";
			this->bttIniTour->UseVisualStyleBackColor = true;
			this->bttIniTour->Click += gcnew System::EventHandler(this, &FootballMainForm::bttIniTour_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->bttIniTour);
			this->panel1->Controls->Add(this->bttIniInscrip);
			this->panel1->Controls->Add(this->bttIniTeam);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(29, 54);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(369, 202);
			this->panel1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(194, 132);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Resultados Partidos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FootballMainForm::button2_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(447, 54);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(369, 90);
			this->panel2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(134, 39);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 33);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Ver Tabla";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FootballMainForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 11);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 26);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Tabla de posiciones";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(447, 167);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(369, 89);
			this->panel3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(134, 39);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ver Gráficos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FootballMainForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(241, 26);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Estadísticas por Partido";
			// 
			// FootballMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 521);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
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
