#pragma once

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		Form^ retour2;
		ClientForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		ClientForm(Form ^r2)
		{
			retour2 = r2;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::DataGridView^ dgViewClient;
	protected:



	private: System::Windows::Forms::Button^ btn_enrg;

	private: System::Windows::Forms::Button^ btn_creer;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_afficher;
	private: System::Windows::Forms::Button^ btn_supprimer;




	private: System::Windows::Forms::Label^ lbl_prachat;


	private: System::Windows::Forms::Label^ lbl_idclient;
	private: System::Windows::Forms::TextBox^ txt_prenom;



	private: System::Windows::Forms::TextBox^ txt_nom;

	private: System::Windows::Forms::Label^ lbl_prenom;

	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::TextBox^ txt_adrFact;


	private: System::Windows::Forms::Label^ adrFact;

	private: System::Windows::Forms::Label^ lblretour;
	private: System::Windows::Forms::TextBox^ txt_adrLiv;


	private: System::Windows::Forms::Label^ adrLiv;


	private: System::Windows::Forms::Label^ lbl_date_naiss;



	private: System::Windows::Forms::TextBox^ msg_txt;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ lbl_idaffich;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientForm::typeid));
			this->btn_retour = (gcnew System::Windows::Forms::Button());
			this->dgViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->btn_enrg = (gcnew System::Windows::Forms::Button());
			this->btn_creer = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->lbl_prachat = (gcnew System::Windows::Forms::Label());
			this->lbl_idclient = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->txt_adrFact = (gcnew System::Windows::Forms::TextBox());
			this->adrFact = (gcnew System::Windows::Forms::Label());
			this->lblretour = (gcnew System::Windows::Forms::Label());
			this->txt_adrLiv = (gcnew System::Windows::Forms::TextBox());
			this->adrLiv = (gcnew System::Windows::Forms::Label());
			this->lbl_date_naiss = (gcnew System::Windows::Forms::Label());
			this->msg_txt = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_idaffich = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgViewClient))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_retour
			// 
			this->btn_retour->BackColor = System::Drawing::Color::Transparent;
			this->btn_retour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_retour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->btn_retour->ForeColor = System::Drawing::Color::White;
			this->btn_retour->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_retour.Image")));
			this->btn_retour->Location = System::Drawing::Point(12, 12);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(42, 44);
			this->btn_retour->TabIndex = 0;
			this->btn_retour->UseVisualStyleBackColor = false;
			this->btn_retour->Click += gcnew System::EventHandler(this, &ClientForm::btn_retour_Click);
			// 
			// dgViewClient
			// 
			this->dgViewClient->BackgroundColor = System::Drawing::Color::White;
			this->dgViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgViewClient->Location = System::Drawing::Point(399, 59);
			this->dgViewClient->Name = L"dgViewClient";
			this->dgViewClient->RowHeadersWidth = 51;
			this->dgViewClient->RowTemplate->Height = 24;
			this->dgViewClient->Size = System::Drawing::Size(510, 141);
			this->dgViewClient->TabIndex = 13;
			this->dgViewClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClientForm::dgViewClient_CellContentClick);
			// 
			// btn_enrg
			// 
			this->btn_enrg->BackColor = System::Drawing::Color::Transparent;
			this->btn_enrg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_enrg->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_enrg->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_enrg->Location = System::Drawing::Point(775, 358);
			this->btn_enrg->Name = L"btn_enrg";
			this->btn_enrg->Size = System::Drawing::Size(134, 51);
			this->btn_enrg->TabIndex = 18;
			this->btn_enrg->Text = L"Enregistrer";
			this->btn_enrg->UseVisualStyleBackColor = false;
			this->btn_enrg->Click += gcnew System::EventHandler(this, &ClientForm::btn_enrg_Click);
			// 
			// btn_creer
			// 
			this->btn_creer->BackColor = System::Drawing::Color::Transparent;
			this->btn_creer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_creer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_creer->Location = System::Drawing::Point(26, 358);
			this->btn_creer->Name = L"btn_creer";
			this->btn_creer->Size = System::Drawing::Size(134, 51);
			this->btn_creer->TabIndex = 17;
			this->btn_creer->Text = L"Créer";
			this->btn_creer->UseVisualStyleBackColor = false;
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::Color::Transparent;
			this->btn_modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modifier->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_modifier->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_modifier->Location = System::Drawing::Point(214, 358);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(134, 51);
			this->btn_modifier->TabIndex = 16;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			// 
			// btn_afficher
			// 
			this->btn_afficher->BackColor = System::Drawing::Color::Transparent;
			this->btn_afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_afficher->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_afficher->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_afficher->Location = System::Drawing::Point(399, 358);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(134, 51);
			this->btn_afficher->TabIndex = 15;
			this->btn_afficher->Text = L"Afficher";
			this->btn_afficher->UseVisualStyleBackColor = false;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &ClientForm::btn_afficher_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->BackColor = System::Drawing::Color::Transparent;
			this->btn_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_supprimer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_supprimer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_supprimer->Location = System::Drawing::Point(585, 358);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(134, 51);
			this->btn_supprimer->TabIndex = 14;
			this->btn_supprimer->Text = L"Supprimer";
			this->btn_supprimer->UseVisualStyleBackColor = false;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &ClientForm::btn_supprimer_Click);
			// 
			// lbl_prachat
			// 
			this->lbl_prachat->AutoSize = true;
			this->lbl_prachat->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prachat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_prachat->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_prachat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_prachat->Location = System::Drawing::Point(20, 272);
			this->lbl_prachat->Name = L"lbl_prachat";
			this->lbl_prachat->Size = System::Drawing::Size(144, 31);
			this->lbl_prachat->TabIndex = 25;
			this->lbl_prachat->Text = L"Date de 1er achat";
			// 
			// lbl_idclient
			// 
			this->lbl_idclient->AutoSize = true;
			this->lbl_idclient->BackColor = System::Drawing::Color::Transparent;
			this->lbl_idclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_idclient->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_idclient->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_idclient->Location = System::Drawing::Point(24, 62);
			this->lbl_idclient->Name = L"lbl_idclient";
			this->lbl_idclient->Size = System::Drawing::Size(30, 31);
			this->lbl_idclient->TabIndex = 23;
			this->lbl_idclient->Text = L"ID";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_prenom->Location = System::Drawing::Point(102, 169);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(246, 34);
			this->txt_prenom->TabIndex = 22;
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nom->Location = System::Drawing::Point(102, 114);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(246, 34);
			this->txt_nom->TabIndex = 21;
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prenom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_prenom->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_prenom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_prenom->Location = System::Drawing::Point(20, 169);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(74, 31);
			this->lbl_prenom->TabIndex = 20;
			this->lbl_prenom->Text = L"Prenom";
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->BackColor = System::Drawing::Color::Transparent;
			this->lbl_nom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_nom->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nom->Location = System::Drawing::Point(20, 119);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(48, 31);
			this->lbl_nom->TabIndex = 19;
			this->lbl_nom->Text = L"Nom";
			// 
			// txt_adrFact
			// 
			this->txt_adrFact->BackColor = System::Drawing::Color::White;
			this->txt_adrFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_adrFact->Location = System::Drawing::Point(399, 308);
			this->txt_adrFact->Multiline = true;
			this->txt_adrFact->Name = L"txt_adrFact";
			this->txt_adrFact->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_adrFact->Size = System::Drawing::Size(384, 34);
			this->txt_adrFact->TabIndex = 28;
			// 
			// adrFact
			// 
			this->adrFact->AutoSize = true;
			this->adrFact->BackColor = System::Drawing::Color::Transparent;
			this->adrFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adrFact->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->adrFact->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->adrFact->Location = System::Drawing::Point(393, 272);
			this->adrFact->Name = L"adrFact";
			this->adrFact->Size = System::Drawing::Size(187, 31);
			this->adrFact->TabIndex = 27;
			this->adrFact->Text = L"Adresse de facturation";
			// 
			// lblretour
			// 
			this->lblretour->AutoSize = true;
			this->lblretour->BackColor = System::Drawing::Color::Transparent;
			this->lblretour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblretour->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblretour->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblretour->Location = System::Drawing::Point(60, 22);
			this->lblretour->Name = L"lblretour";
			this->lblretour->Size = System::Drawing::Size(50, 24);
			this->lblretour->TabIndex = 29;
			this->lblretour->Text = L"Retour";
			// 
			// txt_adrLiv
			// 
			this->txt_adrLiv->BackColor = System::Drawing::Color::White;
			this->txt_adrLiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_adrLiv->Location = System::Drawing::Point(399, 237);
			this->txt_adrLiv->Multiline = true;
			this->txt_adrLiv->Name = L"txt_adrLiv";
			this->txt_adrLiv->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_adrLiv->Size = System::Drawing::Size(384, 34);
			this->txt_adrLiv->TabIndex = 30;
			// 
			// adrLiv
			// 
			this->adrLiv->AutoSize = true;
			this->adrLiv->BackColor = System::Drawing::Color::Transparent;
			this->adrLiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adrLiv->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->adrLiv->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->adrLiv->Location = System::Drawing::Point(393, 203);
			this->adrLiv->Name = L"adrLiv";
			this->adrLiv->Size = System::Drawing::Size(172, 31);
			this->adrLiv->TabIndex = 33;
			this->adrLiv->Text = L"Adresse de livraison";
			// 
			// lbl_date_naiss
			// 
			this->lbl_date_naiss->AutoSize = true;
			this->lbl_date_naiss->BackColor = System::Drawing::Color::Transparent;
			this->lbl_date_naiss->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_date_naiss->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_date_naiss->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_date_naiss->Location = System::Drawing::Point(20, 207);
			this->lbl_date_naiss->Name = L"lbl_date_naiss";
			this->lbl_date_naiss->Size = System::Drawing::Size(152, 31);
			this->lbl_date_naiss->TabIndex = 35;
			this->lbl_date_naiss->Text = L"Date de naissance";
			// 
			// msg_txt
			// 
			this->msg_txt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->msg_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg_txt->Location = System::Drawing::Point(26, 423);
			this->msg_txt->Multiline = true;
			this->msg_txt->Name = L"msg_txt";
			this->msg_txt->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->msg_txt->Size = System::Drawing::Size(693, 83);
			this->msg_txt->TabIndex = 38;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(26, 241);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(322, 30);
			this->dateTimePicker1->TabIndex = 39;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Location = System::Drawing::Point(26, 309);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(322, 30);
			this->dateTimePicker2->TabIndex = 40;
			// 
			// lbl_idaffich
			// 
			this->lbl_idaffich->AutoSize = true;
			this->lbl_idaffich->BackColor = System::Drawing::Color::Transparent;
			this->lbl_idaffich->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_idaffich->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_idaffich->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_idaffich->Location = System::Drawing::Point(96, 62);
			this->lbl_idaffich->Name = L"lbl_idaffich";
			this->lbl_idaffich->Size = System::Drawing::Size(143, 31);
			this->lbl_idaffich->TabIndex = 41;
			this->lbl_idaffich->Text = L"ID s\'affichera ici!";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(798, 237);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(111, 33);
			this->comboBox1->TabIndex = 42;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(798, 308);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(111, 33);
			this->comboBox2->TabIndex = 43;
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(955, 529);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl_idaffich);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->msg_txt);
			this->Controls->Add(this->lbl_date_naiss);
			this->Controls->Add(this->adrLiv);
			this->Controls->Add(this->txt_adrLiv);
			this->Controls->Add(this->lblretour);
			this->Controls->Add(this->txt_adrFact);
			this->Controls->Add(this->adrFact);
			this->Controls->Add(this->lbl_prachat);
			this->Controls->Add(this->lbl_idclient);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->lbl_prenom);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->btn_enrg);
			this->Controls->Add(this->btn_creer);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_afficher);
			this->Controls->Add(this->btn_supprimer);
			this->Controls->Add(this->dgViewClient);
			this->Controls->Add(this->btn_retour);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(973, 576);
			this->MinimumSize = System::Drawing::Size(973, 576);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgViewClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   //bouton retour
private: System::Void btn_retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour2->Show();
}
private: System::Void btn_creer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_enrg_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgViewClient_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
