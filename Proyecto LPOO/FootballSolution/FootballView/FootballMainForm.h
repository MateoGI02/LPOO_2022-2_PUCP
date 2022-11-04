#pragma once
#include "InscriptionForm.h"
#include "TeamsForm.h"
#include "LoginForm.h"
#include "TournamentForm.h"
#include "Results1.h"

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
			this->crearEquipoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inscripcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cTorneosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tablaDePosicionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasPorPartidoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resultadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(1190, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menúToolStripMenuItem->Text = L"Menú";
			// 
			// crearEquipoToolStripMenuItem
			// 
			this->crearEquipoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->registroToolStripMenuItem,
					this->inscripcionesToolStripMenuItem, this->cTorneosToolStripMenuItem
			});
			this->crearEquipoToolStripMenuItem->Name = L"crearEquipoToolStripMenuItem";
			this->crearEquipoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->crearEquipoToolStripMenuItem->Text = L"Archivo";
			// 
			// registroToolStripMenuItem
			// 
			this->registroToolStripMenuItem->Name = L"registroToolStripMenuItem";
			this->registroToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->registroToolStripMenuItem->Text = L"Registro de Equipos";
			this->registroToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::registroToolStripMenuItem_Click);
			// 
			// inscripcionesToolStripMenuItem
			// 
			this->inscripcionesToolStripMenuItem->Name = L"inscripcionesToolStripMenuItem";
			this->inscripcionesToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->inscripcionesToolStripMenuItem->Text = L"Inscripciones";
			this->inscripcionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::inscripcionesToolStripMenuItem_Click);
			// 
			// cTorneosToolStripMenuItem
			// 
			this->cTorneosToolStripMenuItem->Name = L"cTorneosToolStripMenuItem";
			this->cTorneosToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->cTorneosToolStripMenuItem->Text = L"Torneos";
			this->cTorneosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::cTorneosToolStripMenuItem_Click);
			// 
			// tablaDePosicionesToolStripMenuItem
			// 
			this->tablaDePosicionesToolStripMenuItem->Name = L"tablaDePosicionesToolStripMenuItem";
			this->tablaDePosicionesToolStripMenuItem->Size = System::Drawing::Size(151, 24);
			this->tablaDePosicionesToolStripMenuItem->Text = L"Tabla de Posiciones";
			// 
			// estadisticasPorPartidoToolStripMenuItem
			// 
			this->estadisticasPorPartidoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->resultadosToolStripMenuItem });
			this->estadisticasPorPartidoToolStripMenuItem->Name = L"estadisticasPorPartidoToolStripMenuItem";
			this->estadisticasPorPartidoToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->estadisticasPorPartidoToolStripMenuItem->Text = L"Estadisticas por partido";
			
			// 
			// resultadosToolStripMenuItem
			// 
			this->resultadosToolStripMenuItem->Name = L"resultadosToolStripMenuItem";
			this->resultadosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->resultadosToolStripMenuItem->Text = L"Resultados";
			this->resultadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FootballMainForm::resultadosToolStripMenuItem_Click);
			// 
			// FootballMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1190, 641);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FootballMainForm";
			this->Text = L"App de Campeonatos";
			this->Load += gcnew System::EventHandler(this, &FootballMainForm::FootballMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	


	private: System::Void inscripcionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		InscriptionForm^ inscriptionForm = gcnew InscriptionForm();
		inscriptionForm->MdiParent = this;
		inscriptionForm->Show();
	}
private: System::Void registroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TeamsForm^ teamsForm = gcnew TeamsForm();
	teamsForm->MdiParent = this;
	teamsForm->Show();
}





private: System::Void cTorneosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	TournamentForm^ tournamentForm = gcnew TournamentForm();
	tournamentForm->MdiParent = this;
	tournamentForm->Show();
}
private: System::Void FootballMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog();
}




private: System::Void resultadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Results1^ results1 = gcnew Results1();
	results1->MdiParent = this;
	results1->Show();
}

};
}
