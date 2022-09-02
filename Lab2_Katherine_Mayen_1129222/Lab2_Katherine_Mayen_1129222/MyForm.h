#pragma once
#include <iostream>
#include "Figuras_geometricas.h"
#include "Partes_figuras.h"

namespace Lab2KatherineMayen1129222 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox_apotema;
	private: System::Windows::Forms::TextBox^ textBox_altura;
	private: System::Windows::Forms::TextBox^ textBox_base;
	private: System::Windows::Forms::TextBox^ textBox_lado;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_calcular;
	private: System::Windows::Forms::ComboBox^ comboBox_eleccion;
	private: System::Windows::Forms::GroupBox^ groupBox3;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label_perimetro;
	private: System::Windows::Forms::Label^ label_area;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_apotema = (gcnew System::Windows::Forms::TextBox());
			this->textBox_altura = (gcnew System::Windows::Forms::TextBox());
			this->textBox_base = (gcnew System::Windows::Forms::TextBox());
			this->textBox_lado = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_calcular = (gcnew System::Windows::Forms::Button());
			this->comboBox_eleccion = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label_perimetro = (gcnew System::Windows::Forms::Label());
			this->label_area = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(163, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(474, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FIGURAS GEOMETRICAS";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_apotema);
			this->groupBox1->Controls->Add(this->textBox_altura);
			this->groupBox1->Controls->Add(this->textBox_base);
			this->groupBox1->Controls->Add(this->textBox_lado);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(63, 118);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 275);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la figura";
			// 
			// textBox_apotema
			// 
			this->textBox_apotema->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_apotema->Location = System::Drawing::Point(150, 212);
			this->textBox_apotema->Name = L"textBox_apotema";
			this->textBox_apotema->Size = System::Drawing::Size(130, 28);
			this->textBox_apotema->TabIndex = 7;
			// 
			// textBox_altura
			// 
			this->textBox_altura->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_altura->Location = System::Drawing::Point(115, 157);
			this->textBox_altura->Name = L"textBox_altura";
			this->textBox_altura->Size = System::Drawing::Size(165, 28);
			this->textBox_altura->TabIndex = 6;
			// 
			// textBox_base
			// 
			this->textBox_base->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_base->Location = System::Drawing::Point(115, 104);
			this->textBox_base->Name = L"textBox_base";
			this->textBox_base->Size = System::Drawing::Size(165, 28);
			this->textBox_base->TabIndex = 5;
			// 
			// textBox_lado
			// 
			this->textBox_lado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_lado->Location = System::Drawing::Point(115, 51);
			this->textBox_lado->Name = L"textBox_lado";
			this->textBox_lado->Size = System::Drawing::Size(165, 28);
			this->textBox_lado->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(32, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 21);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Apotema:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(32, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 21);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Lado:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 21);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Altura:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Base:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button_calcular);
			this->groupBox2->Controls->Add(this->comboBox_eleccion);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(429, 118);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(313, 125);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Figura a evaluar";
			// 
			// button_calcular
			// 
			this->button_calcular->Location = System::Drawing::Point(48, 68);
			this->button_calcular->Name = L"button_calcular";
			this->button_calcular->Size = System::Drawing::Size(231, 30);
			this->button_calcular->TabIndex = 1;
			this->button_calcular->Text = L"Calcular";
			this->button_calcular->UseVisualStyleBackColor = true;
			this->button_calcular->Click += gcnew System::EventHandler(this, &MyForm::button_calcular_Click);
			// 
			// comboBox_eleccion
			// 
			this->comboBox_eleccion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_eleccion->FormattingEnabled = true;
			this->comboBox_eleccion->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triángulo", L"Cuadrilátero", L"Pentágono",
					L"Hexágono", L"Heptágono", L"Octágono", L"Eneágono", L"Decágono"
			});
			this->comboBox_eleccion->Location = System::Drawing::Point(48, 32);
			this->comboBox_eleccion->Name = L"comboBox_eleccion";
			this->comboBox_eleccion->Size = System::Drawing::Size(231, 29);
			this->comboBox_eleccion->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label_perimetro);
			this->groupBox3->Controls->Add(this->label_area);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(429, 265);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(313, 128);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Resultados";
			// 
			// label_perimetro
			// 
			this->label_perimetro->AutoSize = true;
			this->label_perimetro->Location = System::Drawing::Point(137, 75);
			this->label_perimetro->Name = L"label_perimetro";
			this->label_perimetro->Size = System::Drawing::Size(0, 19);
			this->label_perimetro->TabIndex = 3;
			// 
			// label_area
			// 
			this->label_area->AutoSize = true;
			this->label_area->Location = System::Drawing::Point(137, 38);
			this->label_area->Name = L"label_area";
			this->label_area->Size = System::Drawing::Size(0, 19);
			this->label_area->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(32, 75);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 21);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Perimetro:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(32, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 21);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Area:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 451);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Lab no. 2 - Katherine Mayen 1129222";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button_calcular_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int lado, base, altura, apotema;
		int eleccion;
		

		//se guardan las variables que se ngresan en el form.
		lado = System::Convert::ToInt32(textBox_lado->Text);
		base = System::Convert::ToInt32(textBox_base->Text);
		altura = System::Convert::ToInt32(textBox_altura->Text);
		apotema = System::Convert::ToInt32(textBox_apotema->Text);

		//se guarda la eleccion del combobox.
		eleccion = comboBox_eleccion->SelectedIndex;


		//validacion de datos.
		if (lado>0 || base>0 || altura>0 || apotema>0)
		{
			if (eleccion == 0)
			{
				triangulo figuraTriangulo;
			}



			if (eleccion == 0) {
				triangulo figura_triangulo;

				figura_triangulo.lado = lado;
				figura_triangulo.altura = altura;
				figura_triangulo.base = base;

				label_area->Text = System::Convert::ToString(figura_triangulo.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_triangulo.CalculoPerimetro());
			}

			else if (eleccion == 1) {
				cuadrilatero figura_cuadrilatero;

				figura_cuadrilatero.lado = lado;

				label_area->Text = System::Convert::ToString(figura_cuadrilatero.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_cuadrilatero.CalculoPerimetro());
			}

			else if (eleccion == 2) {
				pentagono figura_pentagono;

				figura_pentagono.lado = lado;
				figura_pentagono.apotema = apotema;

				label_area->Text = System::Convert::ToString(figura_pentagono.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_pentagono.CalculoPerimetro());
			}

			else if (eleccion == 3) {
				hexagono figura_hexagono;

				figura_hexagono.lado = lado;
				figura_hexagono.apotema = apotema;

				label_area->Text = System::Convert::ToString(figura_hexagono.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_hexagono.CalculoPerimetro());
			}

			else if (eleccion == 4) {
				heptagono figura_heptagono;

				figura_heptagono.lado = lado;
				figura_heptagono.apotema = apotema;

				label_area->Text = System::Convert::ToString(figura_heptagono.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_heptagono.CalculoPerimetro());
			}

			else if (eleccion == 5) {
				octagono figura_octagono;

				figura_octagono.lado = lado;
				figura_octagono.apotema = apotema;

				label_area->Text = System::Convert::ToString(figura_octagono.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_octagono.CalculoPerimetro());
			}

			else if (eleccion == 6) {
				eneagono figura_eneagono;

				figura_eneagono.lado = lado;
				figura_eneagono.apotema = apotema;

				label_area->Text = System::Convert::ToString(figura_eneagono.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_eneagono.CalculoPerimetro());
			}

			else if (eleccion == 7) {
				decagono figura_decagono;

				figura_decagono.lado = lado;
				figura_decagono.apotema = apotema;

				label_area->Text = System::Convert::ToString(figura_decagono.CalculoArea());
				label_perimetro->Text = System::Convert::ToString(figura_decagono.CalculoPerimetro());
			}
		}
		else
		{
			label_area->Text = "Ingrese los datos correctamente.";
			label_perimetro->Text = "Ingrese los datos correctamente.";
			textBox_lado->Clear();
			textBox_base->Clear();
			textBox_altura->Clear();
			textBox_apotema->Clear();
		}


	}
};
}
