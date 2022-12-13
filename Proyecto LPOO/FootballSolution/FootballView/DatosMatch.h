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
	using namespace Threading;

	/// <summary>
	/// Resumen de DatosMatch
	/// </summary>
	public ref class DatosMatch : public System::Windows::Forms::Form
	{
	public:
		DatosMatch(void)
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
		~DatosMatch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ fafdaToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ registrarResultadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarResultadosToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbMatchTour;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ bttTourPartido2;
	private: System::Windows::Forms::ComboBox^ cmbMatchRes;
	private: System::Windows::Forms::DataGridView^ dgvDateResult;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TimeLine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TeamVisitante;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Referee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stadium;
	private: System::Windows::Forms::Label^ lblTvTargets;
	private: System::Windows::Forms::Label^ lblTlTargets;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblTvGoles;

	private: System::Windows::Forms::Label^ lblTlGoles;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblTvTargets2;


	private: System::Windows::Forms::Label^ lblTlTargets2;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtTvTargets2;
	private: System::Windows::Forms::TextBox^ txtTlTargets2;
	private: System::Windows::Forms::TextBox^ txtTlTargets;
	private: System::Windows::Forms::TextBox^ txtTvTargets;
	private: System::Windows::Forms::TextBox^ txtTvGoles;
	private: System::Windows::Forms::TextBox^ txtTlGoles;
	private: System::Windows::Forms::Button^ bttMatchDelete;

	private: System::Windows::Forms::Button^ bttMatchUpdate;

	private: System::Windows::Forms::Button^ button1;










	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->fafdaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->registrarResultadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarResultadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->bttMatchDelete = (gcnew System::Windows::Forms::Button());
			this->bttMatchUpdate = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtTvTargets2 = (gcnew System::Windows::Forms::TextBox());
			this->txtTlTargets2 = (gcnew System::Windows::Forms::TextBox());
			this->txtTlTargets = (gcnew System::Windows::Forms::TextBox());
			this->txtTvTargets = (gcnew System::Windows::Forms::TextBox());
			this->txtTvGoles = (gcnew System::Windows::Forms::TextBox());
			this->txtTlGoles = (gcnew System::Windows::Forms::TextBox());
			this->lblTvTargets2 = (gcnew System::Windows::Forms::Label());
			this->lblTlTargets2 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblTvTargets = (gcnew System::Windows::Forms::Label());
			this->lblTlTargets = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblTvGoles = (gcnew System::Windows::Forms::Label());
			this->lblTlGoles = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dgvDateResult = (gcnew System::Windows::Forms::DataGridView());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimeLine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TeamVisitante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Referee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stadium = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cmbMatchRes = (gcnew System::Windows::Forms::ComboBox());
			this->bttTourPartido2 = (gcnew System::Windows::Forms::Button());
			this->cmbMatchTour = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->contextMenuStrip2->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDateResult))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fafdaToolStripMenuItem });
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(114, 28);
			// 
			// fafdaToolStripMenuItem
			// 
			this->fafdaToolStripMenuItem->Name = L"fafdaToolStripMenuItem";
			this->fafdaToolStripMenuItem->Size = System::Drawing::Size(113, 24);
			this->fafdaToolStripMenuItem->Text = L"fafda";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 28);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(830, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->registrarResultadosToolStripMenuItem,
					this->modificarResultadosToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(830, 28);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// registrarResultadosToolStripMenuItem
			// 
			this->registrarResultadosToolStripMenuItem->Name = L"registrarResultadosToolStripMenuItem";
			this->registrarResultadosToolStripMenuItem->Size = System::Drawing::Size(158, 24);
			this->registrarResultadosToolStripMenuItem->Text = L"Registrar Resultados";
			this->registrarResultadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &DatosMatch::registrarResultadosToolStripMenuItem_Click);
			// 
			// modificarResultadosToolStripMenuItem
			// 
			this->modificarResultadosToolStripMenuItem->Name = L"modificarResultadosToolStripMenuItem";
			this->modificarResultadosToolStripMenuItem->Size = System::Drawing::Size(163, 24);
			this->modificarResultadosToolStripMenuItem->Text = L"Modificar Resultados";
			this->modificarResultadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &DatosMatch::modificarResultadosToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(830, 693);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->bttMatchDelete);
			this->tabPage1->Controls->Add(this->bttMatchUpdate);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->txtTvTargets2);
			this->tabPage1->Controls->Add(this->txtTlTargets2);
			this->tabPage1->Controls->Add(this->txtTlTargets);
			this->tabPage1->Controls->Add(this->txtTvTargets);
			this->tabPage1->Controls->Add(this->txtTvGoles);
			this->tabPage1->Controls->Add(this->txtTlGoles);
			this->tabPage1->Controls->Add(this->lblTvTargets2);
			this->tabPage1->Controls->Add(this->lblTlTargets2);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->lblTvTargets);
			this->tabPage1->Controls->Add(this->lblTlTargets);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->lblTvGoles);
			this->tabPage1->Controls->Add(this->lblTlGoles);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->dgvDateResult);
			this->tabPage1->Controls->Add(this->cmbMatchRes);
			this->tabPage1->Controls->Add(this->bttTourPartido2);
			this->tabPage1->Controls->Add(this->cmbMatchTour);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(822, 664);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Resultados Partidos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// bttMatchDelete
			// 
			this->bttMatchDelete->Location = System::Drawing::Point(555, 357);
			this->bttMatchDelete->Name = L"bttMatchDelete";
			this->bttMatchDelete->Size = System::Drawing::Size(199, 23);
			this->bttMatchDelete->TabIndex = 186;
			this->bttMatchDelete->Text = L"ELIMINAR";
			this->bttMatchDelete->UseVisualStyleBackColor = true;
			this->bttMatchDelete->Click += gcnew System::EventHandler(this, &DatosMatch::bttMatchDelete_Click);
			// 
			// bttMatchUpdate
			// 
			this->bttMatchUpdate->Location = System::Drawing::Point(313, 357);
			this->bttMatchUpdate->Name = L"bttMatchUpdate";
			this->bttMatchUpdate->Size = System::Drawing::Size(199, 23);
			this->bttMatchUpdate->TabIndex = 185;
			this->bttMatchUpdate->Text = L"MODIFICAR";
			this->bttMatchUpdate->UseVisualStyleBackColor = true;
			this->bttMatchUpdate->Click += gcnew System::EventHandler(this, &DatosMatch::bttMatchUpdate_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 23);
			this->button1->TabIndex = 184;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DatosMatch::button1_Click);
			// 
			// txtTvTargets2
			// 
			this->txtTvTargets2->Location = System::Drawing::Point(444, 284);
			this->txtTvTargets2->Name = L"txtTvTargets2";
			this->txtTvTargets2->Size = System::Drawing::Size(116, 22);
			this->txtTvTargets2->TabIndex = 183;
			// 
			// txtTlTargets2
			// 
			this->txtTlTargets2->Location = System::Drawing::Point(133, 284);
			this->txtTlTargets2->Name = L"txtTlTargets2";
			this->txtTlTargets2->Size = System::Drawing::Size(116, 22);
			this->txtTlTargets2->TabIndex = 182;
			// 
			// txtTlTargets
			// 
			this->txtTlTargets->Location = System::Drawing::Point(133, 212);
			this->txtTlTargets->Name = L"txtTlTargets";
			this->txtTlTargets->Size = System::Drawing::Size(116, 22);
			this->txtTlTargets->TabIndex = 181;
			// 
			// txtTvTargets
			// 
			this->txtTvTargets->Location = System::Drawing::Point(444, 215);
			this->txtTvTargets->Name = L"txtTvTargets";
			this->txtTvTargets->Size = System::Drawing::Size(116, 22);
			this->txtTvTargets->TabIndex = 180;
			// 
			// txtTvGoles
			// 
			this->txtTvGoles->Location = System::Drawing::Point(444, 150);
			this->txtTvGoles->Name = L"txtTvGoles";
			this->txtTvGoles->Size = System::Drawing::Size(116, 22);
			this->txtTvGoles->TabIndex = 179;
			// 
			// txtTlGoles
			// 
			this->txtTlGoles->Location = System::Drawing::Point(133, 147);
			this->txtTlGoles->Name = L"txtTlGoles";
			this->txtTlGoles->Size = System::Drawing::Size(116, 22);
			this->txtTlGoles->TabIndex = 178;
			// 
			// lblTvTargets2
			// 
			this->lblTvTargets2->AutoSize = true;
			this->lblTvTargets2->Location = System::Drawing::Point(361, 284);
			this->lblTvTargets2->Name = L"lblTvTargets2";
			this->lblTvTargets2->Size = System::Drawing::Size(72, 16);
			this->lblTvTargets2->TabIndex = 177;
			this->lblTvTargets2->Text = L"Sin Equipo";
			// 
			// lblTlTargets2
			// 
			this->lblTlTargets2->AutoSize = true;
			this->lblTlTargets2->Location = System::Drawing::Point(43, 284);
			this->lblTlTargets2->Name = L"lblTlTargets2";
			this->lblTlTargets2->Size = System::Drawing::Size(72, 16);
			this->lblTlTargets2->TabIndex = 176;
			this->lblTlTargets2->Text = L"Sin Equipo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(39, 252);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 16);
			this->label10->TabIndex = 175;
			this->label10->Text = L"TARJETAS ROJAS";
			// 
			// lblTvTargets
			// 
			this->lblTvTargets->AutoSize = true;
			this->lblTvTargets->Location = System::Drawing::Point(357, 218);
			this->lblTvTargets->Name = L"lblTvTargets";
			this->lblTvTargets->Size = System::Drawing::Size(72, 16);
			this->lblTvTargets->TabIndex = 171;
			this->lblTvTargets->Text = L"Sin Equipo";
			// 
			// lblTlTargets
			// 
			this->lblTlTargets->AutoSize = true;
			this->lblTlTargets->Location = System::Drawing::Point(39, 218);
			this->lblTlTargets->Name = L"lblTlTargets";
			this->lblTlTargets->Size = System::Drawing::Size(72, 16);
			this->lblTlTargets->TabIndex = 170;
			this->lblTlTargets->Text = L"Sin Equipo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 16);
			this->label6->TabIndex = 169;
			this->label6->Text = L"TARJETAS AMARILLAS";
			// 
			// lblTvGoles
			// 
			this->lblTvGoles->AutoSize = true;
			this->lblTvGoles->Location = System::Drawing::Point(357, 150);
			this->lblTvGoles->Name = L"lblTvGoles";
			this->lblTvGoles->Size = System::Drawing::Size(72, 16);
			this->lblTvGoles->TabIndex = 168;
			this->lblTvGoles->Text = L"Sin Equipo";
			// 
			// lblTlGoles
			// 
			this->lblTlGoles->AutoSize = true;
			this->lblTlGoles->Location = System::Drawing::Point(39, 150);
			this->lblTlGoles->Name = L"lblTlGoles";
			this->lblTlGoles->Size = System::Drawing::Size(72, 16);
			this->lblTlGoles->TabIndex = 167;
			this->lblTlGoles->Text = L"Sin Equipo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 16);
			this->label3->TabIndex = 166;
			this->label3->Text = L"GOLES";
			// 
			// dgvDateResult
			// 
			this->dgvDateResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDateResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Time, this->TimeLine,
					this->TeamVisitante, this->Referee, this->Stadium
			});
			this->dgvDateResult->Location = System::Drawing::Point(20, 416);
			this->dgvDateResult->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dgvDateResult->Name = L"dgvDateResult";
			this->dgvDateResult->RowHeadersWidth = 51;
			this->dgvDateResult->RowTemplate->Height = 24;
			this->dgvDateResult->Size = System::Drawing::Size(794, 212);
			this->dgvDateResult->TabIndex = 165;
			this->dgvDateResult->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DatosMatch::dgvDateResult_CellClick);
			// 
			// Time
			// 
			this->Time->HeaderText = L"Fecha";
			this->Time->MinimumWidth = 6;
			this->Time->Name = L"Time";
			this->Time->Width = 80;
			// 
			// TimeLine
			// 
			this->TimeLine->HeaderText = L"Equipo Local";
			this->TimeLine->MinimumWidth = 6;
			this->TimeLine->Name = L"TimeLine";
			this->TimeLine->Width = 200;
			// 
			// TeamVisitante
			// 
			this->TeamVisitante->HeaderText = L"Equipo Visitante";
			this->TeamVisitante->MinimumWidth = 6;
			this->TeamVisitante->Name = L"TeamVisitante";
			this->TeamVisitante->Width = 200;
			// 
			// Referee
			// 
			this->Referee->HeaderText = L"Tarjetas Local";
			this->Referee->MinimumWidth = 6;
			this->Referee->Name = L"Referee";
			this->Referee->Width = 125;
			// 
			// Stadium
			// 
			this->Stadium->HeaderText = L"Tarjetas Visita";
			this->Stadium->MinimumWidth = 6;
			this->Stadium->Name = L"Stadium";
			this->Stadium->Width = 125;
			// 
			// cmbMatchRes
			// 
			this->cmbMatchRes->FormattingEnabled = true;
			this->cmbMatchRes->Location = System::Drawing::Point(133, 64);
			this->cmbMatchRes->Name = L"cmbMatchRes";
			this->cmbMatchRes->Size = System::Drawing::Size(379, 24);
			this->cmbMatchRes->TabIndex = 164;
			this->cmbMatchRes->SelectedIndexChanged += gcnew System::EventHandler(this, &DatosMatch::cmbMatchRes_SelectedIndexChanged);
			// 
			// bttTourPartido2
			// 
			this->bttTourPartido2->Location = System::Drawing::Point(344, 24);
			this->bttTourPartido2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bttTourPartido2->Name = L"bttTourPartido2";
			this->bttTourPartido2->Size = System::Drawing::Size(252, 23);
			this->bttTourPartido2->TabIndex = 163;
			this->bttTourPartido2->Text = L"SELECCIONAR CAMPEONATO";
			this->bttTourPartido2->UseVisualStyleBackColor = true;
			this->bttTourPartido2->Click += gcnew System::EventHandler(this, &DatosMatch::bttTourPartido2_Click);
			// 
			// cmbMatchTour
			// 
			this->cmbMatchTour->FormattingEnabled = true;
			this->cmbMatchTour->Location = System::Drawing::Point(133, 23);
			this->cmbMatchTour->Name = L"cmbMatchTour";
			this->cmbMatchTour->Size = System::Drawing::Size(195, 24);
			this->cmbMatchTour->TabIndex = 2;
			 
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Campeonato: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Partido: ";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(822, 664);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registro datos por jugador";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// DatosMatch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 728);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"DatosMatch";
			this->Text = L"Datos de cada partido";
			this->Load += gcnew System::EventHandler(this, &DatosMatch::DatosMatch_Load);
			this->contextMenuStrip2->ResumeLayout(false);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDateResult))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Botones
private: System::Void registrarResultadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Add
	BloquearTodo();
	FillcmbMatchTour();
	cmbMatchTour->Enabled = true;
	bttTourPartido2->Enabled = true;
	button1->Enabled = true;
}
private: System::Void modificarResultadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BloquearTodo();
	FillcmbMatchTour();
	cmbMatchTour->Enabled = true;
	bttTourPartido2->Enabled = true;
	bttMatchUpdate->Enabled = true;
	bttMatchDelete->Enabled = true;
}
//***************************************************************************************************************************

//Cargas
private: System::Void DatosMatch_Load(System::Object^ sender, System::EventArgs^ e) {
	BloquearTodo();
	FillcmbMatchTour();
}


//General 
void BloquearTodo() {
	cmbMatchTour->Enabled = false;
	bttTourPartido2->Enabled = false;
	cmbMatchRes->Enabled = false;
	txtTvTargets->Enabled = false;
	txtTvTargets2->Enabled = false;
	txtTlTargets->Enabled = false;
	txtTlTargets2->Enabled = false;
	txtTlGoles->Enabled = false;
	txtTvGoles->Enabled = false;

	button1->Enabled = false;
	bttMatchUpdate->Enabled = false;
	bttMatchDelete->Enabled = false;
}
void LimpiarTodoventana1() {
	txtTlGoles->Text = "";
	txtTvGoles->Text = "";
	txtTlTargets2->Text = "";
	txtTvTargets2->Text = "";
	txtTlTargets->Text = "";
	txtTvTargets->Text = "";
	lblTlGoles->Text = "Sin Equipo";
	lblTvGoles->Text = "Sin Equipo";
	lblTlTargets->Text = "Sin Equipo";
	lblTvTargets->Text = "Sin Equipo";
	lblTlTargets2->Text = "Sin Equipo";
	lblTvTargets2->Text = "Sin Equipo";
	cmbMatchRes->Text = "";
}

//Ventana 1
void FillcmbMatchTour() {
	cmbMatchTour->Items->Clear();
	List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
	for (int i = 0; i < tournamentList->Count; i++) {
		cmbMatchTour->Items->Add(tournamentList[i]->NameTournament);
	}
}
Tournament^ Dato4() {
	Tournament^ o = gcnew Tournament();
	o = nullptr;
	if (cmbMatchTour->SelectedIndex >= 0) {
		List <Tournament^>^ tournamentList = Controller::QueryAllTournaments();
		o = tournamentList[cmbMatchTour->SelectedIndex];
		return o;
	}
	else {
		MessageBox::Show("Seleccione un campeonato");
		return o;
	}
}
private: System::Void bttTourPartido2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbMatchTour->SelectedIndex >= 0 && cmbMatchTour->Text != "") {
		cmbMatchRes->Enabled = true;
		cmbMatchRes->Enabled = true;
		txtTvTargets->Enabled = true;
		txtTvTargets2->Enabled = true;
		txtTlTargets->Enabled = true;
		txtTlTargets2->Enabled = true;
		txtTlGoles->Enabled = true;
		txtTvGoles->Enabled = true;
		FillcmbMatchRes();
		RefreshMatchResult();
	}
	else {
		MessageBox::Show("Seleccione un campeonato");
	}
	
}
public: void FillcmbMatchRes() {
	cmbMatchRes->Items->Clear();
	List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
	for (int i = 0; i < matchList->Count; i++) {
		cmbMatchRes->Items->Add(""+matchList[i]->date+" - "+ matchList[i]->TeamLocal->NameTeam +"  vs  "+ matchList[i]->TeamVisit->NameTeam);
	}
}
public: void RefreshMatchResult() {
	List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
	dgvDateResult->Rows->Clear();
	for (int i = 0; i < matchList->Count; i++) {
		dgvDateResult->Rows->Add(gcnew array<String^>{
			"" + matchList[i]->date,
				matchList[i]->TeamLocal->NameTeam+": "+ matchList[i]->GolTeamLocal,
				matchList[i]->TeamVisit->NameTeam + ": " + matchList[i]->GolTeamVisit,
				"A: "+matchList[i]->YellowTeamLocal+" - R: "+ matchList[i]->RedTeamLocal,
				"A: " + matchList[i]->YellowTeamVisit + " - R: " + matchList[i]->RedTeamVisit,
		});
	}
	int selectedRowIndex = dgvDateResult->RowCount;
	if (selectedRowIndex == 1) {
		MessageBox::Show("No se encontraron datos");
	}
}
match^ Dato() {
	match^ o = gcnew match();
	o = nullptr;
	if (cmbMatchRes->SelectedIndex >= 0) {
		List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
		o = matchList[cmbMatchRes->SelectedIndex];
		return o;
	}
	else {
		return o;
	}
}
private: System::Void cmbMatchRes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	lblTlGoles->Text = Dato()->TeamLocal->NameTeam;
	lblTvGoles->Text = Dato()->TeamVisit->NameTeam;
	lblTlTargets->Text = Dato()->TeamLocal->NameTeam;
	lblTvTargets->Text = Dato()->TeamVisit->NameTeam;
	lblTlTargets2->Text = Dato()->TeamLocal->NameTeam;
	lblTvTargets2->Text = Dato()->TeamVisit->NameTeam;
	txtTlGoles->Text = Dato()->GolTeamLocal;
	txtTvGoles->Text = Dato()->GolTeamVisit;
	txtTlTargets2->Text = Dato()->RedTeamLocal;
	txtTvTargets2->Text = Dato()->RedTeamVisit;
	txtTlTargets->Text = Dato()->YellowTeamLocal;
	txtTvTargets->Text = Dato()->YellowTeamVisit;
}
private: System::Void dgvDateResult_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvDateResult->SelectedCells[0]->RowIndex;
	List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
	if (selectedRowIndex>=matchList->Count) {
		MessageBox::Show("Selección fuera del rango");
	}else if (cmbMatchTour->SelectedIndex >= 0) {
		match^ o = gcnew match();
		o = matchList[selectedRowIndex];
		txtTlGoles->Text = o->GolTeamLocal;
		txtTvGoles->Text = o->GolTeamVisit;
		txtTlTargets2->Text = o->RedTeamLocal;
		txtTvTargets2->Text = o->RedTeamVisit;
		txtTlTargets->Text = o->YellowTeamLocal;
		txtTvTargets->Text = o->YellowTeamVisit;
		lblTlGoles->Text = o->TeamLocal->NameTeam;
		lblTvGoles->Text = o->TeamVisit->NameTeam;
		lblTlTargets->Text = o->TeamLocal->NameTeam;
		lblTvTargets->Text = o->TeamVisit->NameTeam;
		lblTlTargets2->Text = o->TeamLocal->NameTeam;
		lblTvTargets2->Text = o->TeamVisit->NameTeam;
		cmbMatchRes->Text="" + o->date + " - " + o->TeamLocal->NameTeam + "  vs  " + o->TeamVisit->NameTeam ;
	}else {
		MessageBox::Show("Asegúrese de haber seleccionado un campeonato");
	}
	
}
//***********************************



//BOTONES
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbMatchRes->SelectedIndex >= 0) {
		match^ u = gcnew match();
		List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
		u = matchList[cmbMatchRes->SelectedIndex];
		if (u->GolTeamLocal == "??" || u->GolTeamVisit == "??"|| u->RedTeamLocal == "??"|| u->RedTeamVisit == "??"|| u->YellowTeamLocal == "??"|| u->YellowTeamVisit == "??") {
			u->GolTeamLocal = txtTlGoles->Text;
			u->GolTeamVisit = txtTvGoles->Text;
			u->RedTeamLocal = txtTlTargets2->Text;
			u->RedTeamVisit = txtTvTargets2->Text;
			u->YellowTeamLocal = txtTlTargets->Text;
			u->YellowTeamVisit = txtTvTargets->Text;
		
			Controller::UpdateMatch(u);
			RefreshMatchResult();
			LimpiarTodoventana1();
		}
		else {
			MessageBox::Show("Partido con resultados. Solo se puede modificar");
		}	
	}
	else {
		MessageBox::Show("Seleccione un partido");
	}
}
private: System::Void bttMatchUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbMatchRes->SelectedIndex >= 0) {
		match^ u = gcnew match();
		List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
		u = matchList[cmbMatchRes->SelectedIndex];
		if (u->GolTeamLocal != "??" || u->GolTeamVisit != "??" || u->RedTeamLocal != "??" || u->RedTeamVisit != "??" || u->YellowTeamLocal != "??" || u->YellowTeamVisit != "??") {
			u->GolTeamLocal = txtTlGoles->Text;
			u->GolTeamVisit = txtTvGoles->Text;
			u->RedTeamLocal = txtTlTargets2->Text;
			u->RedTeamVisit = txtTvTargets2->Text;
			u->YellowTeamLocal = txtTlTargets->Text;
			u->YellowTeamVisit = txtTvTargets->Text;
			
			Controller::UpdateMatch(u);
			RefreshMatchResult();
		}
		else {
			MessageBox::Show("Partido sin resultados. Solo se puede agregar");
		}
	}
	else {
		MessageBox::Show("Seleccione un partido");
	}

}
private: System::Void bttMatchDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbMatchRes->SelectedIndex >= 0) {
		match^ u = gcnew match();
		List <match^>^ matchList = Controller::QueryMatchByTournament(Dato4()->Id);
		u = matchList[cmbMatchRes->SelectedIndex];
		if (u->GolTeamLocal != "??" || u->GolTeamVisit != "??" || u->RedTeamLocal != "??" || u->RedTeamVisit != "??" || u->YellowTeamLocal != "??" || u->YellowTeamVisit != "??") {
			u->GolTeamLocal = "??";
			u->GolTeamVisit = "??";
			u->RedTeamLocal = "??";
			u->RedTeamVisit = "??";
			u->YellowTeamLocal = "??";
			u->YellowTeamVisit = "??";
			Controller::UpdateMatch(u);
			RefreshMatchResult();
			LimpiarTodoventana1();
		}
		else {
			MessageBox::Show("Partido sin resultados. Solo se puede agregar");
		}
	}
	else {
		MessageBox::Show("Seleccione un partido");
	}
}



};
}
