#pragma once
#include"GestionPersonnel.h"
#include"GestionClient.h"
#include"GestionCommande.h"
#include"GestionStock.h"
#include"GestionStatistique.h"

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MYASElectronics
	/// </summary>
	public ref class MAYSElectronics : public System::Windows::Forms::Form
	{
	public:
		MAYSElectronics(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MAYSElectronics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MAYSElectronics::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(724, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PERSONNEL";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MAYSElectronics::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(539, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 54);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CLIENT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MAYSElectronics::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(354, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 54);
			this->button3->TabIndex = 2;
			this->button3->Text = L"COMMANDE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MAYSElectronics::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(202, 369);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 60);
			this->button4->TabIndex = 3;
			this->button4->Text = L"STOCK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MAYSElectronics::button4_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(769, 74);
			this->label1->TabIndex = 4;
			this->label1->Text = L"BIENVENU CHEZ MAYS ELECTRONICS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MAYSElectronics::label1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(38, 366);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 60);
			this->button5->TabIndex = 5;
			this->button5->Text = L"STATISTIQUE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MAYSElectronics::button5_Click);
			// 
			// MAYSElectronics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(955, 529);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(973, 576);
			this->MinimumSize = System::Drawing::Size(973, 576);
			this->Name = L"MAYSElectronics";
			this->Text = L"MAYSElectronics";
			this->Load += gcnew System::EventHandler(this, &MAYSElectronics::MAYSElectronics_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionPersonnel^ page = gcnew GestionPersonnel(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionClient^ page = gcnew GestionClient(this);
	this->Hide();
	page->ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionCommande^ page = gcnew GestionCommande(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionStock^ page = gcnew GestionStock(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	GestionStatistique^ page = gcnew GestionStatistique(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void MAYSElectronics_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
