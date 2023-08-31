#pragma once
#include <string>

namespace SistemaAcademico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pensum
	/// </summary>
	public ref class Pensum : public System::Windows::Forms::Form
	{
	public:
		Pensum(std::string codigo_carrea)
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
		~Pensum()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPensum;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ lblCarrera;

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
			this->btnPensum = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lblCarrera = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPensum
			// 
			this->btnPensum->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPensum->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnPensum->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnPensum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPensum->Location = System::Drawing::Point(-2, 120);
			this->btnPensum->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnPensum->Name = L"btnPensum";
			this->btnPensum->Size = System::Drawing::Size(207, 49);
			this->btnPensum->TabIndex = 6;
			this->btnPensum->Text = L"Ver Pensum";
			this->btnPensum->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->btnPensum);
			this->panel1->Location = System::Drawing::Point(2, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(206, 786);
			this->panel1->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(240, 294);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(780, 471);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Pensum::dataGridView1_CellContentClick);
			// 
			// lblCarrera
			// 
			this->lblCarrera->AutoSize = true;
			this->lblCarrera->Location = System::Drawing::Point(249, 62);
			this->lblCarrera->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCarrera->Name = L"lblCarrera";
			this->lblCarrera->Size = System::Drawing::Size(62, 20);
			this->lblCarrera->TabIndex = 8;
			this->lblCarrera->Text = L"Carrera";
			// 
			// Pensum
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 783);
			this->Controls->Add(this->lblCarrera);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Pensum";
			this->Text = L"Pensum";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
