#pragma once
#include"SVC_Gstock.h"
#include"Article.h"

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace Service;


	/// <summary>
	/// Description résumée de StockForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
	public:
		Form^ retour4;
		StockForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		StockForm(Form^ r4)
		{
			retour4 = r4;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::TextBox^ txt_couleur;
	protected:

	private: System::Windows::Forms::Label^ lbl_couleur;
	private: System::Windows::Forms::TextBox^ txt_msg;
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::Button^ btn_valider;

	private: System::Windows::Forms::DataGridView^ dgViewArticle;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_ref;
	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::Label^ lbl_ref;
	private: System::Windows::Forms::Button^ btn_creer;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_afficher;
	private: System::Windows::Forms::Button^ btn_supprimer;
	private: System::Windows::Forms::TextBox^ txt_TTC;
	private: System::Windows::Forms::Label^ lbl_qnt;

	private: System::Windows::Forms::Label^ lbl_prixTTC;
	private: System::Windows::Forms::TextBox^ txt_PrixHt;
	private: System::Windows::Forms::Label^ lbl_prixHT;
	private: System::Windows::Forms::TextBox^ txt_TVA;
	private: System::Windows::Forms::Label^ lbl_TVA;
	private: System::Windows::Forms::Label^ lbl_retour;
	private: System::Windows::Forms::Label^ lbl_idaffich;
		   //declaration des objets composant et service
	private: Service::SVC_Gstock^ garticle = gcnew SVC_Gstock();
	private: Composant::Article^ article = gcnew  Composant::Article();
	private: System::Windows::Forms::NumericUpDown^ num_qnt;
	private: System::Windows::Forms::NumericUpDown^ num_seuil;
	private: System::Windows::Forms::Label^ lbl_seuil;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StockForm::typeid));
			this->btn_retour = (gcnew System::Windows::Forms::Button());
			this->txt_couleur = (gcnew System::Windows::Forms::TextBox());
			this->lbl_couleur = (gcnew System::Windows::Forms::Label());
			this->txt_msg = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->dgViewArticle = (gcnew System::Windows::Forms::DataGridView());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->lbl_ref = (gcnew System::Windows::Forms::Label());
			this->btn_creer = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->txt_TTC = (gcnew System::Windows::Forms::TextBox());
			this->lbl_qnt = (gcnew System::Windows::Forms::Label());
			this->lbl_prixTTC = (gcnew System::Windows::Forms::Label());
			this->txt_PrixHt = (gcnew System::Windows::Forms::TextBox());
			this->lbl_prixHT = (gcnew System::Windows::Forms::Label());
			this->txt_TVA = (gcnew System::Windows::Forms::TextBox());
			this->lbl_TVA = (gcnew System::Windows::Forms::Label());
			this->lbl_retour = (gcnew System::Windows::Forms::Label());
			this->lbl_idaffich = (gcnew System::Windows::Forms::Label());
			this->num_qnt = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_seuil = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbl_seuil = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgViewArticle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_qnt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_seuil))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_retour
			// 
			this->btn_retour->BackColor = System::Drawing::Color::Transparent;
			this->btn_retour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_retour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->btn_retour->ForeColor = System::Drawing::Color::White;
			this->btn_retour->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_retour.Image")));
			this->btn_retour->Location = System::Drawing::Point(12, 16);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(41, 36);
			this->btn_retour->TabIndex = 0;
			this->btn_retour->UseVisualStyleBackColor = false;
			this->btn_retour->Click += gcnew System::EventHandler(this, &StockForm::btn_retour_Click);
			// 
			// txt_couleur
			// 
			this->txt_couleur->BackColor = System::Drawing::Color::White;
			this->txt_couleur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_couleur->Location = System::Drawing::Point(143, 168);
			this->txt_couleur->Name = L"txt_couleur";
			this->txt_couleur->Size = System::Drawing::Size(224, 28);
			this->txt_couleur->TabIndex = 33;
			// 
			// lbl_couleur
			// 
			this->lbl_couleur->AutoSize = true;
			this->lbl_couleur->BackColor = System::Drawing::Color::Transparent;
			this->lbl_couleur->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_couleur->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_couleur->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_couleur->Location = System::Drawing::Point(44, 166);
			this->lbl_couleur->Name = L"lbl_couleur";
			this->lbl_couleur->Size = System::Drawing::Size(73, 31);
			this->lbl_couleur->TabIndex = 32;
			this->lbl_couleur->Text = L"Couleur";
			// 
			// txt_msg
			// 
			this->txt_msg->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_msg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_msg->Location = System::Drawing::Point(50, 470);
			this->txt_msg->Multiline = true;
			this->txt_msg->Name = L"txt_msg";
			this->txt_msg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_msg->Size = System::Drawing::Size(653, 83);
			this->txt_msg->TabIndex = 31;
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->BackColor = System::Drawing::Color::Transparent;
			this->lbl_id->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_id->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_id->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_id->Location = System::Drawing::Point(44, 54);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(30, 31);
			this->lbl_id->TabIndex = 29;
			this->lbl_id->Text = L"ID";
			// 
			// btn_valider
			// 
			this->btn_valider->BackColor = System::Drawing::Color::Transparent;
			this->btn_valider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_valider->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_valider->Location = System::Drawing::Point(868, 394);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(134, 51);
			this->btn_valider->TabIndex = 28;
			this->btn_valider->Text = L"Valider";
			this->btn_valider->UseVisualStyleBackColor = false;
			this->btn_valider->Click += gcnew System::EventHandler(this, &StockForm::btn_valider_Click);
			// 
			// dgViewArticle
			// 
			this->dgViewArticle->BackgroundColor = System::Drawing::Color::White;
			this->dgViewArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgViewArticle->Location = System::Drawing::Point(414, 52);
			this->dgViewArticle->MultiSelect = false;
			this->dgViewArticle->Name = L"dgViewArticle";
			this->dgViewArticle->ReadOnly = true;
			this->dgViewArticle->RowHeadersVisible = false;
			this->dgViewArticle->RowHeadersWidth = 51;
			this->dgViewArticle->RowTemplate->Height = 24;
			this->dgViewArticle->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgViewArticle->Size = System::Drawing::Size(588, 238);
			this->dgViewArticle->TabIndex = 27;
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nom->Location = System::Drawing::Point(143, 129);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(224, 28);
			this->txt_nom->TabIndex = 26;
			// 
			// txt_ref
			// 
			this->txt_ref->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ref->Location = System::Drawing::Point(143, 91);
			this->txt_ref->Name = L"txt_ref";
			this->txt_ref->Size = System::Drawing::Size(224, 28);
			this->txt_ref->TabIndex = 25;
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->BackColor = System::Drawing::Color::Transparent;
			this->lbl_nom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_nom->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nom->Location = System::Drawing::Point(46, 127);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(53, 31);
			this->lbl_nom->TabIndex = 24;
			this->lbl_nom->Text = L"Nom ";
			// 
			// lbl_ref
			// 
			this->lbl_ref->AutoSize = true;
			this->lbl_ref->BackColor = System::Drawing::Color::Transparent;
			this->lbl_ref->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_ref->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_ref->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_ref->Location = System::Drawing::Point(44, 89);
			this->lbl_ref->Name = L"lbl_ref";
			this->lbl_ref->Size = System::Drawing::Size(92, 31);
			this->lbl_ref->TabIndex = 23;
			this->lbl_ref->Text = L"Reference";
			// 
			// btn_creer
			// 
			this->btn_creer->BackColor = System::Drawing::Color::Transparent;
			this->btn_creer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_creer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_creer->Location = System::Drawing::Point(50, 394);
			this->btn_creer->Name = L"btn_creer";
			this->btn_creer->Size = System::Drawing::Size(134, 51);
			this->btn_creer->TabIndex = 22;
			this->btn_creer->Text = L"Créer";
			this->btn_creer->UseVisualStyleBackColor = false;
			this->btn_creer->Click += gcnew System::EventHandler(this, &StockForm::btn_creer_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::Color::Transparent;
			this->btn_modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modifier->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_modifier->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_modifier->Location = System::Drawing::Point(233, 394);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(134, 51);
			this->btn_modifier->TabIndex = 21;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &StockForm::btn_modifier_Click);
			// 
			// btn_afficher
			// 
			this->btn_afficher->BackColor = System::Drawing::Color::Transparent;
			this->btn_afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_afficher->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_afficher->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_afficher->Location = System::Drawing::Point(415, 394);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(134, 51);
			this->btn_afficher->TabIndex = 20;
			this->btn_afficher->Text = L"Afficher";
			this->btn_afficher->UseVisualStyleBackColor = false;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &StockForm::btn_afficher_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->BackColor = System::Drawing::Color::Transparent;
			this->btn_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_supprimer->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_supprimer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_supprimer->Location = System::Drawing::Point(596, 394);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(134, 51);
			this->btn_supprimer->TabIndex = 19;
			this->btn_supprimer->Text = L"Supprimer";
			this->btn_supprimer->UseVisualStyleBackColor = false;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &StockForm::btn_supprimer_Click);
			// 
			// txt_TTC
			// 
			this->txt_TTC->BackColor = System::Drawing::Color::White;
			this->txt_TTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_TTC->Location = System::Drawing::Point(688, 338);
			this->txt_TTC->Name = L"txt_TTC";
			this->txt_TTC->Size = System::Drawing::Size(314, 34);
			this->txt_TTC->TabIndex = 35;
			// 
			// lbl_qnt
			// 
			this->lbl_qnt->AutoSize = true;
			this->lbl_qnt->BackColor = System::Drawing::Color::Transparent;
			this->lbl_qnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_qnt->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_qnt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_qnt->Location = System::Drawing::Point(44, 207);
			this->lbl_qnt->Name = L"lbl_qnt";
			this->lbl_qnt->Size = System::Drawing::Size(75, 31);
			this->lbl_qnt->TabIndex = 34;
			this->lbl_qnt->Text = L"Quantité";
			// 
			// lbl_prixTTC
			// 
			this->lbl_prixTTC->AutoSize = true;
			this->lbl_prixTTC->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prixTTC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_prixTTC->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_prixTTC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_prixTTC->Location = System::Drawing::Point(682, 304);
			this->lbl_prixTTC->Name = L"lbl_prixTTC";
			this->lbl_prixTTC->Size = System::Drawing::Size(81, 31);
			this->lbl_prixTTC->TabIndex = 36;
			this->lbl_prixTTC->Text = L"Prix TTC";
			// 
			// txt_PrixHt
			// 
			this->txt_PrixHt->BackColor = System::Drawing::Color::White;
			this->txt_PrixHt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_PrixHt->Location = System::Drawing::Point(50, 338);
			this->txt_PrixHt->Name = L"txt_PrixHt";
			this->txt_PrixHt->Size = System::Drawing::Size(253, 34);
			this->txt_PrixHt->TabIndex = 39;
			this->txt_PrixHt->TextChanged += gcnew System::EventHandler(this, &StockForm::calculTTC);
			// 
			// lbl_prixHT
			// 
			this->lbl_prixHT->AutoSize = true;
			this->lbl_prixHT->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prixHT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_prixHT->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_prixHT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_prixHT->Location = System::Drawing::Point(44, 304);
			this->lbl_prixHT->Name = L"lbl_prixHT";
			this->lbl_prixHT->Size = System::Drawing::Size(72, 31);
			this->lbl_prixHT->TabIndex = 38;
			this->lbl_prixHT->Text = L"Prix HT";
			// 
			// txt_TVA
			// 
			this->txt_TVA->BackColor = System::Drawing::Color::White;
			this->txt_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_TVA->Location = System::Drawing::Point(352, 338);
			this->txt_TVA->Name = L"txt_TVA";
			this->txt_TVA->Size = System::Drawing::Size(269, 34);
			this->txt_TVA->TabIndex = 41;
			this->txt_TVA->TextChanged += gcnew System::EventHandler(this, &StockForm::calculTTC);
			// 
			// lbl_TVA
			// 
			this->lbl_TVA->AutoSize = true;
			this->lbl_TVA->BackColor = System::Drawing::Color::Transparent;
			this->lbl_TVA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_TVA->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_TVA->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_TVA->Location = System::Drawing::Point(346, 304);
			this->lbl_TVA->Name = L"lbl_TVA";
			this->lbl_TVA->Size = System::Drawing::Size(43, 31);
			this->lbl_TVA->TabIndex = 40;
			this->lbl_TVA->Text = L"TVA";
			// 
			// lbl_retour
			// 
			this->lbl_retour->AutoSize = true;
			this->lbl_retour->BackColor = System::Drawing::Color::Transparent;
			this->lbl_retour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_retour->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_retour->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_retour->Location = System::Drawing::Point(59, 25);
			this->lbl_retour->Name = L"lbl_retour";
			this->lbl_retour->Size = System::Drawing::Size(50, 24);
			this->lbl_retour->TabIndex = 42;
			this->lbl_retour->Text = L"Retour";
			// 
			// lbl_idaffich
			// 
			this->lbl_idaffich->AutoSize = true;
			this->lbl_idaffich->BackColor = System::Drawing::Color::Transparent;
			this->lbl_idaffich->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_idaffich->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_idaffich->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_idaffich->Location = System::Drawing::Point(136, 54);
			this->lbl_idaffich->Name = L"lbl_idaffich";
			this->lbl_idaffich->Size = System::Drawing::Size(143, 31);
			this->lbl_idaffich->TabIndex = 43;
			this->lbl_idaffich->Text = L"ID s\'affichera ici!";
			// 
			// num_qnt
			// 
			this->num_qnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num_qnt->Location = System::Drawing::Point(143, 214);
			this->num_qnt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->num_qnt->Name = L"num_qnt";
			this->num_qnt->Size = System::Drawing::Size(224, 27);
			this->num_qnt->TabIndex = 44;
			// 
			// num_seuil
			// 
			this->num_seuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num_seuil->Location = System::Drawing::Point(143, 263);
			this->num_seuil->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->num_seuil->Name = L"num_seuil";
			this->num_seuil->Size = System::Drawing::Size(224, 27);
			this->num_seuil->TabIndex = 45;
			// 
			// lbl_seuil
			// 
			this->lbl_seuil->AutoSize = true;
			this->lbl_seuil->BackColor = System::Drawing::Color::Transparent;
			this->lbl_seuil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_seuil->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_seuil->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_seuil->Location = System::Drawing::Point(46, 258);
			this->lbl_seuil->Name = L"lbl_seuil";
			this->lbl_seuil->Size = System::Drawing::Size(51, 31);
			this->lbl_seuil->TabIndex = 46;
			this->lbl_seuil->Text = L"Seuil";
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1035, 584);
			this->Controls->Add(this->lbl_seuil);
			this->Controls->Add(this->num_seuil);
			this->Controls->Add(this->num_qnt);
			this->Controls->Add(this->lbl_idaffich);
			this->Controls->Add(this->lbl_retour);
			this->Controls->Add(this->txt_TVA);
			this->Controls->Add(this->lbl_TVA);
			this->Controls->Add(this->txt_PrixHt);
			this->Controls->Add(this->lbl_prixHT);
			this->Controls->Add(this->lbl_prixTTC);
			this->Controls->Add(this->txt_TTC);
			this->Controls->Add(this->lbl_qnt);
			this->Controls->Add(this->txt_couleur);
			this->Controls->Add(this->lbl_couleur);
			this->Controls->Add(this->txt_msg);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->dgViewArticle);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_ref);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->lbl_ref);
			this->Controls->Add(this->btn_creer);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_afficher);
			this->Controls->Add(this->btn_supprimer);
			this->Controls->Add(this->btn_retour);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StockForm";
			this->Text = L"StockForm";
			this->Load += gcnew System::EventHandler(this, &StockForm::StockForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgViewArticle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_qnt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_seuil))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn_retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour4->Show();
}
	
private: System::Void dgViewArticle_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void StockForm_Load(System::Object^ sender, System::EventArgs^ e);
	   //boutons gestion du stock
private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_creer_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_afficher_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e);

private: void calculTTC(System::Object^ sender, System::EventArgs^ e);
public: 
	void set_article(Composant::Article^);
	Composant::Article^ get_article(void);
};
}
