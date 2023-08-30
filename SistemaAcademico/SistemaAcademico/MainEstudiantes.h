#pragma once
#include "Entities.h"

namespace SistemaAcademico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Entities;

	/// <summary>
	/// Resumen de MainEstudiantes
	/// </summary>
	public ref class MainEstudiantes : public System::Windows::Forms::Form
	{
	public:
		MainEstudiantes(Estudiantes estudiantes)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			lblMatricula->Text = gcnew String(estudiantes.Getmatricula().c_str());
			lblCarrera->Text = gcnew String(estudiantes.Getcarrera().c_str());
			lblNombre->Text = gcnew String(estudiantes.Getnombre().c_str()) + " " + gcnew String(estudiantes.Getapellido().c_str());
			lblRol->Text = gcnew String(estudiantes.Getrol().c_str());

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainEstudiantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblMatricula;
	private: System::Windows::Forms::Label^ lblCarrera;
	protected:



	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblRol;


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
			this->lblMatricula = (gcnew System::Windows::Forms::Label());
			this->lblCarrera = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblRol = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblMatricula
			// 
			this->lblMatricula->AutoSize = true;
			this->lblMatricula->Location = System::Drawing::Point(173, 44);
			this->lblMatricula->Name = L"lblMatricula";
			this->lblMatricula->Size = System::Drawing::Size(50, 13);
			this->lblMatricula->TabIndex = 0;
			this->lblMatricula->Text = L"Matricula";
			// 
			// lblCarrera
			// 
			this->lblCarrera->AutoSize = true;
			this->lblCarrera->Location = System::Drawing::Point(173, 88);
			this->lblCarrera->Name = L"lblCarrera";
			this->lblCarrera->Size = System::Drawing::Size(41, 13);
			this->lblCarrera->TabIndex = 1;
			this->lblCarrera->Text = L"Carrera";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(173, 130);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(44, 13);
			this->lblNombre->TabIndex = 3;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblRol
			// 
			this->lblRol->AutoSize = true;
			this->lblRol->Location = System::Drawing::Point(173, 171);
			this->lblRol->Name = L"lblRol";
			this->lblRol->Size = System::Drawing::Size(23, 13);
			this->lblRol->TabIndex = 4;
			this->lblRol->Text = L"Rol";
			// 
			// MainEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 509);
			this->Controls->Add(this->lblRol);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblCarrera);
			this->Controls->Add(this->lblMatricula);
			this->Name = L"MainEstudiantes";
			this->Text = L"MainEstudiantes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void MainEstudiantes_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (Application::OpenForms->Count == 1) {
			Application::Exit();
		}
	}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
