#include "FicheAdresse.h"

System::String^ ProjetG4::FicheAdresse::get_adresse()
{
	return this->txt_adr->Text;
}

System::String^ ProjetG4::FicheAdresse::get_ville()
{
	return this->boxVille->Text;
}

void ProjetG4::FicheAdresse::set_combo_ville(DataTable^ TV)
{
	this->boxVille->DataSource = TV;
	this->boxVille->ValueMember = "Id_Ville";
	this->boxVille->DisplayMember = "Nom_Ville";
}

void ProjetG4::FicheAdresse::set_ville(String^ v)
{
	this->boxVille->SelectedIndex = boxVille->FindString(v);
}

void ProjetG4::FicheAdresse::set_adresse(String^ adr)
{
	this->txt_adr->Text = adr;
}

System::Void ProjetG4::FicheAdresse::btn_retour_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	retour->Show();
}
