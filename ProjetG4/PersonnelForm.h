#pragma once

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PersonnelForm
	/// </summary>
	public ref class PersonnelForm : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		PersonnelForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		//contructeur surchargé qui nous permettra d'utiliser le bouton retours
		PersonnelForm(Form ^r)
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
		~PersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btn_supprimer;
	private: System::Windows::Forms::Button^ btn_afficher;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_creer;
	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::Label^ lbl_prenom;
	private: System::Windows::Forms::TextBox^ txtbox_nom;
	private: System::Windows::Forms::DataGridView^ dgviewDB;
	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::Button^ btn_enregistrer;
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::TextBox^ txtbox_prenom;
	private: System::Windows::Forms::TextBox^ txt_msg;
	private: System::Windows::Forms::TextBox^ txtbox_adr;
	private: System::Windows::Forms::Label^ lbl_adresse;
	private: System::Windows::Forms::Label^ lbl_retour;

	private: System::Windows::Forms::Label^ lbl_date;
	private: System::Windows::Forms::Label^ lbl_ville;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	private: Data::DataSet^ ds;
	private: int index;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ txtbox_sup;
	private: System::Windows::Forms::Label^ lbl_sup;
	private: System::Windows::Forms::Label^ lbl_idaffich;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ boxville;
	private: String^ mode;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonnelForm::typeid));
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_creer = (gcnew System::Windows::Forms::Button());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			this->txtbox_nom = (gcnew System::Windows::Forms::TextBox());
			this->dgviewDB = (gcnew System::Windows::Forms::DataGridView());
			this->btn_retour = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->txtbox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_msg = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_adr = (gcnew System::Windows::Forms::TextBox());
			this->lbl_adresse = (gcnew System::Windows::Forms::Label());
			this->lbl_retour = (gcnew System::Windows::Forms::Label());
			this->lbl_date = (gcnew System::Windows::Forms::Label());
			this->lbl_ville = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtbox_sup = (gcnew System::Windows::Forms::TextBox());
			this->lbl_sup = (gcnew System::Windows::Forms::Label());
			this->lbl_idaffich = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->boxville = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgviewDB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->BackColor = System::Drawing::Color::Transparent;
			this->btn_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_supprimer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_supprimer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_supprimer->Location = System::Drawing::Point(582, 407);
			this->btn_supprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(133, 50);
			this->btn_supprimer->TabIndex = 1;
			this->btn_supprimer->Text = L"Supprimer";
			this->btn_supprimer->UseVisualStyleBackColor = false;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_supprimer_Click);
			// 
			// btn_afficher
			// 
			this->btn_afficher->BackColor = System::Drawing::Color::Transparent;
			this->btn_afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_afficher->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_afficher->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_afficher->Location = System::Drawing::Point(401, 407);
			this->btn_afficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(133, 50);
			this->btn_afficher->TabIndex = 2;
			this->btn_afficher->Text = L"Afficher";
			this->btn_afficher->UseVisualStyleBackColor = false;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_afficher_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::Color::Transparent;
			this->btn_modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modifier->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_modifier->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_modifier->Location = System::Drawing::Point(221, 407);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(133, 50);
			this->btn_modifier->TabIndex = 3;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_modifier_Click);
			// 
			// btn_creer
			// 
			this->btn_creer->BackColor = System::Drawing::Color::Transparent;
			this->btn_creer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_creer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_creer->Location = System::Drawing::Point(41, 407);
			this->btn_creer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_creer->Name = L"btn_creer";
			this->btn_creer->Size = System::Drawing::Size(133, 50);
			this->btn_creer->TabIndex = 4;
			this->btn_creer->Text = L"Créer";
			this->btn_creer->UseVisualStyleBackColor = false;
			this->btn_creer->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_creer_Click);
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->BackColor = System::Drawing::Color::Transparent;
			this->lbl_nom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_nom->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nom->Location = System::Drawing::Point(36, 127);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(48, 31);
			this->lbl_nom->TabIndex = 5;
			this->lbl_nom->Text = L"Nom";
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prenom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_prenom->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_prenom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_prenom->Location = System::Drawing::Point(36, 186);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(74, 31);
			this->lbl_prenom->TabIndex = 6;
			this->lbl_prenom->Text = L"Prenom";
			// 
			// txtbox_nom
			// 
			this->txtbox_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_nom->Location = System::Drawing::Point(129, 123);
			this->txtbox_nom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtbox_nom->Name = L"txtbox_nom";
			this->txtbox_nom->Size = System::Drawing::Size(224, 34);
			this->txtbox_nom->TabIndex = 8;
			// 
			// dgviewDB
			// 
			this->dgviewDB->BackgroundColor = System::Drawing::Color::White;
			this->dgviewDB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgviewDB->Location = System::Drawing::Point(423, 69);
			this->dgviewDB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgviewDB->Name = L"dgviewDB";
			this->dgviewDB->RowHeadersWidth = 51;
			this->dgviewDB->RowTemplate->Height = 24;
			this->dgviewDB->Size = System::Drawing::Size(471, 232);
			this->dgviewDB->TabIndex = 9;
			this->dgviewDB->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonnelForm::dgviewDB_CellContentClick);
			// 
			// btn_retour
			// 
			this->btn_retour->BackColor = System::Drawing::Color::Transparent;
			this->btn_retour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_retour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_retour->ForeColor = System::Drawing::Color::White;
			this->btn_retour->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_retour.Image")));
			this->btn_retour->Location = System::Drawing::Point(12, 12);
			this->btn_retour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(43, 44);
			this->btn_retour->TabIndex = 0;
			this->btn_retour->UseVisualStyleBackColor = false;
			this->btn_retour->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_retour_Click);
			// 
			// btn_enregistrer
			// 
			this->btn_enregistrer->BackColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_enregistrer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_enregistrer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_enregistrer->Location = System::Drawing::Point(761, 407);
			this->btn_enregistrer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_enregistrer->Name = L"btn_enregistrer";
			this->btn_enregistrer->Size = System::Drawing::Size(133, 50);
			this->btn_enregistrer->TabIndex = 13;
			this->btn_enregistrer->Text = L"Enregistrer";
			this->btn_enregistrer->UseVisualStyleBackColor = false;
			this->btn_enregistrer->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_enregistrer_Click);
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->BackColor = System::Drawing::Color::Transparent;
			this->lbl_id->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_id->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_id->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_id->Location = System::Drawing::Point(36, 69);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(30, 31);
			this->lbl_id->TabIndex = 14;
			this->lbl_id->Text = L"ID";
			this->lbl_id->Click += gcnew System::EventHandler(this, &PersonnelForm::lbl_id_Click);
			// 
			// txtbox_prenom
			// 
			this->txtbox_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_prenom->Location = System::Drawing::Point(129, 182);
			this->txtbox_prenom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtbox_prenom->Name = L"txtbox_prenom";
			this->txtbox_prenom->Size = System::Drawing::Size(224, 34);
			this->txtbox_prenom->TabIndex = 15;
			this->txtbox_prenom->TextChanged += gcnew System::EventHandler(this, &PersonnelForm::txtbox_prenom_TextChanged);
			// 
			// txt_msg
			// 
			this->txt_msg->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_msg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_msg->Location = System::Drawing::Point(40, 480);
			this->txt_msg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_msg->Multiline = true;
			this->txt_msg->Name = L"txt_msg";
			this->txt_msg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_msg->Size = System::Drawing::Size(675, 83);
			this->txt_msg->TabIndex = 16;
			// 
			// txtbox_adr
			// 
			this->txtbox_adr->BackColor = System::Drawing::Color::White;
			this->txtbox_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_adr->Location = System::Drawing::Point(480, 354);
			this->txtbox_adr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtbox_adr->Name = L"txtbox_adr";
			this->txtbox_adr->Size = System::Drawing::Size(224, 34);
			this->txtbox_adr->TabIndex = 18;
			// 
			// lbl_adresse
			// 
			this->lbl_adresse->AutoSize = true;
			this->lbl_adresse->BackColor = System::Drawing::Color::Transparent;
			this->lbl_adresse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_adresse->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_adresse->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_adresse->Location = System::Drawing::Point(394, 354);
			this->lbl_adresse->Name = L"lbl_adresse";
			this->lbl_adresse->Size = System::Drawing::Size(78, 31);
			this->lbl_adresse->TabIndex = 17;
			this->lbl_adresse->Text = L"Adresse";
			// 
			// lbl_retour
			// 
			this->lbl_retour->AutoSize = true;
			this->lbl_retour->BackColor = System::Drawing::Color::Transparent;
			this->lbl_retour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_retour->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_retour->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_retour->Location = System::Drawing::Point(57, 22);
			this->lbl_retour->Name = L"lbl_retour";
			this->lbl_retour->Size = System::Drawing::Size(50, 24);
			this->lbl_retour->TabIndex = 19;
			this->lbl_retour->Text = L"Retour";
			// 
			// lbl_date
			// 
			this->lbl_date->AutoSize = true;
			this->lbl_date->BackColor = System::Drawing::Color::Transparent;
			this->lbl_date->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_date->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_date->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_date->Location = System::Drawing::Point(36, 306);
			this->lbl_date->Name = L"lbl_date";
			this->lbl_date->Size = System::Drawing::Size(144, 31);
			this->lbl_date->TabIndex = 20;
			this->lbl_date->Text = L"Date d\'embauche";
			this->lbl_date->Click += gcnew System::EventHandler(this, &PersonnelForm::lbl_date_Click);
			// 
			// lbl_ville
			// 
			this->lbl_ville->AutoSize = true;
			this->lbl_ville->BackColor = System::Drawing::Color::Transparent;
			this->lbl_ville->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_ville->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_ville->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_ville->Location = System::Drawing::Point(725, 354);
			this->lbl_ville->Name = L"lbl_ville";
			this->lbl_ville->Size = System::Drawing::Size(44, 31);
			this->lbl_ville->TabIndex = 23;
			this->lbl_ville->Text = L"Ville";
			this->lbl_ville->Click += gcnew System::EventHandler(this, &PersonnelForm::lbl_ville_Click);
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &PersonnelForm::bindingSource1_CurrentChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(42, 352);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(311, 30);
			this->dateTimePicker1->TabIndex = 24;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &PersonnelForm::dateTimePicker1_ValueChanged);
			// 
			// txtbox_sup
			// 
			this->txtbox_sup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_sup->Location = System::Drawing::Point(42, 267);
			this->txtbox_sup->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtbox_sup->Name = L"txtbox_sup";
			this->txtbox_sup->Size = System::Drawing::Size(312, 34);
			this->txtbox_sup->TabIndex = 25;
			// 
			// lbl_sup
			// 
			this->lbl_sup->AutoSize = true;
			this->lbl_sup->BackColor = System::Drawing::Color::Transparent;
			this->lbl_sup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_sup->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_sup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_sup->Location = System::Drawing::Point(36, 225);
			this->lbl_sup->Name = L"lbl_sup";
			this->lbl_sup->Size = System::Drawing::Size(191, 31);
			this->lbl_sup->TabIndex = 26;
			this->lbl_sup->Text = L"Supérieur hierarchique";
			this->lbl_sup->Click += gcnew System::EventHandler(this, &PersonnelForm::lbl_sup_Click);
			// 
			// lbl_idaffich
			// 
			this->lbl_idaffich->AutoSize = true;
			this->lbl_idaffich->BackColor = System::Drawing::Color::Transparent;
			this->lbl_idaffich->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_idaffich->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_idaffich->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_idaffich->Location = System::Drawing::Point(123, 69);
			this->lbl_idaffich->Name = L"lbl_idaffich";
			this->lbl_idaffich->Size = System::Drawing::Size(143, 31);
			this->lbl_idaffich->TabIndex = 27;
			this->lbl_idaffich->Text = L"ID s\'affichera ici!";
			this->lbl_idaffich->Click += gcnew System::EventHandler(this, &PersonnelForm::lbl_idaffich_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(335, 236);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &PersonnelForm::checkBox1_CheckedChanged);
			// 
			// boxville
			// 
			this->boxville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxville->FormattingEnabled = true;
			this->boxville->Location = System::Drawing::Point(775, 354);
			this->boxville->Name = L"boxville";
			this->boxville->Size = System::Drawing::Size(119, 33);
			this->boxville->TabIndex = 29;
			// 
			// PersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(951, 601);
			this->Controls->Add(this->boxville);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->lbl_idaffich);
			this->Controls->Add(this->lbl_sup);
			this->Controls->Add(this->txtbox_sup);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->lbl_ville);
			this->Controls->Add(this->lbl_date);
			this->Controls->Add(this->lbl_retour);
			this->Controls->Add(this->txtbox_adr);
			this->Controls->Add(this->lbl_adresse);
			this->Controls->Add(this->txt_msg);
			this->Controls->Add(this->txtbox_prenom);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->btn_enregistrer);
			this->Controls->Add(this->dgviewDB);
			this->Controls->Add(this->txtbox_nom);
			this->Controls->Add(this->lbl_prenom);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->btn_creer);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_afficher);
			this->Controls->Add(this->btn_supprimer);
			this->Controls->Add(this->btn_retour);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"PersonnelForm";
			this->Text = L"PersonnelForm";
			this->Load += gcnew System::EventHandler(this, &PersonnelForm::PersonnelForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgviewDB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//bouton retour
private: System::Void btn_retour_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	retour->Show();
}
	   //bouton enregistrer
private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
}
		//bouton creer
private: System::Void btn_creer_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //bouton modifier
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //bouton afficher
private: System::Void btn_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //bouton supprimer
private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgviewDB_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txtbox_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_date_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_id_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_ville_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void bindingSource1_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_sup_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_idaffich_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
