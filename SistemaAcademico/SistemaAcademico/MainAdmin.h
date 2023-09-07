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
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
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
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(31, 81);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Materias";
			this->label1->Click += gcnew System::EventHandler(this, &MainAdmin::label1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(33, 137);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(56, 16);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Agregar";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(123, 137);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(42, 16);
			this->linkLabel2->TabIndex = 3;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Editar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 193);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Codigo de Materia:";
			// 
			// txtcodigomat
			// 
			this->txtcodigomat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtcodigomat->Location = System::Drawing::Point(209, 193);
			this->txtcodigomat->Margin = System::Windows::Forms::Padding(4);
			this->txtcodigomat->Name = L"txtcodigomat";
			this->txtcodigomat->Size = System::Drawing::Size(139, 22);
			this->txtcodigomat->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 239);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nombre de Materia:";
			this->label3->Click += gcnew System::EventHandler(this, &MainAdmin::label3_Click);
			// 
			// txtnommat
			// 
			this->txtnommat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtnommat->Location = System::Drawing::Point(209, 239);
			this->txtnommat->Margin = System::Windows::Forms::Padding(4);
			this->txtnommat->Name = L"txtnommat";
			this->txtnommat->Size = System::Drawing::Size(391, 22);
			this->txtnommat->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(32, 286);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Tipo de Materia";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(209, 284);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(220, 24);
			this->comboBox1->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(33, 437);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Valor de Creditos";
			// 
			// txtcreditos
			// 
			this->txtcreditos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtcreditos->Location = System::Drawing::Point(209, 437);
			this->txtcreditos->Margin = System::Windows::Forms::Padding(4);
			this->txtcreditos->Name = L"txtcreditos";
			this->txtcreditos->Size = System::Drawing::Size(139, 22);
			this->txtcreditos->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(32, 329);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 40);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Area Academica \r\nde Materia";
			this->label6->Click += gcnew System::EventHandler(this, &MainAdmin::label6_Click);
			// 
			// cmbArea
			// 
			this->cmbArea->FormattingEnabled = true;
			this->cmbArea->Location = System::Drawing::Point(209, 329);
			this->cmbArea->Margin = System::Windows::Forms::Padding(4);
			this->cmbArea->Name = L"cmbArea";
			this->cmbArea->Size = System::Drawing::Size(296, 24);
			this->cmbArea->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(32, 384);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Carrera de Materia";
			// 
			// cmbcarrera
			// 
			this->cmbcarrera->FormattingEnabled = true;
			this->cmbcarrera->Location = System::Drawing::Point(209, 383);
			this->cmbcarrera->Margin = System::Windows::Forms::Padding(4);
			this->cmbcarrera->Name = L"cmbcarrera";
			this->cmbcarrera->Size = System::Drawing::Size(296, 24);
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
			this->btnadd->Location = System::Drawing::Point(37, 510);
			this->btnadd->Margin = System::Windows::Forms::Padding(4);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(131, 39);
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
			this->btnsec->Location = System::Drawing::Point(192, 0);
			this->btnsec->Margin = System::Windows::Forms::Padding(4);
			this->btnsec->Name = L"btnsec";
			this->btnsec->Size = System::Drawing::Size(184, 55);
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
			this->btnmat->Margin = System::Windows::Forms::Padding(4);
			this->btnmat->Name = L"btnmat";
			this->btnmat->Size = System::Drawing::Size(184, 55);
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
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(935, 55);
			this->panel1->TabIndex = 0;
			// 
			// MainAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 626);
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
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainAdmin";
			this->Text = L"MainAdmin";
			this->Load += gcnew System::EventHandler(this, &MainAdmin::MainAdmin_Load);
			this->panel1->ResumeLayout(false);
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
