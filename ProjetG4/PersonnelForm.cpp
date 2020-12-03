#include "PersonnelForm.h"

System::Void ProjetG4::PersonnelForm::PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	//chargement de la liste du personnel dans la datagridView
	dgviewDB->DataSource = gpersonnel->listeemploye();
	this->comboBox1->DataSource = gpersonnel->cad->getRows("SELECT Id_personnel, concact(nom_P,' ',prenom_P) as employe from personnel");
	this->comboBox1->ValueMember = "Id_personnel";
	this->comboBox1->DisplayMember = "Employe";
}

System::Void ProjetG4::PersonnelForm::btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
System::Void ProjetG4::PersonnelForm::btn_afficher_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gpersonnel->afficher(Convert::ToInt32(dgviewDB->SelectedRows[0]->Cells[0]->Value));
	this->gpersonnel->cad->getRows(gpersonnel->personnel->SELECTbyid());
	this->txtbox_nom->Text= gpersonnel->personnel->get_nom();
	this->txtbox_prenom->Text = gpersonnel->personnel->get_prenom();
	DateTime^ date = gpersonnel->personnel->get_date_embauche();
	this->dateTimePicker1->Value = DateTime(date->Year, date->Month, date->Day);
	//chiraz heba hlawa
}

System::Void ProjetG4::PersonnelForm::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
	//ajout d'un nouvel employé
}

System::Void ProjetG4::PersonnelForm::btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
	//modifier un employé
}

System::Void ProjetG4::PersonnelForm::btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
	//supprimer un employé
}

System::Void ProjetG4::PersonnelForm::dgviewDB_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}
