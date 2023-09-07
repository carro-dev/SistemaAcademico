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
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::TextBox^ txtBoxNmrSeccion;
	private: System::Windows::Forms::TextBox^ txtBoxCodMateria;
	private: System::Windows::Forms::TextBox^ txtBoxCodProfesor;
	private: System::Windows::Forms::TextBox^ txtBoxHorario;










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
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->txtBoxNmrSeccion = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxCodMateria = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxCodProfesor = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHorario = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblSeccion
			// 
			this->lblSeccion->AutoSize = true;
			this->lblSeccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSeccion->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblSeccion->Location = System::Drawing::Point(43, 29);
			this->lblSeccion->Name = L"lblSeccion";
			this->lblSeccion->Size = System::Drawing::Size(123, 32);
			this->lblSeccion->TabIndex = 0;
			this->lblSeccion->Text = L"Sección";
			// 
			// lblLnkAgregar
			// 
			this->lblLnkAgregar->AutoSize = true;
			this->lblLnkAgregar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblLnkAgregar->Location = System::Drawing::Point(40, 97);
			this->lblLnkAgregar->Name = L"lblLnkAgregar";
			this->lblLnkAgregar->Size = System::Drawing::Size(56, 16);
			this->lblLnkAgregar->TabIndex = 1;
			this->lblLnkAgregar->TabStop = true;
			this->lblLnkAgregar->Text = L"Agregar";
			// 
			// lblLnkEditar
			// 
			this->lblLnkEditar->AutoSize = true;
			this->lblLnkEditar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblLnkEditar->Location = System::Drawing::Point(132, 97);
			this->lblLnkEditar->Name = L"lblLnkEditar";
			this->lblLnkEditar->Size = System::Drawing::Size(42, 16);
			this->lblLnkEditar->TabIndex = 2;
			this->lblLnkEditar->TabStop = true;
			this->lblLnkEditar->Text = L"Editar";
			// 
			// lblNmrSeccion
			// 
			this->lblNmrSeccion->AutoSize = true;
			this->lblNmrSeccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNmrSeccion->Location = System::Drawing::Point(39, 156);
			this->lblNmrSeccion->Name = L"lblNmrSeccion";
			this->lblNmrSeccion->Size = System::Drawing::Size(138, 20);
			this->lblNmrSeccion->TabIndex = 4;
			this->lblNmrSeccion->Text = L"Número Sección:";
			// 
			// lblCodMateria
			// 
			this->lblCodMateria->AutoSize = true;
			this->lblCodMateria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCodMateria->Location = System::Drawing::Point(39, 205);
			this->lblCodMateria->Name = L"lblCodMateria";
			this->lblCodMateria->Size = System::Drawing::Size(127, 20);
			this->lblCodMateria->TabIndex = 5;
			this->lblCodMateria->Text = L"Código Materia:";
			// 
			// lblCodProfesor
			// 
			this->lblCodProfesor->AutoSize = true;
			this->lblCodProfesor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCodProfesor->Location = System::Drawing::Point(39, 257);
			this->lblCodProfesor->Name = L"lblCodProfesor";
			this->lblCodProfesor->Size = System::Drawing::Size(135, 20);
			this->lblCodProfesor->TabIndex = 6;
			this->lblCodProfesor->Text = L"Código Profesor:";
			// 
			// lblHorario
			// 
			this->lblHorario->AutoSize = true;
			this->lblHorario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHorario->Location = System::Drawing::Point(39, 309);
			this->lblHorario->Name = L"lblHorario";
			this->lblHorario->Size = System::Drawing::Size(70, 20);
			this->lblHorario->TabIndex = 7;
			this->lblHorario->Text = L"Horario:";
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAgregar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAgregar->Location = System::Drawing::Point(49, 378);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(131, 50);
			this->buttonAgregar->TabIndex = 8;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = false;
			// 
			// txtBoxNmrSeccion
			// 
			this->txtBoxNmrSeccion->Location = System::Drawing::Point(202, 154);
			this->txtBoxNmrSeccion->Name = L"txtBoxNmrSeccion";
			this->txtBoxNmrSeccion->Size = System::Drawing::Size(204, 22);
			this->txtBoxNmrSeccion->TabIndex = 9;
			// 
			// txtBoxCodMateria
			// 
			this->txtBoxCodMateria->Location = System::Drawing::Point(202, 203);
			this->txtBoxCodMateria->Name = L"txtBoxCodMateria";
			this->txtBoxCodMateria->Size = System::Drawing::Size(204, 22);
			this->txtBoxCodMateria->TabIndex = 10;
			// 
			// txtBoxCodProfesor
			// 
			this->txtBoxCodProfesor->Location = System::Drawing::Point(202, 255);
			this->txtBoxCodProfesor->Name = L"txtBoxCodProfesor";
			this->txtBoxCodProfesor->Size = System::Drawing::Size(204, 22);
			this->txtBoxCodProfesor->TabIndex = 11;
			// 
			// txtBoxHorario
			// 
			this->txtBoxHorario->Location = System::Drawing::Point(202, 309);
			this->txtBoxHorario->Name = L"txtBoxHorario";
			this->txtBoxHorario->Size = System::Drawing::Size(204, 22);
			this->txtBoxHorario->TabIndex = 12;
			// 
			// SeccionAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 509);
			this->Controls->Add(this->txtBoxHorario);
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
			this->Name = L"SeccionAdmin";
			this->Text = L"SeccionAdmin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
