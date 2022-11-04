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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
























	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ cmbteam2;
	private: System::Windows::Forms::ComboBox^ cmbteam1;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnAgragar;
	private: System::Windows::Forms::DataGridView^ dgvStatistics;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Teams;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TeamVisit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Goals;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Faults;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ YellowCards;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RedCards;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCorners2;
	private: System::Windows::Forms::TextBox^ txtCardR2;
	private: System::Windows::Forms::TextBox^ txtCardY2;
	private: System::Windows::Forms::TextBox^ txtfaults2;
	private: System::Windows::Forms::TextBox^ txtGoals2;
	private: System::Windows::Forms::TextBox^ txtCorners1;
	private: System::Windows::Forms::TextBox^ txtCardR1;
	private: System::Windows::Forms::TextBox^ txtCardY1;
	private: System::Windows::Forms::TextBox^ txtfaults1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtGoals1;

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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->cmbteam2 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbteam1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnAgragar = (gcnew System::Windows::Forms::Button());
			this->dgvStatistics = (gcnew System::Windows::Forms::DataGridView());
			this->Teams = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TeamVisit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Goals = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Faults = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->YellowCards = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RedCards = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCorners2 = (gcnew System::Windows::Forms::TextBox());
			this->txtCardR2 = (gcnew System::Windows::Forms::TextBox());
			this->txtCardY2 = (gcnew System::Windows::Forms::TextBox());
			this->txtfaults2 = (gcnew System::Windows::Forms::TextBox());
			this->txtGoals2 = (gcnew System::Windows::Forms::TextBox());
			this->txtCorners1 = (gcnew System::Windows::Forms::TextBox());
			this->txtCardR1 = (gcnew System::Windows::Forms::TextBox());
			this->txtCardY1 = (gcnew System::Windows::Forms::TextBox());
			this->txtfaults1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtGoals1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStatistics))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleName = L"";
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1125, 578);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->cmbteam2);
			this->tabPage2->Controls->Add(this->cmbteam1);
			this->tabPage2->Controls->Add(this->btnEliminar);
			this->tabPage2->Controls->Add(this->btnModificar);
			this->tabPage2->Controls->Add(this->btnAgragar);
			this->tabPage2->Controls->Add(this->dgvStatistics);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->txtCorners2);
			this->tabPage2->Controls->Add(this->txtCardR2);
			this->tabPage2->Controls->Add(this->txtCardY2);
			this->tabPage2->Controls->Add(this->txtfaults2);
			this->tabPage2->Controls->Add(this->txtGoals2);
			this->tabPage2->Controls->Add(this->txtCorners1);
			this->tabPage2->Controls->Add(this->txtCardR1);
			this->tabPage2->Controls->Add(this->txtCardY1);
			this->tabPage2->Controls->Add(this->txtfaults1);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->txtGoals1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1117, 549);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Estadísticas";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// cmbteam2
			// 
			this->cmbteam2->FormattingEnabled = true;
			this->cmbteam2->Location = System::Drawing::Point(331, 155);
			this->cmbteam2->Name = L"cmbteam2";
			this->cmbteam2->Size = System::Drawing::Size(121, 24);
			this->cmbteam2->TabIndex = 30;
			// 
			// cmbteam1
			// 
			this->cmbteam1->FormattingEnabled = true;
			this->cmbteam1->Location = System::Drawing::Point(24, 155);
			this->cmbteam1->Name = L"cmbteam1";
			this->cmbteam1->Size = System::Drawing::Size(121, 24);
			this->cmbteam1->TabIndex = 29;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(938, 374);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 26;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(774, 374);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 26;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			// 
			// btnAgragar
			// 
			this->btnAgragar->Location = System::Drawing::Point(603, 374);
			this->btnAgragar->Name = L"btnAgragar";
			this->btnAgragar->Size = System::Drawing::Size(75, 23);
			this->btnAgragar->TabIndex = 25;
			this->btnAgragar->Text = L"Agregar";
			this->btnAgragar->UseVisualStyleBackColor = true;
			// 
			// dgvStatistics
			// 
			this->dgvStatistics->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStatistics->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Teams,
					this->TeamVisit, this->Goals, this->Faults, this->YellowCards, this->RedCards
			});
			this->dgvStatistics->Location = System::Drawing::Point(481, 107);
			this->dgvStatistics->Name = L"dgvStatistics";
			this->dgvStatistics->RowHeadersWidth = 51;
			this->dgvStatistics->RowTemplate->Height = 24;
			this->dgvStatistics->Size = System::Drawing::Size(582, 232);
			this->dgvStatistics->TabIndex = 24;
			// 
			// Teams
			// 
			this->Teams->HeaderText = L"Equipos local";
			this->Teams->MinimumWidth = 6;
			this->Teams->Name = L"Teams";
			this->Teams->Width = 130;
			// 
			// TeamVisit
			// 
			this->TeamVisit->HeaderText = L"Equipo visitante";
			this->TeamVisit->MinimumWidth = 6;
			this->TeamVisit->Name = L"TeamVisit";
			this->TeamVisit->Width = 130;
			// 
			// Goals
			// 
			this->Goals->HeaderText = L"Goles";
			this->Goals->MinimumWidth = 6;
			this->Goals->Name = L"Goals";
			this->Goals->Width = 125;
			// 
			// Faults
			// 
			this->Faults->HeaderText = L"Faltas";
			this->Faults->MinimumWidth = 6;
			this->Faults->Name = L"Faults";
			this->Faults->Width = 125;
			// 
			// YellowCards
			// 
			this->YellowCards->HeaderText = L"Tarjetas Amarillas";
			this->YellowCards->MinimumWidth = 6;
			this->YellowCards->Name = L"YellowCards";
			this->YellowCards->Width = 125;
			// 
			// RedCards
			// 
			this->RedCards->HeaderText = L"Tarjetas Rojas";
			this->RedCards->MinimumWidth = 6;
			this->RedCards->Name = L"RedCards";
			this->RedCards->Width = 80;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(166, 216);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Estadísticas por Partido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(182, 418);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 16);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Tiros de Esquina";
			// 
			// txtCorners2
			// 
			this->txtCorners2->Location = System::Drawing::Point(332, 418);
			this->txtCorners2->Name = L"txtCorners2";
			this->txtCorners2->Size = System::Drawing::Size(107, 22);
			this->txtCorners2->TabIndex = 19;
			// 
			// txtCardR2
			// 
			this->txtCardR2->Location = System::Drawing::Point(332, 376);
			this->txtCardR2->Name = L"txtCardR2";
			this->txtCardR2->Size = System::Drawing::Size(107, 22);
			this->txtCardR2->TabIndex = 18;
			// 
			// txtCardY2
			// 
			this->txtCardY2->Location = System::Drawing::Point(332, 340);
			this->txtCardY2->Name = L"txtCardY2";
			this->txtCardY2->Size = System::Drawing::Size(107, 22);
			this->txtCardY2->TabIndex = 17;
			// 
			// txtfaults2
			// 
			this->txtfaults2->Location = System::Drawing::Point(332, 298);
			this->txtfaults2->Name = L"txtfaults2";
			this->txtfaults2->Size = System::Drawing::Size(107, 22);
			this->txtfaults2->TabIndex = 16;
			// 
			// txtGoals2
			// 
			this->txtGoals2->Location = System::Drawing::Point(332, 255);
			this->txtGoals2->Name = L"txtGoals2";
			this->txtGoals2->Size = System::Drawing::Size(107, 22);
			this->txtGoals2->TabIndex = 14;
			// 
			// txtCorners1
			// 
			this->txtCorners1->Location = System::Drawing::Point(34, 418);
			this->txtCorners1->Name = L"txtCorners1";
			this->txtCorners1->Size = System::Drawing::Size(107, 22);
			this->txtCorners1->TabIndex = 13;
			// 
			// txtCardR1
			// 
			this->txtCardR1->Location = System::Drawing::Point(34, 376);
			this->txtCardR1->Name = L"txtCardR1";
			this->txtCardR1->Size = System::Drawing::Size(107, 22);
			this->txtCardR1->TabIndex = 12;
			// 
			// txtCardY1
			// 
			this->txtCardY1->Location = System::Drawing::Point(34, 340);
			this->txtCardY1->Name = L"txtCardY1";
			this->txtCardY1->Size = System::Drawing::Size(107, 22);
			this->txtCardY1->TabIndex = 11;
			// 
			// txtfaults1
			// 
			this->txtfaults1->Location = System::Drawing::Point(34, 298);
			this->txtfaults1->Name = L"txtfaults1";
			this->txtfaults1->Size = System::Drawing::Size(107, 22);
			this->txtfaults1->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(193, 376);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Tarjetas Rojas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(182, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Tarjetas Amarillas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(211, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Faltas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(202, 255);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Marcador";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(318, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(133, 110);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(20, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 110);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// txtGoals1
			// 
			this->txtGoals1->Location = System::Drawing::Point(34, 255);
			this->txtGoals1->Name = L"txtGoals1";
			this->txtGoals1->Size = System::Drawing::Size(107, 22);
			this->txtGoals1->TabIndex = 0;
			// 
			// Results
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 599);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Results";
			this->Text = L"Resultados";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStatistics))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
