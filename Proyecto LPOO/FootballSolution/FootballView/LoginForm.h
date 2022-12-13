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
	using namespace FootballController;
	using namespace FootballModel;
	


	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnAccept;
	private: System::Windows::Forms::Button^ btnCancel;

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
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnAccept = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USUARIO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 58);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CONTRASEÑA";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(102, 21);
			this->txtUsername->Margin = System::Windows::Forms::Padding(2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(150, 20);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(102, 55);
			this->txtPassword->Margin = System::Windows::Forms::Padding(2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(150, 20);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtPassword_KeyDown);
			// 
			// btnAccept
			// 
			this->btnAccept->Location = System::Drawing::Point(56, 93);
			this->btnAccept->Margin = System::Windows::Forms::Padding(2);
			this->btnAccept->Name = L"btnAccept";
			this->btnAccept->Size = System::Drawing::Size(84, 37);
			this->btnAccept->TabIndex = 4;
			this->btnAccept->Text = L"Aceptar";
			this->btnAccept->UseVisualStyleBackColor = true;
			this->btnAccept->Click += gcnew System::EventHandler(this, &LoginForm::btnAccept_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(175, 93);
			this->btnCancel->Margin = System::Windows::Forms::Padding(2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(89, 37);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 141);
			this->ControlBox = false;
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAccept);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LoginForm";
			this->Text = L"Autenticación de usuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

// Métodos implementados por el grupo

private: System::Void btnAccept_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyData == Keys::Enter)
		btnAccept->PerformClick();
}



};
}
