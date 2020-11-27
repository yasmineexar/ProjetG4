#pragma once

namespace ProjetG4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionStatistique
	/// </summary>
	public ref class GestionStatistique : public System::Windows::Forms::Form
	{
	public:
		GestionStatistique(void)
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
		~GestionStatistique()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// GestionStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 529);
			this->MaximumSize = System::Drawing::Size(973, 576);
			this->MinimumSize = System::Drawing::Size(973, 576);
			this->Name = L"GestionStatistique";
			this->Text = L"GestionStatistique";
			this->Load += gcnew System::EventHandler(this, &GestionStatistique::GestionStatistique_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionStatistique_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
