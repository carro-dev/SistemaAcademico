#pragma once

namespace SistemaAcademico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SeccionAdmin
	/// </summary>
	public ref class SeccionAdmin : public System::Windows::Forms::Form
	{
	public:
		SeccionAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SeccionAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblSeccion;
	private: System::Windows::Forms::LinkLabel^ lblLnkAgregar;
	private: System::Windows::Forms::LinkLabel^ lblLnkEditar;
	private: System::Windows::Forms::Label^ lblNmrSeccion;
	private: System::Windows::Forms::Label^ lblCodMateria;
	private: System::Windows::Forms::Label^ lblCodProfesor;
	private: System::Windows::Forms::Label^ lblHorario;

	private: System::Windows::Forms::TextBox^ txtBoxNmrSeccion;
	private: System::Windows::Forms::TextBox^ txtBoxCodMateria;
	private: System::Windows::Forms::TextBox^ txtBoxCodProfesor;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnsec2;

	private: System::Windows::Forms::Button^ btnmat2;
























	private: System::Windows::Forms::Button^ buttonAgregar;

	private: System::Windows::Forms::ComboBox^ cmbhoraadd;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::ComboBox^ cmbhoraedit;
	private: System::Windows::Forms::Button^ btnedit;
	private: System::Windows::Forms::Button^ btndelete;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnsecc;
	private: System::Windows::Forms::Button^ btnmat;
	private: System::Windows::Forms::TextBox^ txteditprof;
	private: System::Windows::Forms::TextBox^ txteditnum;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ linkedit;
	private: System::Windows::Forms::LinkLabel^ linkadd;
	private: System::Windows::Forms::Label^ label8;











	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblSeccion = (gcnew System::Windows::Forms::Label());
			this->lblLnkAgregar = (gcnew System::Windows::Forms::LinkLabel());
			this->lblLnkEditar = (gcnew System::Windows::Forms::LinkLabel());
			this->lblNmrSeccion = (gcnew System::Windows::Forms::Label());
			this->lblCodMateria = (gcnew System::Windows::Forms::Label());
			this->lblCodProfesor = (gcnew System::Windows::Forms::Label());
			this->lblHorario = (gcnew System::Windows::Forms::Label());
			this->txtBoxNmrSeccion = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxCodMateria = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxCodProfesor = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnsec2 = (gcnew System::Windows::Forms::Button());
			this->btnmat2 = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->cmbhoraadd = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->cmbhoraedit = (gcnew System::Windows::Forms::ComboBox());
			this->btnedit = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnsecc = (gcnew System::Windows::Forms::Button());
			this->btnmat = (gcnew System::Windows::Forms::Button());
			this->txteditprof = (gcnew System::Windows::Forms::TextBox());
			this->txteditnum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->linkedit = (gcnew System::Windows::Forms::LinkLabel());
			this->linkadd = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblSeccion
			// 
			this->lblSeccion->AutoSize = true;
			this->lblSeccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSeccion->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblSeccion->Location = System::Drawing::Point(23, 66);
			this->lblSeccion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSeccion->Name = L"lblSeccion";
			this->lblSeccion->Size = System::Drawing::Size(122, 26);
			this->lblSeccion->TabIndex = 0;
			this->lblSeccion->Text = L"Secciones";
			// 
			// lblLnkAgregar
			// 
			this->lblLnkAgregar->AutoSize = true;
			this->lblLnkAgregar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblLnkAgregar->Location = System::Drawing::Point(25, 111);
			this->lblLnkAgregar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblLnkAgregar->Name = L"lblLnkAgregar";
			this->lblLnkAgregar->Size = System::Drawing::Size(44, 13);
			this->lblLnkAgregar->TabIndex = 1;
			this->lblLnkAgregar->TabStop = true;
			this->lblLnkAgregar->Text = L"Agregar";
			// 
			// lblLnkEditar
			// 
			this->lblLnkEditar->AutoSize = true;
			this->lblLnkEditar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblLnkEditar->Location = System::Drawing::Point(92, 111);
			this->lblLnkEditar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblLnkEditar->Name = L"lblLnkEditar";
			this->lblLnkEditar->Size = System::Drawing::Size(34, 13);
			this->lblLnkEditar->TabIndex = 2;
			this->lblLnkEditar->TabStop = true;
			this->lblLnkEditar->Text = L"Editar";
			// 
			// lblNmrSeccion
			// 
			this->lblNmrSeccion->AutoSize = true;
			this->lblNmrSeccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNmrSeccion->Location = System::Drawing::Point(25, 157);
			this->lblNmrSeccion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNmrSeccion->Name = L"lblNmrSeccion";
			this->lblNmrSeccion->Size = System::Drawing::Size(116, 17);
			this->lblNmrSeccion->TabIndex = 4;
			this->lblNmrSeccion->Text = L"Número Sección:";
			// 
			// lblCodMateria
			// 
			this->lblCodMateria->AutoSize = true;
			this->lblCodMateria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCodMateria->Location = System::Drawing::Point(25, 194);
			this->lblCodMateria->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCodMateria->Name = L"lblCodMateria";
			this->lblCodMateria->Size = System::Drawing::Size(107, 17);
			this->lblCodMateria->TabIndex = 5;
			this->lblCodMateria->Text = L"Código Materia:";
			// 
			// lblCodProfesor
			// 
			this->lblCodProfesor->AutoSize = true;
			this->lblCodProfesor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCodProfesor->Location = System::Drawing::Point(24, 232);
			this->lblCodProfesor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCodProfesor->Name = L"lblCodProfesor";
			this->lblCodProfesor->Size = System::Drawing::Size(114, 17);
			this->lblCodProfesor->TabIndex = 6;
			this->lblCodProfesor->Text = L"Código Profesor:";
			// 
			// lblHorario
			// 
			this->lblHorario->AutoSize = true;
			this->lblHorario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHorario->Location = System::Drawing::Point(24, 267);
			this->lblHorario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblHorario->Name = L"lblHorario";
			this->lblHorario->Size = System::Drawing::Size(59, 17);
			this->lblHorario->TabIndex = 7;
			this->lblHorario->Text = L"Horario:";
			// 
			// txtBoxNmrSeccion
			// 
			this->txtBoxNmrSeccion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxNmrSeccion->Location = System::Drawing::Point(157, 157);
			this->txtBoxNmrSeccion->Margin = System::Windows::Forms::Padding(2);
			this->txtBoxNmrSeccion->Name = L"txtBoxNmrSeccion";
			this->txtBoxNmrSeccion->Size = System::Drawing::Size(125, 20);
			this->txtBoxNmrSeccion->TabIndex = 9;
			// 
			// txtBoxCodMateria
			// 
			this->txtBoxCodMateria->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxCodMateria->Location = System::Drawing::Point(157, 194);
			this->txtBoxCodMateria->Margin = System::Windows::Forms::Padding(2);
			this->txtBoxCodMateria->Name = L"txtBoxCodMateria";
			this->txtBoxCodMateria->Size = System::Drawing::Size(125, 20);
			this->txtBoxCodMateria->TabIndex = 10;
			// 
			// txtBoxCodProfesor
			// 
			this->txtBoxCodProfesor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxCodProfesor->Location = System::Drawing::Point(157, 231);
			this->txtBoxCodProfesor->Margin = System::Windows::Forms::Padding(2);
			this->txtBoxCodProfesor->Name = L"txtBoxCodProfesor";
			this->txtBoxCodProfesor->Size = System::Drawing::Size(288, 20);
			this->txtBoxCodProfesor->TabIndex = 11;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->btnsec2);
			this->panel3->Controls->Add(this->btnmat2);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(701, 45);
			this->panel3->TabIndex = 13;
			// 
			// btnsec2
			// 
			this->btnsec2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnsec2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnsec2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnsec2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnsec2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsec2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnsec2->Location = System::Drawing::Point(144, 0);
			this->btnsec2->Name = L"btnsec2";
			this->btnsec2->Size = System::Drawing::Size(138, 45);
			this->btnsec2->TabIndex = 7;
			this->btnsec2->Text = L"Secciones";
			this->btnsec2->UseVisualStyleBackColor = false;
			// 
			// btnmat2
			// 
			this->btnmat2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnmat2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnmat2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnmat2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmat2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmat2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnmat2->Location = System::Drawing::Point(0, 0);
			this->btnmat2->Name = L"btnmat2";
			this->btnmat2->Size = System::Drawing::Size(138, 45);
			this->btnmat2->TabIndex = 8;
			this->btnmat2->Text = L"Materias";
			this->btnmat2->UseVisualStyleBackColor = false;
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAgregar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAgregar->Location = System::Drawing::Point(27, 330);
			this->buttonAgregar->Margin = System::Windows::Forms::Padding(2);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(98, 32);
			this->buttonAgregar->TabIndex = 8;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = false;
			// 
			// cmbhoraadd
			// 
			this->cmbhoraadd->FormattingEnabled = true;
			this->cmbhoraadd->Location = System::Drawing::Point(157, 267);
			this->cmbhoraadd->Name = L"cmbhoraadd";
			this->cmbhoraadd->Size = System::Drawing::Size(288, 21);
			this->cmbhoraadd->TabIndex = 31;
			this->cmbhoraadd->SelectedIndexChanged += gcnew System::EventHandler(this, &SeccionAdmin::cmbhoraadd_SelectedIndexChanged);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->cmbhoraedit);
			this->panel4->Controls->Add(this->btnedit);
			this->panel4->Controls->Add(this->btndelete);
			this->panel4->Controls->Add(this->dataGridView1);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->txteditprof);
			this->panel4->Controls->Add(this->txteditnum);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->linkedit);
			this->panel4->Controls->Add(this->linkadd);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(701, 509);
			this->panel4->TabIndex = 32;
			// 
			// cmbhoraedit
			// 
			this->cmbhoraedit->FormattingEnabled = true;
			this->cmbhoraedit->Location = System::Drawing::Point(157, 227);
			this->cmbhoraedit->Name = L"cmbhoraedit";
			this->cmbhoraedit->Size = System::Drawing::Size(288, 21);
			this->cmbhoraedit->TabIndex = 30;
			// 
			// btnedit
			// 
			this->btnedit->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnedit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnedit->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnedit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnedit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnedit->Location = System::Drawing::Point(548, 219);
			this->btnedit->Name = L"btnedit";
			this->btnedit->Size = System::Drawing::Size(98, 32);
			this->btnedit->TabIndex = 29;
			this->btnedit->Text = L"Editar";
			this->btnedit->UseVisualStyleBackColor = false;
			// 
			// btndelete
			// 
			this->btndelete->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btndelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btndelete->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btndelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btndelete->Location = System::Drawing::Point(28, 450);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(98, 32);
			this->btndelete->TabIndex = 28;
			this->btndelete->Text = L"Eliminar";
			this->btndelete->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 267);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(618, 162);
			this->dataGridView1->TabIndex = 27;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel5->Controls->Add(this->btnsecc);
			this->panel5->Controls->Add(this->btnmat);
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(701, 45);
			this->panel5->TabIndex = 26;
			// 
			// btnsecc
			// 
			this->btnsecc->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnsecc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnsecc->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnsecc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnsecc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsecc->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnsecc->Location = System::Drawing::Point(144, 0);
			this->btnsecc->Name = L"btnsecc";
			this->btnsecc->Size = System::Drawing::Size(138, 45);
			this->btnsecc->TabIndex = 7;
			this->btnsecc->Text = L"Secciones";
			this->btnsecc->UseVisualStyleBackColor = false;
			// 
			// btnmat
			// 
			this->btnmat->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnmat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnmat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnmat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnmat->Location = System::Drawing::Point(0, 0);
			this->btnmat->Name = L"btnmat";
			this->btnmat->Size = System::Drawing::Size(138, 45);
			this->btnmat->TabIndex = 8;
			this->btnmat->Text = L"Materias";
			this->btnmat->UseVisualStyleBackColor = false;
			// 
			// txteditprof
			// 
			this->txteditprof->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txteditprof->Location = System::Drawing::Point(157, 191);
			this->txteditprof->Margin = System::Windows::Forms::Padding(2);
			this->txteditprof->Name = L"txteditprof";
			this->txteditprof->Size = System::Drawing::Size(288, 20);
			this->txteditprof->TabIndex = 24;
			// 
			// txteditnum
			// 
			this->txteditnum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txteditnum->Location = System::Drawing::Point(157, 153);
			this->txteditnum->Margin = System::Windows::Forms::Padding(2);
			this->txteditnum->Name = L"txteditnum";
			this->txteditnum->Size = System::Drawing::Size(125, 20);
			this->txteditnum->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 227);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Horario:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 192);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 17);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Código Profesor:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(25, 153);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Número Sección:";
			// 
			// linkedit
			// 
			this->linkedit->AutoSize = true;
			this->linkedit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->linkedit->Location = System::Drawing::Point(92, 111);
			this->linkedit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkedit->Name = L"linkedit";
			this->linkedit->Size = System::Drawing::Size(34, 13);
			this->linkedit->TabIndex = 16;
			this->linkedit->TabStop = true;
			this->linkedit->Text = L"Editar";
			// 
			// linkadd
			// 
			this->linkadd->AutoSize = true;
			this->linkadd->ForeColor = System::Drawing::SystemColors::ControlText;
			this->linkadd->Location = System::Drawing::Point(25, 111);
			this->linkadd->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkadd->Name = L"linkadd";
			this->linkadd->Size = System::Drawing::Size(44, 13);
			this->linkadd->TabIndex = 15;
			this->linkadd->TabStop = true;
			this->linkadd->Text = L"Agregar";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SteelBlue;
			this->label8->Location = System::Drawing::Point(23, 66);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(122, 26);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Secciones";
			// 
			// SeccionAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 509);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->cmbhoraadd);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->txtBoxCodProfesor);
			this->Controls->Add(this->txtBoxCodMateria);
			this->Controls->Add(this->txtBoxNmrSeccion);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->lblHorario);
			this->Controls->Add(this->lblCodProfesor);
			this->Controls->Add(this->lblCodMateria);
			this->Controls->Add(this->lblNmrSeccion);
			this->Controls->Add(this->lblLnkEditar);
			this->Controls->Add(this->lblLnkAgregar);
			this->Controls->Add(this->lblSeccion);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SeccionAdmin";
			this->Text = L"SeccionAdmin";
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cmbhoraadd_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
