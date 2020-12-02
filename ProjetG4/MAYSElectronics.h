#pragma once
#include"PersonnelForm.h"
#include"ClientForm.h"
#include"CommandeForm.h"
#include"StockForm.h"
#include"StatistiqueForm.h"

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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(604, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PERSONNEL";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MAYSElectronics::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(762, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CLIENT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MAYSElectronics::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(523, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"COMMANDE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MAYSElectronics::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(436, 214);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 51);
			this->button4->TabIndex = 3;
			this->button4->Text = L"STOCK";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MAYSElectronics::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(372, 395);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 51);
			this->button5->TabIndex = 5;
			this->button5->Text = L"STATISTIQUE";
			this->button5->UseVisualStyleBackColor = false;
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
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(973, 576);
			this->MinimumSize = System::Drawing::Size(973, 576);
			this->Name = L"MAYSElectronics";
			this->Text = L"MAYSElectronics";
			this->Load += gcnew System::EventHandler(this, &MAYSElectronics::MAYSElectronics_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	PersonnelForm^ page = gcnew PersonnelForm(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientForm^ page = gcnew ClientForm(this);
	this->Hide();
	page->ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	CommandeForm^ page = gcnew CommandeForm(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	StockForm^ page = gcnew StockForm(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	StatistiqueForm^ page = gcnew StatistiqueForm(this);
	this->Hide();
	page->ShowDialog();
}
private: System::Void MAYSElectronics_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
