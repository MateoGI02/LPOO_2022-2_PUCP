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
	/// Resumen de InscriptionSearchFrom
	/// </summary>
	public ref class InscriptionSearchFrom : public System::Windows::Forms::Form
	{
	public:
		InscriptionSearchFrom(void)
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
		~InscriptionSearchFrom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtDocNumber;

	private: System::Windows::Forms::TextBox^ txtNameDescription;
	private: System::Windows::Forms::DataGridView^ dgvSearch;
	private: System::Windows::Forms::Button^ btnCancelSearch;






	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDocNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->dgvSearch = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCancelSearch = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearch))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DNI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombres/Apellidos";
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(143, 23);
			this->txtDocNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(132, 22);
			this->txtDocNumber->TabIndex = 3;
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(143, 65);
			this->txtNameDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(340, 22);
			this->txtNameDescription->TabIndex = 4;
			// 
			// dgvSearch
			// 
			this->dgvSearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSearch->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->ProductName,
					this->Price
			});
			this->dgvSearch->Location = System::Drawing::Point(51, 149);
			this->dgvSearch->Margin = System::Windows::Forms::Padding(4);
			this->dgvSearch->Name = L"dgvSearch";
			this->dgvSearch->RowHeadersWidth = 51;
			this->dgvSearch->Size = System::Drawing::Size(474, 185);
			this->dgvSearch->TabIndex = 9;
			this->dgvSearch->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InscriptionSearchFrom::dgvSearch_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 30;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 200;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Apellido";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 200;
			// 
			// btnCancelSearch
			// 
			this->btnCancelSearch->Location = System::Drawing::Point(310, 98);
			this->btnCancelSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnCancelSearch->Name = L"btnCancelSearch";
			this->btnCancelSearch->Size = System::Drawing::Size(128, 28);
			this->btnCancelSearch->TabIndex = 8;
			this->btnCancelSearch->Text = L"Cancelar";
			this->btnCancelSearch->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(121, 98);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(129, 28);
			this->btnSearch->TabIndex = 7;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &InscriptionSearchFrom::btnSearch_Click);
			// 
			// InscriptionSearchFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 347);
			this->Controls->Add(this->dgvSearch);
			this->Controls->Add(this->btnCancelSearch);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtDocNumber);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"InscriptionSearchFrom";
			this->Text = L"InscriptionSearchFrom";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearch))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDocNumber->Text->Trim() != "") {
			//Búsqueda de producto por el código ingresado por el usuario
			Referee^ r = Controller::QueryRefereeById(Convert::ToInt32(txtDocNumber->Text->Trim()));
			//Se borran los datos del grid.
			dgvSearch->Rows->Clear();
			dgvSearch->Rows->Add(gcnew array<String^> {
				r->DocNumber,
					r->Name,
			
					Convert::ToString(r->DocNumber)
			});
		}
		List<Referee^>^ refereeList = Controller::QueryRefereesByName(txtNameDescription->Text->Trim());
		dgvSearch->Rows->Clear();
			for (int i = 0; i < refereeList->Count; i++) {
				dgvSearch->Rows->Add(gcnew array<String^> {
						 refereeList[i]->Name,
						refereeList[i]->Surname,
						
				});
			}

	}
	
	
private: System::Void dgvSearch_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}

};
}
