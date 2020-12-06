#pragma once
#include"SVC_Gstatistique.h"

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Service;

	/// <summary>
	/// Description résumée de StatistiqueForm
	/// </summary>
	public ref class StatistiqueForm : public System::Windows::Forms::Form
	{
	public:
		Form^ retour5;
		StatistiqueForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		StatistiqueForm(Form^ r5)
		{
			retour5 = r5;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StatistiqueForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_actualiser;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ lbl_article;
	private: System::Windows::Forms::DateTimePicker^ Debut;
	private: System::Windows::Forms::ComboBox^ lstclient;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DateTimePicker^ Fin;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Valeur_stock;
	private: System::Windows::Forms::Label^ lbl_paniermoyen;
	private: System::Windows::Forms::Label^ Panier_moyen;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: Service::SVC_Gstatistique^ gstat = gcnew SVC_Gstatistique();
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StatistiqueForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_actualiser = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_article = (gcnew System::Windows::Forms::Label());
			this->Debut = (gcnew System::Windows::Forms::DateTimePicker());
			this->lstclient = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Fin = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Valeur_stock = (gcnew System::Windows::Forms::Label());
			this->lbl_paniermoyen = (gcnew System::Windows::Forms::Label());
			this->Panier_moyen = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::Info;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 36);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StatistiqueForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(59, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 24);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Retour";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1072, 87);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(240, 419);
			this->dataGridView1->TabIndex = 31;
			// 
			// btn_actualiser
			// 
			this->btn_actualiser->BackColor = System::Drawing::Color::Transparent;
			this->btn_actualiser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_actualiser->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_actualiser->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_actualiser->Location = System::Drawing::Point(32, 456);
			this->btn_actualiser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_actualiser->Name = L"btn_actualiser";
			this->btn_actualiser->Size = System::Drawing::Size(491, 50);
			this->btn_actualiser->TabIndex = 32;
			this->btn_actualiser->Text = L"Actualiser";
			this->btn_actualiser->UseVisualStyleBackColor = false;
			this->btn_actualiser->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_actualiser_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(550, 87);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(236, 419);
			this->dataGridView2->TabIndex = 33;
			// 
			// lbl_article
			// 
			this->lbl_article->AutoSize = true;
			this->lbl_article->BackColor = System::Drawing::Color::Transparent;
			this->lbl_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_article->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_article->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_article->Location = System::Drawing::Point(581, 43);
			this->lbl_article->Name = L"lbl_article";
			this->lbl_article->Size = System::Drawing::Size(182, 31);
			this->lbl_article->TabIndex = 34;
			this->lbl_article->Text = L"Articles Moins vendus";
			// 
			// Debut
			// 
			this->Debut->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Debut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Debut->Location = System::Drawing::Point(26, 210);
			this->Debut->Name = L"Debut";
			this->Debut->Size = System::Drawing::Size(354, 27);
			this->Debut->TabIndex = 35;
			// 
			// lstclient
			// 
			this->lstclient->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstclient->FormattingEnabled = true;
			this->lstclient->Location = System::Drawing::Point(154, 274);
			this->lstclient->Name = L"lstclient";
			this->lstclient->Size = System::Drawing::Size(226, 32);
			this->lstclient->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(844, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 31);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Articles Plus vendus";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(809, 87);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(242, 419);
			this->dataGridView3->TabIndex = 38;
			// 
			// Fin
			// 
			this->Fin->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fin->Location = System::Drawing::Point(26, 147);
			this->Fin->Name = L"Fin";
			this->Fin->Size = System::Drawing::Size(354, 27);
			this->Fin->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(1081, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 31);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Articles sous seuil de reap";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(26, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(201, 31);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Chiffre d\'affaire mensuel";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(26, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 31);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Achat Client";
			this->label5->Click += gcnew System::EventHandler(this, &StatistiqueForm::label5_Click);
			// 
			// Valeur_stock
			// 
			this->Valeur_stock->AutoSize = true;
			this->Valeur_stock->BackColor = System::Drawing::Color::Transparent;
			this->Valeur_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Valeur_stock->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->Valeur_stock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Valeur_stock->Location = System::Drawing::Point(20, 391);
			this->Valeur_stock->Name = L"Valeur_stock";
			this->Valeur_stock->Size = System::Drawing::Size(110, 31);
			this->Valeur_stock->TabIndex = 44;
			this->Valeur_stock->Text = L"Valeur Stock";
			// 
			// lbl_paniermoyen
			// 
			this->lbl_paniermoyen->AutoSize = true;
			this->lbl_paniermoyen->BackColor = System::Drawing::Color::Transparent;
			this->lbl_paniermoyen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_paniermoyen->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->lbl_paniermoyen->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_paniermoyen->Location = System::Drawing::Point(20, 335);
			this->lbl_paniermoyen->Name = L"lbl_paniermoyen";
			this->lbl_paniermoyen->Size = System::Drawing::Size(119, 31);
			this->lbl_paniermoyen->TabIndex = 45;
			this->lbl_paniermoyen->Text = L"Panier Moyen";
			// 
			// Panier_moyen
			// 
			this->Panier_moyen->AutoSize = true;
			this->Panier_moyen->BackColor = System::Drawing::Color::Transparent;
			this->Panier_moyen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Panier_moyen->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->Panier_moyen->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Panier_moyen->Location = System::Drawing::Point(240, 840);
			this->Panier_moyen->Name = L"Panier_moyen";
			this->Panier_moyen->Size = System::Drawing::Size(119, 31);
			this->Panier_moyen->TabIndex = 46;
			this->Panier_moyen->Text = L"Panier Moyen";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(390, 174);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 31);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Chiffre d\'affaire";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(390, 273);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 31);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Achat Client";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(154, 335);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 30);
			this->textBox1->TabIndex = 49;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(154, 391);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(226, 30);
			this->textBox2->TabIndex = 50;
			// 
			// StatistiqueForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1373, 633);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Panier_moyen);
			this->Controls->Add(this->lbl_paniermoyen);
			this->Controls->Add(this->Valeur_stock);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Fin);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lstclient);
			this->Controls->Add(this->Debut);
			this->Controls->Add(this->lbl_article);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btn_actualiser);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StatistiqueForm";
			this->Text = L"Gestion Statistique";
			this->Load += gcnew System::EventHandler(this, &StatistiqueForm::StatistiqueForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StatistiqueForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//identifier article sous seuil de reap
		this->dataGridView1->DataSource = gstat->produitssousseuilreap();
		//article plus vendu 
		this->dataGridView3->DataSource = gstat->topvendu();
		//article moins vendu
		this->dataGridView2->DataSource = gstat->flopvendu();
		//panier moyen
		this->textBox1->Text= Convert::ToString(gstat->calculpaniermoyen());
		//chiffre d'affaire
		this->label7->Text = Convert::ToString(gstat->calculchiffreaffaire(Debut->Value,Fin->Value));
	}
		   //bouton retour
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour5->Show();
	}
	
	private: System::Void btn_actualiser_Click(System::Object^ sender, System::EventArgs^ e) {
		StatistiqueForm_Load(sender,e);
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gstat->clientliste();
}
};
}
