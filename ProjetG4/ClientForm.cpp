#include "ClientForm.h"

System::Void ProjetG4::ClientForm::ClientForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->dgViewClient->DataSource = this->gclient->listeclients();//afficher la liste des clients dans le datagridview
}

System::Void ProjetG4::ClientForm::btn_afficher_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
System::Void ProjetG4::ClientForm::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void ProjetG4::ClientForm::btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void ProjetG4::ClientForm::btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void ProjetG4::ClientForm::btn_enrg_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
