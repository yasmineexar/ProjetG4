#include "FicheAdresse.h"

void ProjetG4::FicheAdresse::set_combo_ville(DataTable^ ville)
{
	this->dt = ville;
	this->boxVille->DataSource = dt;
	this->boxVille->ValueMember = "Id_Ville";
	this->boxVille->DisplayMember = "Nom_Ville";
}

void ProjetG4::FicheAdresse::set_adresses(List<Composant::Adresse^>^ adr)
{
	for (int i = 0; i < adr->Count; i++) {
		boxVille->SelectedValue = adr[i]->getIdVille();
		this->dataGridView1->Rows->Add(adr[i]->getIdAdresse(), adr[i]->getAdresse(),boxVille->GetItemText(boxVille->SelectedItem));
	}
	boxVille->SelectedIndex = 0;
}

System::Data::DataTable^ ProjetG4::FicheAdresse::get_adresse_dg()
{
	DataTable^ dadr= gcnew DataTable();
	dadr->Columns->Add("Id");
	dadr->Columns->Add("Adresse");
	dadr->Columns->Add("Ville");
	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
		dadr->Rows->Add(Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value), Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value), Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value));
	}
	return dadr;
}

System::Void ProjetG4::FicheAdresse::btn_creeradr_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataGridView1->Rows->Add(0, this->txt_adr->Text, this->boxVille->Text);
}

System::Void ProjetG4::FicheAdresse::btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	retour->Show();
}

System::Void ProjetG4::FicheAdresse::btn_modifieradr_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataGridView1->SelectedRows[0]->Cells[1]->Value = this->txt_adr->Text;
	this->dataGridView1->SelectedRows[0]->Cells[2]->Value = this->boxVille->Text;
}

System::Void ProjetG4::FicheAdresse::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->supradr->Add(Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value));
	this->dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
}



