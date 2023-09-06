#pragma once
#include <msclr/marshal_cppstd.h>
#include "DataHandler.h"
#include "Entities.h"
#include "ViewEstudiantes.h"

namespace SistemaAcademico {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace DataMySql;
	using namespace Entities;



	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:


		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtMatricula;
	private: System::Windows::Forms::TextBox^ txtPassw;
	protected:

	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->txtMatricula = (gcnew System::Windows::Forms::TextBox());
			this->txtPassw = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtMatricula
			// 
			this->txtMatricula->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtMatricula->Location = System::Drawing::Point(131, 110);
			this->txtMatricula->Name = L"txtMatricula";
			this->txtMatricula->Size = System::Drawing::Size(192, 20);
			this->txtMatricula->TabIndex = 0;
			// 
			// txtPassw
			// 
			this->txtPassw->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassw->Location = System::Drawing::Point(131, 144);
			this->txtPassw->Name = L"txtPassw";
			this->txtPassw->PasswordChar = '*';
			this->txtPassw->Size = System::Drawing::Size(192, 20);
			this->txtPassw->TabIndex = 1;
			this->txtPassw->UseSystemPasswordChar = true;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLogin->Location = System::Drawing::Point(49, 203);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(113, 32);
			this->btnLogin->TabIndex = 2;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Matricula";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(44, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Iniciar Sesion";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 282);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassw);
			this->Controls->Add(this->txtMatricula);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {

		//Convertir data del Textbox a las variables
		std::string username = msclr::interop::marshal_as<std::string>(txtMatricula->Text);
		std::string password = msclr::interop::marshal_as<std::string>(txtPassw->Text);

		//Se hace llamado a la funcion Login de DataHandler
		Estudiantes^ estudiante = DataHandler::login(username, password);

		
		if (estudiante->Matricula != "") {
			ViewEstudiantes^ mainestudiantes = gcnew ViewEstudiantes(estudiante);
			mainestudiantes->Show();
			this->Hide();
	
		}
		else {
			MessageBox::Show("Error: Datos Incorrectos","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
	}
};
}
