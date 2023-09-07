#pragma once

namespace SistemaAcademico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainAdmin
	/// </summary>
	public ref class MainAdmin : public System::Windows::Forms::Form
	{
	public:
		MainAdmin(void)
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
		~MainAdmin()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkadd;
	private: System::Windows::Forms::LinkLabel^ linkedit;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtcodigomat;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtnommat;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtcreditos;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmbArea;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cmbcarrera;
	private: System::Windows::Forms::Button^ btnadd;
	private: System::Windows::Forms::Button^ btnsec;
	private: System::Windows::Forms::Button^ btnmat;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btneditar;
	private: System::Windows::Forms::DataGridView^ dgvmateria;

	private: System::Windows::Forms::TextBox^ txtnommat2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtcodigomat2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btndelete;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkadd = (gcnew System::Windows::Forms::LinkLabel());
			this->linkedit = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtcodigomat = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtnommat = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtcreditos = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbArea = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cmbcarrera = (gcnew System::Windows::Forms::ComboBox());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->btnsec = (gcnew System::Windows::Forms::Button());
			this->btnmat = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtnommat2 = (gcnew System::Windows::Forms::TextBox());
			this->txtcodigomat2 = (gcnew System::Windows::Forms::TextBox());
			this->dgvmateria = (gcnew System::Windows::Forms::DataGridView());
			this->btneditar = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvmateria))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(23, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Materias";
			this->label1->Click += gcnew System::EventHandler(this, &MainAdmin::label1_Click);
			// 
			// linkadd
			// 
			this->linkadd->AutoSize = true;
			this->linkadd->Location = System::Drawing::Point(25, 111);
			this->linkadd->Name = L"linkadd";
			this->linkadd->Size = System::Drawing::Size(44, 13);
			this->linkadd->TabIndex = 2;
			this->linkadd->TabStop = true;
			this->linkadd->Text = L"Agregar";
			// 
			// linkedit
			// 
			this->linkedit->AutoSize = true;
			this->linkedit->Location = System::Drawing::Point(92, 111);
			this->linkedit->Name = L"linkedit";
			this->linkedit->Size = System::Drawing::Size(34, 13);
			this->linkedit->TabIndex = 3;
			this->linkedit->TabStop = true;
			this->linkedit->Text = L"Editar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Codigo de Materia:";
			// 
			// txtcodigomat
			// 
			this->txtcodigomat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtcodigomat->Location = System::Drawing::Point(157, 157);
			this->txtcodigomat->Name = L"txtcodigomat";
			this->txtcodigomat->Size = System::Drawing::Size(105, 20);
			this->txtcodigomat->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nombre de Materia:";
			this->label3->Click += gcnew System::EventHandler(this, &MainAdmin::label3_Click);
			// 
			// txtnommat
			// 
			this->txtnommat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtnommat->Location = System::Drawing::Point(157, 194);
			this->txtnommat->Name = L"txtnommat";
			this->txtnommat->Size = System::Drawing::Size(294, 20);
			this->txtnommat->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Tipo de Materia";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(157, 231);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(166, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 355);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Valor de Creditos";
			// 
			// txtcreditos
			// 
			this->txtcreditos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtcreditos->Location = System::Drawing::Point(157, 355);
			this->txtcreditos->Name = L"txtcreditos";
			this->txtcreditos->Size = System::Drawing::Size(105, 20);
			this->txtcreditos->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 267);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 32);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Area Academica \r\nde Materia";
			this->label6->Click += gcnew System::EventHandler(this, &MainAdmin::label6_Click);
			// 
			// cmbArea
			// 
			this->cmbArea->FormattingEnabled = true;
			this->cmbArea->Location = System::Drawing::Point(157, 267);
			this->cmbArea->Name = L"cmbArea";
			this->cmbArea->Size = System::Drawing::Size(223, 21);
			this->cmbArea->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(24, 312);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Carrera de Materia";
			// 
			// cmbcarrera
			// 
			this->cmbcarrera->FormattingEnabled = true;
			this->cmbcarrera->Location = System::Drawing::Point(157, 311);
			this->cmbcarrera->Name = L"cmbcarrera";
			this->cmbcarrera->Size = System::Drawing::Size(223, 21);
			this->cmbcarrera->TabIndex = 15;
			this->cmbcarrera->Visible = false;
			// 
			// btnadd
			// 
			this->btnadd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnadd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnadd->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnadd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnadd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnadd->Location = System::Drawing::Point(28, 414);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(98, 32);
			this->btnadd->TabIndex = 8;
			this->btnadd->Text = L"Agregar";
			this->btnadd->UseVisualStyleBackColor = false;
			this->btnadd->Click += gcnew System::EventHandler(this, &MainAdmin::btnadd_Click);
			// 
			// btnsec
			// 
			this->btnsec->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnsec->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnsec->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnsec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnsec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsec->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnsec->Location = System::Drawing::Point(144, 0);
			this->btnsec->Name = L"btnsec";
			this->btnsec->Size = System::Drawing::Size(138, 45);
			this->btnsec->TabIndex = 7;
			this->btnsec->Text = L"Secciones";
			this->btnsec->UseVisualStyleBackColor = false;
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
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->btnsec);
			this->panel1->Controls->Add(this->btnmat);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(701, 45);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btndelete);
			this->panel2->Controls->Add(this->btneditar);
			this->panel2->Controls->Add(this->dgvmateria);
			this->panel2->Controls->Add(this->txtnommat2);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->txtcodigomat2);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->linkLabel3);
			this->panel2->Controls->Add(this->linkLabel4);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(701, 509);
			this->panel2->TabIndex = 16;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(701, 45);
			this->panel3->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(144, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Secciones";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Materias";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(37, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(126, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Nombre de Materia:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(37, 162);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 16);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Codigo de Materia:";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(104, 116);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(34, 13);
			this->linkLabel3->TabIndex = 12;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Editar";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(37, 116);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(44, 13);
			this->linkLabel4->TabIndex = 11;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Agregar";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::SteelBlue;
			this->label10->Location = System::Drawing::Point(35, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 25);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Materias";
			// 
			// txtnommat2
			// 
			this->txtnommat2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtnommat2->Location = System::Drawing::Point(177, 199);
			this->txtnommat2->Name = L"txtnommat2";
			this->txtnommat2->Size = System::Drawing::Size(294, 20);
			this->txtnommat2->TabIndex = 18;
			// 
			// txtcodigomat2
			// 
			this->txtcodigomat2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtcodigomat2->Location = System::Drawing::Point(177, 162);
			this->txtcodigomat2->Name = L"txtcodigomat2";
			this->txtcodigomat2->Size = System::Drawing::Size(105, 20);
			this->txtcodigomat2->TabIndex = 17;
			// 
			// dgvmateria
			// 
			this->dgvmateria->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvmateria->Location = System::Drawing::Point(40, 251);
			this->dgvmateria->Name = L"dgvmateria";
			this->dgvmateria->Size = System::Drawing::Size(618, 177);
			this->dgvmateria->TabIndex = 19;
			// 
			// btneditar
			// 
			this->btneditar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btneditar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btneditar->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btneditar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btneditar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btneditar->Location = System::Drawing::Point(539, 191);
			this->btneditar->Name = L"btneditar";
			this->btneditar->Size = System::Drawing::Size(98, 32);
			this->btneditar->TabIndex = 20;
			this->btneditar->Text = L"Editar";
			this->btneditar->UseVisualStyleBackColor = false;
			// 
			// btndelete
			// 
			this->btndelete->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btndelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btndelete->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btndelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btndelete->Location = System::Drawing::Point(40, 443);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(98, 32);
			this->btndelete->TabIndex = 21;
			this->btndelete->Text = L"Eliminar";
			this->btndelete->UseVisualStyleBackColor = false;
			// 
			// MainAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 509);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->cmbcarrera);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cmbArea);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtcreditos);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtnommat);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtcodigomat);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkedit);
			this->Controls->Add(this->linkadd);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"MainAdmin";
			this->Text = L"MainAdmin";
			this->Load += gcnew System::EventHandler(this, &MainAdmin::MainAdmin_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvmateria))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MainAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
