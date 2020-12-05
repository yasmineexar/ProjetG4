#pragma once
#include"Adresse.h"
#include"Ville.h"

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Description résumée de FicheAdresse
	/// </summary>
	public ref class FicheAdresse : public System::Windows::Forms::Form
	{
		Form^ retour;
	public:
		FicheAdresse(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		FicheAdresse(Form^ r)
		{
			retour = r;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FicheAdresse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::ComboBox^ boxVille;
	private: System::Windows::Forms::Label^ lbl_adr;
	private: System::Windows::Forms::Label^ lbl_ville;
	private: System::Windows::Forms::TextBox^ txt_adr;
	private: System::Windows::Forms::Button^ btn_valider;
	private: System::Windows::Forms::Button^ btn_creeradr;
	private: System::Windows::Forms::Button^ btn_modifieradr;


	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ville;
	private: DataTable^ dt;
	public: List<int>^ supradr = gcnew List<int>(); //pouvoir supprimer une adresse d'un client lors de la modification
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FicheAdresse::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ville = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->boxVille = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_adr = (gcnew System::Windows::Forms::Label());
			this->lbl_ville = (gcnew System::Windows::Forms::Label());
			this->txt_adr = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->btn_creeradr = (gcnew System::Windows::Forms::Button());
			this->btn_modifieradr = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ID, this->Adresse,
					this->Ville
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 283);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(668, 178);
			this->dataGridView1->TabIndex = 0;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// Adresse
			// 
			this->Adresse->HeaderText = L"Adresse";
			this->Adresse->MinimumWidth = 6;
			this->Adresse->Name = L"Adresse";
			this->Adresse->ReadOnly = true;
			// 
			// Ville
			// 
			this->Ville->HeaderText = L"Ville";
			this->Ville->MinimumWidth = 6;
			this->Ville->Name = L"Ville";
			this->Ville->ReadOnly = true;
			// 
			// boxVille
			// 
			this->boxVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxVille->FormattingEnabled = true;
			this->boxVille->Location = System::Drawing::Point(542, 110);
			this->boxVille->Name = L"boxVille";
			this->boxVille->Size = System::Drawing::Size(355, 33);
			this->boxVille->TabIndex = 1;
			// 
			// lbl_adr
			// 
			this->lbl_adr->AutoSize = true;
			this->lbl_adr->BackColor = System::Drawing::Color::Transparent;
			this->lbl_adr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_adr->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_adr->ForeColor = System::Drawing::Color::White;
			this->lbl_adr->Location = System::Drawing::Point(29, 69);
			this->lbl_adr->Name = L"lbl_adr";
			this->lbl_adr->Size = System::Drawing::Size(78, 31);
			this->lbl_adr->TabIndex = 2;
			this->lbl_adr->Text = L"Adresse";
			// 
			// lbl_ville
			// 
			this->lbl_ville->AutoSize = true;
			this->lbl_ville->BackColor = System::Drawing::Color::Transparent;
			this->lbl_ville->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_ville->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_ville->ForeColor = System::Drawing::Color::White;
			this->lbl_ville->Location = System::Drawing::Point(537, 69);
			this->lbl_ville->Name = L"lbl_ville";
			this->lbl_ville->Size = System::Drawing::Size(44, 31);
			this->lbl_ville->TabIndex = 3;
			this->lbl_ville->Text = L"Ville";
			// 
			// txt_adr
			// 
			this->txt_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_adr->Location = System::Drawing::Point(34, 110);
			this->txt_adr->Name = L"txt_adr";
			this->txt_adr->Size = System::Drawing::Size(478, 30);
			this->txt_adr->TabIndex = 4;
			// 
			// btn_valider
			// 
			this->btn_valider->BackColor = System::Drawing::Color::Transparent;
			this->btn_valider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_valider->ForeColor = System::Drawing::Color::White;
			this->btn_valider->Location = System::Drawing::Point(728, 332);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(169, 65);
			this->btn_valider->TabIndex = 5;
			this->btn_valider->Text = L"Valider";
			this->btn_valider->UseVisualStyleBackColor = false;
			this->btn_valider->Click += gcnew System::EventHandler(this, &FicheAdresse::btn_valider_Click);
			// 
			// btn_creeradr
			// 
			this->btn_creeradr->BackColor = System::Drawing::Color::Transparent;
			this->btn_creeradr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creeradr->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_creeradr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_creeradr->Location = System::Drawing::Point(34, 192);
			this->btn_creeradr->Name = L"btn_creeradr";
			this->btn_creeradr->Size = System::Drawing::Size(171, 51);
			this->btn_creeradr->TabIndex = 47;
			this->btn_creeradr->Text = L"Créer Adresse";
			this->btn_creeradr->UseVisualStyleBackColor = false;
			this->btn_creeradr->Click += gcnew System::EventHandler(this, &FicheAdresse::btn_creeradr_Click);
			// 
			// btn_modifieradr
			// 
			this->btn_modifieradr->BackColor = System::Drawing::Color::Transparent;
			this->btn_modifieradr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modifieradr->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_modifieradr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_modifieradr->Location = System::Drawing::Point(335, 192);
			this->btn_modifieradr->Name = L"btn_modifieradr";
			this->btn_modifieradr->Size = System::Drawing::Size(177, 51);
			this->btn_modifieradr->TabIndex = 46;
			this->btn_modifieradr->Text = L"Modifier Adresse";
			this->btn_modifieradr->UseVisualStyleBackColor = false;
			this->btn_modifieradr->Click += gcnew System::EventHandler(this, &FicheAdresse::btn_modifieradr_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(705, 192);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 51);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Supprimer Adresse";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FicheAdresse::button3_Click);
			// 
			// FicheAdresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(953, 510);
			this->Controls->Add(this->btn_creeradr);
			this->Controls->Add(this->btn_modifieradr);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->txt_adr);
			this->Controls->Add(this->lbl_ville);
			this->Controls->Add(this->lbl_adr);
			this->Controls->Add(this->boxVille);
			this->Controls->Add(this->dataGridView1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(971, 557);
			this->MinimumSize = System::Drawing::Size(971, 557);
			this->Name = L"FicheAdresse";
			this->Text = L"FicheAdresse";
			this->Load += gcnew System::EventHandler(this, &FicheAdresse::FicheAdresse_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public:
	void set_combo_ville(DataTable^);
	void set_adresses(List<Composant::Adresse^>^);
	DataTable^ get_adresse_dg();
private: System::Void btn_creeradr_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_modifieradr_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FicheAdresse_Load(System::Object^ sender, System::EventArgs^ e){}
};
}
