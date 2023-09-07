#pragma once
#include <msclr/marshal_cppstd.h>
#include "Entities.h"
#include <vector>
#include "DataHandler.h"

namespace SistemaAcademico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Entities;
	using namespace DataMySql;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ViewEstudiantes
	/// </summary>
	public ref class ViewEstudiantes : public System::Windows::Forms::Form
	{
	private:
		Estudiantes^ estInf;
	public:
		ViewEstudiantes(Estudiantes^ estudiante)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			lblMatricula->Text = estudiante->Matricula;
			lblCarrera->Text = estudiante->CodigoCarrera + " - " + estudiante->Carrera;
			lblNombre->Text = estudiante->Nombre + " " + estudiante->Apellido;
			lblRol->Text = estudiante->Rol;
			lblCarreraP->Text = estudiante->CodigoCarrera + " - " + estudiante->Carrera;
			estInf = estudiante;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ViewEstudiantes()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:





	private: System::Windows::Forms::Panel^ panelMenu;

	private: System::Windows::Forms::Button^ btnPensum;


	private: System::Windows::Forms::Button^ btnselec;
	private: System::Windows::Forms::Button^ btninicio;
	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Label^ lblRol;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ DGVMateriasSeleccionadas;

	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblCarrera;
	private: System::Windows::Forms::Label^ lblMatricula;
	private: System::Windows::Forms::Label^ lblCarreraP;
	private: System::Windows::Forms::DataGridView^ DGVPensum;
	private: System::Windows::Forms::Panel^ panelPensum;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListView^ listView1;



















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
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnselec = (gcnew System::Windows::Forms::Button());
			this->btninicio = (gcnew System::Windows::Forms::Button());
			this->btnPensum = (gcnew System::Windows::Forms::Button());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->lblRol = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DGVMateriasSeleccionadas = (gcnew System::Windows::Forms::DataGridView());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblCarrera = (gcnew System::Windows::Forms::Label());
			this->lblMatricula = (gcnew System::Windows::Forms::Label());
			this->lblCarreraP = (gcnew System::Windows::Forms::Label());
			this->DGVPensum = (gcnew System::Windows::Forms::DataGridView());
			this->panelPensum = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->panelMenu->SuspendLayout();
			this->panelMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMateriasSeleccionadas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPensum))->BeginInit();
			this->panelPensum->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->btnselec);
			this->panelMenu->Controls->Add(this->btninicio);
			this->panelMenu->Controls->Add(this->btnPensum);
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(935, 55);
			this->panelMenu->TabIndex = 5;
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
			this->btnselec->Location = System::Drawing::Point(384, 0);
			this->btnselec->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnselec->Name = L"btnselec";
			this->btnselec->Size = System::Drawing::Size(184, 55);
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
			this->btninicio->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btninicio->Name = L"btninicio";
			this->btninicio->Size = System::Drawing::Size(184, 55);
			this->btninicio->TabIndex = 7;
			this->btninicio->Text = L"Inicio";
			this->btninicio->UseVisualStyleBackColor = false;
			this->btninicio->Click += gcnew System::EventHandler(this, &ViewEstudiantes::btninicio_Click);
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
			this->btnPensum->Location = System::Drawing::Point(192, 0);
			this->btnPensum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnPensum->Name = L"btnPensum";
			this->btnPensum->Size = System::Drawing::Size(184, 55);
			this->btnPensum->TabIndex = 6;
			this->btnPensum->Text = L"Ver Pensum";
			this->btnPensum->UseVisualStyleBackColor = false;
			this->btnPensum->Click += gcnew System::EventHandler(this, &ViewEstudiantes::btnPensum_Click);
			// 
			// panelMain
			// 
			this->panelMain->AutoSize = true;
			this->panelMain->Controls->Add(this->lblRol);
			this->panelMain->Controls->Add(this->label1);
			this->panelMain->Controls->Add(this->DGVMateriasSeleccionadas);
			this->panelMain->Controls->Add(this->lblNombre);
			this->panelMain->Controls->Add(this->lblCarrera);
			this->panelMain->Controls->Add(this->lblMatricula);
			this->panelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMain->Location = System::Drawing::Point(0, 0);
			this->panelMain->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(935, 626);
			this->panelMain->TabIndex = 8;
			// 
			// lblRol
			// 
			this->lblRol->AutoSize = true;
			this->lblRol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRol->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblRol->Location = System::Drawing::Point(47, 95);
			this->lblRol->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRol->Name = L"lblRol";
			this->lblRol->Size = System::Drawing::Size(58, 31);
			this->lblRol->TabIndex = 11;
			this->lblRol->Text = L"Rol";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(49, 279);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Materias seleccionadas";
			// 
			// DGVMateriasSeleccionadas
			// 
			this->DGVMateriasSeleccionadas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGVMateriasSeleccionadas->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGVMateriasSeleccionadas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVMateriasSeleccionadas->Location = System::Drawing::Point(53, 327);
			this->DGVMateriasSeleccionadas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DGVMateriasSeleccionadas->Name = L"DGVMateriasSeleccionadas";
			this->DGVMateriasSeleccionadas->RowHeadersWidth = 51;
			this->DGVMateriasSeleccionadas->Size = System::Drawing::Size(835, 228);
			this->DGVMateriasSeleccionadas->TabIndex = 12;
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(137, 178);
			this->lblNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(79, 24);
			this->lblNombre->TabIndex = 10;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblCarrera
			// 
			this->lblCarrera->AutoSize = true;
			this->lblCarrera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCarrera->Location = System::Drawing::Point(51, 145);
			this->lblCarrera->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCarrera->Name = L"lblCarrera";
			this->lblCarrera->Size = System::Drawing::Size(73, 20);
			this->lblCarrera->TabIndex = 9;
			this->lblCarrera->Text = L"Carrera";
			// 
			// lblMatricula
			// 
			this->lblMatricula->AutoSize = true;
			this->lblMatricula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMatricula->Location = System::Drawing::Point(51, 178);
			this->lblMatricula->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMatricula->Name = L"lblMatricula";
			this->lblMatricula->Size = System::Drawing::Size(85, 24);
			this->lblMatricula->TabIndex = 8;
			this->lblMatricula->Text = L"Matricula";
			// 
			// lblCarreraP
			// 
			this->lblCarreraP->AutoSize = true;
			this->lblCarreraP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCarreraP->Location = System::Drawing::Point(51, 145);
			this->lblCarreraP->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCarreraP->Name = L"lblCarreraP";
			this->lblCarreraP->Size = System::Drawing::Size(73, 20);
			this->lblCarreraP->TabIndex = 0;
			this->lblCarreraP->Text = L"Carrera";
			// 
			// DGVPensum
			// 
			this->DGVPensum->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGVPensum->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGVPensum->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVPensum->Location = System::Drawing::Point(53, 286);
			this->DGVPensum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DGVPensum->Name = L"DGVPensum";
			this->DGVPensum->RowHeadersWidth = 51;
			this->DGVPensum->Size = System::Drawing::Size(835, 228);
			this->DGVPensum->TabIndex = 8;
			// 
			// panelPensum
			// 
			this->panelPensum->Controls->Add(this->panel1);
			this->panelPensum->Controls->Add(this->DGVPensum);
			this->panelPensum->Controls->Add(this->lblCarreraP);
			this->panelPensum->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelPensum->Location = System::Drawing::Point(0, 0);
			this->panelPensum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelPensum->Name = L"panelPensum";
			this->panelPensum->Size = System::Drawing::Size(935, 626);
			this->panelPensum->TabIndex = 1;
			this->panelPensum->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(935, 626);
			this->panel1->TabIndex = 9;
			this->panel1->Visible = false;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(85, 168);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(121, 97);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// ViewEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 626);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelPensum);
			this->Controls->Add(this->panelMain);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ViewEstudiantes";
			this->Text = L"ViewEstudiantes";
			this->panelMenu->ResumeLayout(false);
			this->panelMain->ResumeLayout(false);
			this->panelMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMateriasSeleccionadas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPensum))->EndInit();
			this->panelPensum->ResumeLayout(false);
			this->panelPensum->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPensum_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string codigo = msclr::interop::marshal_as<std::string>(estInf->CodigoCarrera);
		List<Entities::Pensum^>^ pensums = DataHandler::getPensum(codigo);

		// Configurar las columnas del DataGridView (si aún no están configuradas)
		if (DGVPensum->Columns->Count == 0) {
			DGVPensum->Columns->Add("codigo_materia", "Codigo Materia");
			DGVPensum->Columns->Add("nombre_materia", "Nombre Materia");
			DGVPensum->Columns->Add("creditos", "Creditos");
		}
		else {
			DGVPensum->Columns->Clear();
			DGVPensum->Columns->Add("codigo_materia", "Codigo Materia");
			DGVPensum->Columns->Add("nombre_materia", "Nombre Materia");
			DGVPensum->Columns->Add("creditos", "Creditos");
		}

		DGVPensum->Rows->Clear();

		// Llenar el DataGridView con los datos de las materias
		for each (Entities::Pensum^ pensum in pensums) {
			DataGridViewRow^ row = gcnew DataGridViewRow();

			DataGridViewCell^ cellCodigo = gcnew DataGridViewTextBoxCell();
			cellCodigo->Value = pensum->CodigoMateria;
			row->Cells->Add(cellCodigo);

			DataGridViewCell^ cellNombre = gcnew DataGridViewTextBoxCell();
			cellNombre->Value = pensum->NombreMateria;
			row->Cells->Add(cellNombre);

			DataGridViewCell^ cellCreditos = gcnew DataGridViewTextBoxCell();
			cellCreditos->Value = pensum->Creditos;
			row->Cells->Add(cellCreditos);

			DGVPensum->Rows->Add(row);
		}

		panelMain->Visible = false;
		panelPensum->Visible = true;
	}
	private: System::Void btninicio_Click(System::Object^ sender, System::EventArgs^ e) {
		panelMain->Visible = true;
		panelPensum->Visible = false;
	}



};
}
