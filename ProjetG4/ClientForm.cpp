#include "ClientForm.h"

System::Void ProjetG4::ClientForm::ClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dgViewClient->DataSource = this->gclient->listeclients();//afficher la liste des clients dans le datagridview
}

System::Void ProjetG4::ClientForm::btn_afficher_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gclient->afficher(Convert::ToInt32(dgViewClient->SelectedRows[0]->Cells[0]->Value));
	this->set_client(this->gclient->get_client());
	ClientForm_Load(sender, e);
}
System::Void ProjetG4::ClientForm::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheAdresse^ page = gcnew FicheAdresse(this);
	page->set_combo_ville(this->gclient->listeville());
	page->set_adresses(this->gclient->get_adrclient());
	ProjetG4::ClientForm::Hide();
	page->ShowDialog();
	this->gclient->ajouter(txt_nom->Text,txt_prenom->Text,date_naisse->Value,date_pr_achat->Value,page->get_adresse_dg());
	ClientForm_Load(sender, e);
}

System::Void ProjetG4::ClientForm::btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheAdresse^ page = gcnew FicheAdresse(this);
	page->set_combo_ville(this->gclient->listeville());
	page->set_adresses(this->gclient->get_adrclient());
	ProjetG4::ClientForm::Hide();
	page->ShowDialog();
	this->gclient->modifier(Convert::ToInt32(lbl_idaffich->Text), txt_nom->Text, txt_prenom->Text, date_naisse->Value, date_pr_achat->Value, page->get_adresse_dg(),page->supradr);
	ClientForm_Load(sender, e);
}

System::Void ProjetG4::ClientForm::btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Etes-vous sur de vouloir supprimer ?","Valider la suppresion", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		this->gclient->supprimer(Convert::ToInt32(this->dgViewClient->SelectedRows[0]->Cells[0]->Value));
		FicheAdresse^ page = gcnew FicheAdresse(this);
		ClientForm_Load(sender, e);
	}
	else {
		ClientForm_Load(sender, e);
	}
}

System::Void ProjetG4::ClientForm::btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void ProjetG4::ClientForm::btn_adresse_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheAdresse^ page = gcnew FicheAdresse(this);
	page->set_combo_ville(this->gclient->listeville());
	page->set_adresses(this->gclient->get_adrclient());
	ProjetG4::ClientForm::Hide();
	page->ShowDialog(); 
}

System::Void ProjetG4::ClientForm::set_client(Composant::Client^ c)
{
	this->client = c;
	this->lbl_idaffich->Text = Convert::ToString(client->get_id());
	this->txt_nom->Text = this->client->get_nom();
	this->txt_prenom->Text = this->client->get_prenom();
	this->date_naisse->Value = DateTime(client->GetDate_naiss()->Year, client->GetDate_naiss()->Month, client->GetDate_naiss()->Day);
	this->date_pr_achat->Value = DateTime(client->GetDate_pr_achat()->Year, client->GetDate_pr_achat()->Month, client->GetDate_pr_achat()->Day);
}