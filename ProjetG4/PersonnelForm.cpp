#include "PersonnelForm.h"

//permet de retourner à la page d'acceuil
System::Void ProjetG4::PersonnelForm::btn_retour_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	retour->Show();
}

System::Void ProjetG4::PersonnelForm::PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->txt_msg->Text = "Bienvenue à la gestion du personnel";
	//chargement de la liste du personnel dans la datagridView
	dgviewDB->DataSource = this->gpersonnel->listeemploye();
	this->comboBox1->DataSource = this->gpersonnel->cad->getRows("SELECT Id_personnel, CONCAT(nom_P,' ',prenom_P) as employe from personnel");
	this->comboBox1->ValueMember = "Id_personnel";
	this->comboBox1->DisplayMember = "Employe";
	//combobox ville
	this->boxville->DataSource = this->gpersonnel->liste_ville();
	this->boxville->ValueMember = "Id_Ville";
	this->boxville->DisplayMember = "Nom_Ville";
}

System::Void ProjetG4::PersonnelForm::btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
System::Void ProjetG4::PersonnelForm::btn_afficher_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gpersonnel->afficher(Convert::ToInt32(dgviewDB->SelectedRows[0]->Cells[0]->Value));
	this->gpersonnel->cad->getRows(gpersonnel->personnel->SELECTbyid());
	this->lbl_idaffich->Text = Convert::ToString(gpersonnel->personnel->get_id());
	this->txtbox_nom->Text= gpersonnel->personnel->get_nom();
	this->txtbox_prenom->Text = gpersonnel->personnel->get_prenom();
	DateTime^ date = gpersonnel->personnel->get_date_embauche();
	this->dateTimePicker1->Value = DateTime(date->Year, date->Month, date->Day);
	this->txtbox_adr->Text = this->gpersonnel->adresse->getAdresse();
	this->boxville->SelectedIndex = gpersonnel->ville->getIdVille();
	PersonnelForm_Load(sender, e);
	//chiraz heba hlawa
}

System::Void ProjetG4::PersonnelForm::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
	//ajout d'un nouvel employé sans superviseur
	this->gpersonnel->ajouter(txtbox_nom->Text, txtbox_prenom->Text, dateTimePicker1->Value, txtbox_adr->Text, boxville->Text);
	PersonnelForm_Load(sender, e);
}

System::Void ProjetG4::PersonnelForm::btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
	//modifier un employé
	this->gpersonnel->modifier(Convert::ToInt32(lbl_idaffich->Text),txtbox_nom->Text, txtbox_prenom->Text, dateTimePicker1->Value, txtbox_adr->Text, boxville->Text);
	PersonnelForm_Load(sender, e);
	
}

System::Void ProjetG4::PersonnelForm::btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
	//supprimer un employé
	this->gpersonnel->supprimer(Convert::ToInt32(dgviewDB->SelectedRows[0]->Cells[0]->Value));
	PersonnelForm_Load(sender, e);
}

