#pragma once

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommande
	/// </summary>
	public ref class GestionCommande : public System::Windows::Forms::Form
	{
	public:
		Form^ retour3;
		GestionCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		GestionCommande(Form^ r3)
		{
			retour3 = r3;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GestionCommande::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(418, 61);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(475, 285);
			this->dataGridView1->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 177);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 22);
			this->textBox1->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 17);
			this->label1->TabIndex = 18;
			this->label1->Text = L"ID_client";
			this->label1->Click += gcnew System::EventHandler(this, &GestionCommande::label1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(103, 373);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 68);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Créer";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(312, 373);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 68);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(525, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 68);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(727, 373);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 68);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 529);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(973, 576);
			this->MinimumSize = System::Drawing::Size(973, 576);
			this->Name = L"GestionCommande";
			this->Text = L"Gestion Commande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour3->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
