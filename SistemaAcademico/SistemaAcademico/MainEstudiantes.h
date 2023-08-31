#pragma once
#include "Entities.h"
#include "Pensum.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
			lblMatricula->Text = gcnew String(estudiantes.Getmatricula().c_str());
			lblCarrera->Text = gcnew String(estudiantes.Getcodigocarrera().c_str()) + " - " + gcnew String(estudiantes.Getcarrera().c_str());
			lblNombre->Text = gcnew String(estudiantes.Getnombre().c_str()) + " " + gcnew String(estudiantes.Getapellido().c_str());
			lblRol->Text = gcnew String(estudiantes.Getrol().c_str());
			std::string codigo_carrera = estudiantes.Getcodigocarrera();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnPensum;



	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblMatricula = (gcnew System::Windows::Forms::Label());
			this->lblCarrera = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblRol = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnPensum = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblMatricula
			// 
			this->lblMatricula->AutoSize = true;
			this->lblMatricula->Location = System::Drawing::Point(231, 54);
			this->lblMatricula->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMatricula->Name = L"lblMatricula";
			this->lblMatricula->Size = System::Drawing::Size(61, 16);
			this->lblMatricula->TabIndex = 0;
			this->lblMatricula->Text = L"Matricula";
			// 
			// lblCarrera
			// 
			this->lblCarrera->AutoSize = true;
			this->lblCarrera->Location = System::Drawing::Point(231, 108);
			this->lblCarrera->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCarrera->Name = L"lblCarrera";
			this->lblCarrera->Size = System::Drawing::Size(52, 16);
			this->lblCarrera->TabIndex = 1;
			this->lblCarrera->Text = L"Carrera";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(231, 160);
			this->lblNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(56, 16);
			this->lblNombre->TabIndex = 3;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblRol
			// 
			this->lblRol->AutoSize = true;
			this->lblRol->Location = System::Drawing::Point(231, 210);
			this->lblRol->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRol->Name = L"lblRol";
			this->lblRol->Size = System::Drawing::Size(28, 16);
			this->lblRol->TabIndex = 4;
			this->lblRol->Text = L"Rol";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->btnPensum);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(183, 629);
			this->panel1->TabIndex = 5;
			// 
			// btnPensum
			// 
			this->btnPensum->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPensum->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnPensum->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnPensum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPensum->Location = System::Drawing::Point(-1, 96);
			this->btnPensum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnPensum->Name = L"btnPensum";
			this->btnPensum->Size = System::Drawing::Size(184, 39);
			this->btnPensum->TabIndex = 6;
			this->btnPensum->Text = L"Ver Pensum";
			this->btnPensum->UseVisualStyleBackColor = false;
			this->btnPensum->Click += gcnew System::EventHandler(this, &MainEstudiantes::btnPensum_Click);
			// 
			// MainEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 626);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblRol);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblCarrera);
			this->Controls->Add(this->lblMatricula);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MainEstudiantes";
			this->Text = L"MainEstudiantes";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
	private: System::Void btnPensum_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//std::string codigo_carrea;
		//Pensum^ pensum = gcnew Pensum(codigo_carrea);
		//this->Close();

		//pensum->Show();
	}
};
}
