/*
	Proyecto LPOO_2022-2 Grupo 3 Horario 07M1
	Sistema de generaci?n de campeonatos
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
			//TODO: agregar c?digo de constructor aqu?
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
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
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(47, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USUARIO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(25, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CONTRASE?A";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(153, 24);
			this->txtUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(199, 22);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(153, 66);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(199, 22);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtPassword_KeyDown);
			// 
			// btnAccept
			// 
			this->btnAccept->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnAccept->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAccept->Location = System::Drawing::Point(50, 114);
			this->btnAccept->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAccept->Name = L"btnAccept";
			this->btnAccept->Size = System::Drawing::Size(111, 46);
			this->btnAccept->TabIndex = 4;
			this->btnAccept->Text = L"Aceptar";
			this->btnAccept->UseVisualStyleBackColor = false;
			this->btnAccept->Click += gcnew System::EventHandler(this, &LoginForm::btnAccept_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnCancel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCancel->Location = System::Drawing::Point(233, 114);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(119, 46);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(401, 174);
			this->ControlBox = false;
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAccept);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LoginForm";
			this->Text = L"Autenticaci?n de usuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

// M?todos implementados por el grupo

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
