#pragma once

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ lblretour;
	private: System::Windows::Forms::Button^ btn_retour;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FicheAdresse::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->boxVille = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_adr = (gcnew System::Windows::Forms::Label());
			this->lbl_ville = (gcnew System::Windows::Forms::Label());
			this->txt_adr = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->btn_creeradr = (gcnew System::Windows::Forms::Button());
			this->btn_modifieradr = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lblretour = (gcnew System::Windows::Forms::Label());
			this->btn_retour = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(34, 283);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(493, 178);
			this->dataGridView1->TabIndex = 0;
			// 
			// boxVille
			// 
			this->boxVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxVille->FormattingEnabled = true;
			this->boxVille->Location = System::Drawing::Point(542, 126);
			this->boxVille->Name = L"boxVille";
			this->boxVille->Size = System::Drawing::Size(355, 33);
			this->boxVille->TabIndex = 1;
			// 
			// lbl_adr
			// 
			this->lbl_adr->AutoSize = true;
			this->lbl_adr->BackColor = System::Drawing::Color::Transparent;
			this->lbl_adr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_adr->ForeColor = System::Drawing::Color::White;
			this->lbl_adr->Location = System::Drawing::Point(29, 85);
			this->lbl_adr->Name = L"lbl_adr";
			this->lbl_adr->Size = System::Drawing::Size(85, 25);
			this->lbl_adr->TabIndex = 2;
			this->lbl_adr->Text = L"Adresse";
			// 
			// lbl_ville
			// 
			this->lbl_ville->AutoSize = true;
			this->lbl_ville->BackColor = System::Drawing::Color::Transparent;
			this->lbl_ville->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_ville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ville->ForeColor = System::Drawing::Color::White;
			this->lbl_ville->Location = System::Drawing::Point(537, 85);
			this->lbl_ville->Name = L"lbl_ville";
			this->lbl_ville->Size = System::Drawing::Size(49, 25);
			this->lbl_ville->TabIndex = 3;
			this->lbl_ville->Text = L"Ville";
			// 
			// txt_adr
			// 
			this->txt_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_adr->Location = System::Drawing::Point(34, 126);
			this->txt_adr->Name = L"txt_adr";
			this->txt_adr->Size = System::Drawing::Size(481, 30);
			this->txt_adr->TabIndex = 4;
			// 
			// btn_valider
			// 
			this->btn_valider->BackColor = System::Drawing::Color::Transparent;
			this->btn_valider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_valider->ForeColor = System::Drawing::Color::White;
			this->btn_valider->Location = System::Drawing::Point(728, 318);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(169, 65);
			this->btn_valider->TabIndex = 5;
			this->btn_valider->Text = L"Valider";
			this->btn_valider->UseVisualStyleBackColor = false;
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
			// 
			// btn_modifieradr
			// 
			this->btn_modifieradr->BackColor = System::Drawing::Color::Transparent;
			this->btn_modifieradr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modifieradr->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_modifieradr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_modifieradr->Location = System::Drawing::Point(350, 192);
			this->btn_modifieradr->Name = L"btn_modifieradr";
			this->btn_modifieradr->Size = System::Drawing::Size(177, 51);
			this->btn_modifieradr->TabIndex = 46;
			this->btn_modifieradr->Text = L"Modifier Adresse";
			this->btn_modifieradr->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(728, 192);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 51);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Afficher Adresse";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// lblretour
			// 
			this->lblretour->AutoSize = true;
			this->lblretour->BackColor = System::Drawing::Color::Transparent;
			this->lblretour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblretour->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblretour->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblretour->Location = System::Drawing::Point(71, 22);
			this->lblretour->Name = L"lblretour";
			this->lblretour->Size = System::Drawing::Size(50, 24);
			this->lblretour->TabIndex = 49;
			this->lblretour->Text = L"Retour";
			// 
			// btn_retour
			// 
			this->btn_retour->BackColor = System::Drawing::Color::Transparent;
			this->btn_retour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_retour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->btn_retour->ForeColor = System::Drawing::Color::White;
			this->btn_retour->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_retour.Image")));
			this->btn_retour->Location = System::Drawing::Point(23, 12);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(42, 44);
			this->btn_retour->TabIndex = 48;
			this->btn_retour->UseVisualStyleBackColor = false;
			this->btn_retour->Click += gcnew System::EventHandler(this, &FicheAdresse::btn_retour_Click);
			// 
			// FicheAdresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(953, 510);
			this->Controls->Add(this->lblretour);
			this->Controls->Add(this->btn_retour);
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
			this->Name = L"FicheAdresse";
			this->Text = L"FicheAdresse";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
}
#pragma endregion

public:
	String^ get_adresse();
	String^ get_ville();
	void set_combo_ville(DataTable^);
	void set_ville(String^);
	void set_adresse(String^);
private: System::Void btn_retour_Click(System::Object^ sender, System::EventArgs^ e); 
};
}
