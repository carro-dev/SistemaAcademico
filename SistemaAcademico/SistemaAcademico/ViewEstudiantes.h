#pragma once
#include <msclr/marshal_cppstd.h>
#include "Entities.h"
#include "DataHandler.h"
#include <nlohmann/json.hpp>

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
	using json = nlohmann::json;

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
	private: System::Windows::Forms::Panel^ panelSeleccion;


	private: System::Windows::Forms::Button^ btnAgregarSeccion;
	private: System::Windows::Forms::DataGridView^ DGVSecciones;
	private: System::Windows::Forms::ListView^ lstMaterias;
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
			this->panelSeleccion = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lstMaterias = (gcnew System::Windows::Forms::ListView());
			this->btnAgregarSeccion = (gcnew System::Windows::Forms::Button());
			this->DGVSecciones = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelMenu->SuspendLayout();
			this->panelMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMateriasSeleccionadas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPensum))->BeginInit();
			this->panelPensum->SuspendLayout();
			this->panelSeleccion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVSecciones))->BeginInit();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->btnselec);
			this->panelMenu->Controls->Add(this->btninicio);
			this->panelMenu->Controls->Add(this->btnPensum);
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(4);
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
			this->btnselec->Margin = System::Windows::Forms::Padding(4);
			this->btnselec->Name = L"btnselec";
			this->btnselec->Size = System::Drawing::Size(184, 55);
			this->btnselec->TabIndex = 8;
			this->btnselec->Text = L"Seleccion";
			this->btnselec->UseVisualStyleBackColor = false;
			this->btnselec->Click += gcnew System::EventHandler(this, &ViewEstudiantes::btnselec_Click);
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
			this->btninicio->Margin = System::Windows::Forms::Padding(4);
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
			this->btnPensum->Margin = System::Windows::Forms::Padding(4);
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
			this->panelMain->Margin = System::Windows::Forms::Padding(4);
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
			this->DGVMateriasSeleccionadas->Margin = System::Windows::Forms::Padding(4);
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
			this->DGVPensum->Margin = System::Windows::Forms::Padding(4);
			this->DGVPensum->Name = L"DGVPensum";
			this->DGVPensum->RowHeadersWidth = 51;
			this->DGVPensum->Size = System::Drawing::Size(835, 228);
			this->DGVPensum->TabIndex = 8;
			// 
			// panelPensum
			// 
			this->panelPensum->Controls->Add(this->DGVPensum);
			this->panelPensum->Controls->Add(this->lblCarreraP);
			this->panelPensum->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelPensum->Location = System::Drawing::Point(0, 0);
			this->panelPensum->Margin = System::Windows::Forms::Padding(4);
			this->panelPensum->Name = L"panelPensum";
			this->panelPensum->Size = System::Drawing::Size(935, 626);
			this->panelPensum->TabIndex = 1;
			this->panelPensum->Visible = false;
			// 
			// panelSeleccion
			// 
			this->panelSeleccion->Controls->Add(this->label3);
			this->panelSeleccion->Controls->Add(this->label2);
			this->panelSeleccion->Controls->Add(this->lstMaterias);
			this->panelSeleccion->Controls->Add(this->btnAgregarSeccion);
			this->panelSeleccion->Controls->Add(this->DGVSecciones);
			this->panelSeleccion->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelSeleccion->Location = System::Drawing::Point(0, 0);
			this->panelSeleccion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelSeleccion->Name = L"panelSeleccion";
			this->panelSeleccion->Size = System::Drawing::Size(935, 626);
			this->panelSeleccion->TabIndex = 9;
			this->panelSeleccion->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Materias";
			// 
			// lstMaterias
			// 
			this->lstMaterias->HideSelection = false;
			this->lstMaterias->Location = System::Drawing::Point(55, 129);
			this->lstMaterias->Name = L"lstMaterias";
			this->lstMaterias->Size = System::Drawing::Size(830, 202);
			this->lstMaterias->TabIndex = 11;
			this->lstMaterias->UseCompatibleStateImageBehavior = false;
			this->lstMaterias->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewEstudiantes::lstMaterias_SelectedIndexChanged);
			// 
			// btnAgregarSeccion
			// 
			this->btnAgregarSeccion->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAgregarSeccion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnAgregarSeccion->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAgregarSeccion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAgregarSeccion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAgregarSeccion->Location = System::Drawing::Point(757, 492);
			this->btnAgregarSeccion->Margin = System::Windows::Forms::Padding(4);
			this->btnAgregarSeccion->Name = L"btnAgregarSeccion";
			this->btnAgregarSeccion->Size = System::Drawing::Size(131, 39);
			this->btnAgregarSeccion->TabIndex = 9;
			this->btnAgregarSeccion->Text = L"Agregar Seccion";
			this->btnAgregarSeccion->UseVisualStyleBackColor = false;
			this->btnAgregarSeccion->Click += gcnew System::EventHandler(this, &ViewEstudiantes::btnAgregarSeccion_Click);
			// 
			// DGVSecciones
			// 
			this->DGVSecciones->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGVSecciones->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGVSecciones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVSecciones->Location = System::Drawing::Point(53, 381);
			this->DGVSecciones->Name = L"DGVSecciones";
			this->DGVSecciones->RowHeadersWidth = 51;
			this->DGVSecciones->RowTemplate->Height = 24;
			this->DGVSecciones->Size = System::Drawing::Size(684, 150);
			this->DGVSecciones->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 362);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Secciones";
			// 
			// ViewEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 626);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelSeleccion);
			this->Controls->Add(this->panelPensum);
			this->Controls->Add(this->panelMain);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewEstudiantes";
			this->Text = L"ViewEstudiantes";
			this->panelMenu->ResumeLayout(false);
			this->panelMain->ResumeLayout(false);
			this->panelMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMateriasSeleccionadas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPensum))->EndInit();
			this->panelPensum->ResumeLayout(false);
			this->panelPensum->PerformLayout();
			this->panelSeleccion->ResumeLayout(false);
			this->panelSeleccion->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVSecciones))->EndInit();
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
		panelSeleccion->Visible = false;
	}
	private: System::Void btninicio_Click(System::Object^ sender, System::EventArgs^ e) {
		panelMain->Visible = true;
		panelPensum->Visible = false;
		panelSeleccion->Visible = false;
	}

private: System::Void btnselec_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMain->Visible = false;
	panelPensum->Visible = false;
	panelSeleccion->Visible = true;

	List<Entities::Materias^>^ materias = DataHandler::getMaterias();

	lstMaterias->Items->Clear();
	lstMaterias->Columns->Clear();

	lstMaterias->Columns->Add("Codigo Materia", 100);
	lstMaterias->Columns->Add("Nombre Materia", 100);
	lstMaterias->Columns->Add("Creditos", 100);



	for each (ColumnHeader ^ column in lstMaterias->Columns) {
		column->Text = column->Text;
	}


	for each (Materias ^ materia in materias) {
		ListViewItem^ item = gcnew ListViewItem(gcnew array<String^>{
			materia->CodigoMateria, 
			materia->NombreMateria, 
			materia->Creditos
		});

		lstMaterias->Items->Add(item);
	}
}
private: System::Void lstMaterias_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	if (lstMaterias->SelectedItems->Count > 0) {
		System::String^ tempCodigo = lstMaterias->SelectedItems[0]->Text;
		std::string codigo = msclr::interop::marshal_as<std::string>(tempCodigo);

		List<Secciones^>^ secciones = DataHandler::getSecciones(codigo);

		// Configurar las columnas del DataGridView (si aún no están configuradas)
		if (DGVSecciones->Columns->Count == 0) {
			DGVSecciones->Columns->Add("id_seccion", "ID Seccion");
			DGVSecciones->Columns->Add("numero_seccion", "Numero Seccion");
			DGVSecciones->Columns->Add("codigo_materia", "Codigo Materia");
			DGVSecciones->Columns->Add("nombre_materia", "Nombre Materia");
			DGVSecciones->Columns->Add("nombre_docente", "Nombre Docente");
			DGVSecciones->Columns->Add("apellido_docente", "Apellido Docente");
			DGVSecciones->Columns->Add("horario", "Horario");

		}
		else {
			DGVSecciones->Columns->Clear();
			DGVSecciones->Columns->Add("id_seccion", "ID Seccion");
			DGVSecciones->Columns->Add("numero_seccion", "Numero Seccion");
			DGVSecciones->Columns->Add("codigo_materia", "Codigo Materia");
			DGVSecciones->Columns->Add("nombre_materia", "Nombre Materia");
			DGVSecciones->Columns->Add("nombre_docente", "Nombre Docente");
			DGVSecciones->Columns->Add("apellido_docente", "Apellido Docente");
			DGVSecciones->Columns->Add("horario", "Horario");
		}

		DGVSecciones->Rows->Clear();



		// Llenar el DataGridView con los datos de las materias
		for each (Entities::Secciones ^ seccion in secciones) {
			DataGridViewRow^ row = gcnew DataGridViewRow();

			DataGridViewCell^ cellIdSeccion = gcnew DataGridViewTextBoxCell();
			cellIdSeccion->Value = seccion->IdSeccion;
			row->Cells->Add(cellIdSeccion);

			DataGridViewCell^ cellNumSeccion = gcnew DataGridViewTextBoxCell();
			cellNumSeccion->Value = seccion->NumeroSeccion;
			row->Cells->Add(cellNumSeccion);

			DataGridViewCell^ cellCodMateria = gcnew DataGridViewTextBoxCell();
			cellCodMateria->Value = seccion->CodigoMateria;
			row->Cells->Add(cellCodMateria);

			DataGridViewCell^ cellNomMateria = gcnew DataGridViewTextBoxCell();
			cellNomMateria->Value = seccion->NombreMateria;
			row->Cells->Add(cellNomMateria);

			DataGridViewCell^ cellNomDocente = gcnew DataGridViewTextBoxCell();
			cellNomDocente->Value = seccion->NombreDocente;
			row->Cells->Add(cellNomDocente);

			DataGridViewCell^ cellApeDocente = gcnew DataGridViewTextBoxCell();
			cellApeDocente->Value = seccion->ApellidoDocente;
			row->Cells->Add(cellApeDocente);

			//Aqui se analiza el json que devuelve el campo horario en la base de datos, y se le da formato en el DataGridView

			String^ horarioJson = seccion->Horario;

			try
			{
				json horarioArray = json::parse(msclr::interop::marshal_as<std::string>(horarioJson));

				System::String^ horarioStr = "";

				for (const auto& horario : horarioArray) {
					String^ inicio = gcnew String(horario["Inicio"].get<std::string>().c_str());
					String^ fin = gcnew String(horario["Fin"].get<std::string>().c_str());
					horarioStr += inicio + " - " + fin + "\n";
				}


				DataGridViewCell^ cellHorario = gcnew DataGridViewTextBoxCell();
				cellHorario->Value = horarioStr;
				row->Cells->Add(cellHorario);
			}
			catch (const json::parse_error& e)
			{
					
			}

			DGVSecciones->Rows->Add(row);
		}

	}


}
private: System::Void btnAgregarSeccion_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string idSeccion = msclr::interop::marshal_as<std::string>(DGVSecciones->SelectedRows[0]);
	std::string matricula = msclr::interop::marshal_as<std::string>(estInf->Matricula);

	if (idSeccion == "" || matricula == "") {
		MessageBox::Show("Hubo un error");
	}
	DataHandler::Seleccionar(idSeccion, matricula);
}
};
}
