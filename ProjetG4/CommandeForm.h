#pragma once
#include"SVC_Gcommande.h" //le service commande
#include"FicheCommande.h"
#include"MyForm1.h"

namespace ProjetG4{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Service;

	/// <summary>
	/// Description résumée de CommandeForm
	/// </summary>
	public ref class CommandeForm : public System::Windows::Forms::Form
	{
	public:
		Form^ retour3;
		CommandeForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		CommandeForm(Form^ r3)
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
		~CommandeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ btn_creer;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_afficher;
	private: System::Windows::Forms::Button^ btn_supprimer;


	private: System::Windows::Forms::Label^ label15;










	protected:

	private: Service::SVC_Gcommande^ gestioncommande = gcnew SVC_Gcommande(); 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CommandeForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_creer = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 36);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CommandeForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(29, 161);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(791, 232);
			this->dataGridView1->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(56, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 24);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Retour";
			// 
			// textBox4
			// 
			this->textBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(29, 569);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(602, 94);
			this->textBox4->TabIndex = 57;
			// 
			// btn_creer
			// 
			this->btn_creer->BackColor = System::Drawing::Color::Transparent;
			this->btn_creer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_creer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_creer->Location = System::Drawing::Point(29, 461);
			this->btn_creer->Name = L"btn_creer";
			this->btn_creer->Size = System::Drawing::Size(134, 51);
			this->btn_creer->TabIndex = 55;
			this->btn_creer->Text = L"Créer";
			this->btn_creer->UseVisualStyleBackColor = false;
			this->btn_creer->Click += gcnew System::EventHandler(this, &CommandeForm::btn_creer_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::Color::Transparent;
			this->btn_modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modifier->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_modifier->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_modifier->Location = System::Drawing::Point(246, 461);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(134, 51);
			this->btn_modifier->TabIndex = 54;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &CommandeForm::btn_modifier_Click);
			// 
			// btn_afficher
			// 
			this->btn_afficher->BackColor = System::Drawing::Color::Transparent;
			this->btn_afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_afficher->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_afficher->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_afficher->Location = System::Drawing::Point(466, 461);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(134, 51);
			this->btn_afficher->TabIndex = 53;
			this->btn_afficher->Text = L"Afficher";
			this->btn_afficher->UseVisualStyleBackColor = false;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &CommandeForm::btn_afficher_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->BackColor = System::Drawing::Color::Transparent;
			this->btn_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_supprimer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_supprimer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_supprimer->Location = System::Drawing::Point(686, 461);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(134, 51);
			this->btn_supprimer->TabIndex = 52;
			this->btn_supprimer->Text = L"Supprimer";
			this->btn_supprimer->UseVisualStyleBackColor = false;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &CommandeForm::btn_supprimer_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(282, 80);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(281, 39);
			this->label15->TabIndex = 101;
			this->label15->Text = L"Gestion des commandes";
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(853, 716);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->btn_creer);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_afficher);
			this->Controls->Add(this->btn_supprimer);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CommandeForm";
			this->Text = L"Gestion Commande";
			this->Load += gcnew System::EventHandler(this, &CommandeForm::CommandeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//bouton retours
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour3->Show();
	}


private: System::Void btn_creer_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_afficher_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CommandeForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
