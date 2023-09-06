#pragma once
#include "Entities.h"
#include "Pensum.h"

namespace SistemaAcademico {

	//using namespace System;
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
	private:
		Estudiantes^ estInf;
	
	public:

		MainEstudiantes(Estudiantes^ estudiante)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			lblMatricula->Text = estudiante->Matricula;
			lblCarrera->Text = estudiante->CodigoCarrera + " - " + estudiante->Carrera;
			lblNombre->Text = estudiante->Nombre + " " + estudiante->Apellido;
			lblRol->Text = estudiante->Rol;
			this->estInf = estudiante;
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnPensum;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnselec;
	private: System::Windows::Forms::Button^ btninicio;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnselec = (gcnew System::Windows::Forms::Button());
			this->btninicio = (gcnew System::Windows::Forms::Button());
			this->btnPensum = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblMatricula
			// 
			this->lblMatricula->AutoSize = true;
			this->lblMatricula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMatricula->Location = System::Drawing::Point(60, 214);
			this->lblMatricula->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMatricula->Name = L"lblMatricula";
			this->lblMatricula->Size = System::Drawing::Size(85, 24);
			this->lblMatricula->TabIndex = 0;
			this->lblMatricula->Text = L"Matricula";
			// 
			// lblCarrera
			// 
			this->lblCarrera->AutoSize = true;
			this->lblCarrera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCarrera->Location = System::Drawing::Point(60, 172);
			this->lblCarrera->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCarrera->Name = L"lblCarrera";
			this->lblCarrera->Size = System::Drawing::Size(73, 20);
			this->lblCarrera->TabIndex = 1;
			this->lblCarrera->Text = L"Carrera";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(158, 214);
			this->lblNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(79, 24);
			this->lblNombre->TabIndex = 3;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblRol
			// 
			this->lblRol->AutoSize = true;
			this->lblRol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRol->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblRol->Location = System::Drawing::Point(56, 109);
			this->lblRol->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRol->Name = L"lblRol";
			this->lblRol->Size = System::Drawing::Size(58, 31);
			this->lblRol->TabIndex = 4;
			this->lblRol->Text = L"Rol";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->btnselec);
			this->panel1->Controls->Add(this->btninicio);
			this->panel1->Controls->Add(this->btnPensum);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1052, 69);
			this->panel1->TabIndex = 5;
			// 
			// btnselec
			// 
			this->btnselec->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnselec->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnselec->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnselec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnselec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnselec->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnselec->Location = System::Drawing::Point(432, 0);
			this->btnselec->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnselec->Name = L"btnselec";
			this->btnselec->Size = System::Drawing::Size(207, 69);
			this->btnselec->TabIndex = 8;
			this->btnselec->Text = L"Seleccion";
			this->btnselec->UseVisualStyleBackColor = false;
			// 
			// btninicio
			// 
			this->btninicio->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btninicio->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btninicio->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btninicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btninicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btninicio->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btninicio->Location = System::Drawing::Point(0, 0);
			this->btninicio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btninicio->Name = L"btninicio";
			this->btninicio->Size = System::Drawing::Size(207, 69);
			this->btninicio->TabIndex = 7;
			this->btninicio->Text = L"Inicio";
			this->btninicio->UseVisualStyleBackColor = false;
			// 
			// btnPensum
			// 
			this->btnPensum->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnPensum->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnPensum->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnPensum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPensum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPensum->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnPensum->Location = System::Drawing::Point(216, 0);
			this->btnPensum->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnPensum->Name = L"btnPensum";
			this->btnPensum->Size = System::Drawing::Size(207, 69);
			this->btnPensum->TabIndex = 6;
			this->btnPensum->Text = L"Ver Pensum";
			this->btnPensum->UseVisualStyleBackColor = false;
			this->btnPensum->Click += gcnew System::EventHandler(this, &MainEstudiantes::btnPensum_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(63, 400);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(939, 285);
			this->dataGridView1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(58, 340);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Materias seleccionadas";
			// 
			// MainEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 783);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblRol);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblCarrera);
			this->Controls->Add(this->lblMatricula);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MainEstudiantes";
			this->Text = L"MainEstudiantes";
			this->Load += gcnew System::EventHandler(this, &MainEstudiantes::MainEstudiantes_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
	private: System::Void btnPensum_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Pensum^ pensum = gcnew Pensum(estInf);
		this->Close();

		pensum->Show();
	}
	private: System::Void MainEstudiantes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
