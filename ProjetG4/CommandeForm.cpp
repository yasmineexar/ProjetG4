#include "CommandeForm.h"


System::Void ProjetG4::CommandeForm::CommandeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    System::Data::DataTable^ ds = this->gestioncommande->listecommande();
    this->dataGridView1->DataSource = ds;
}

System::Void ProjetG4::CommandeForm::btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->gestioncommande->supprimer(int::Parse(this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString()));
    ProjetG4::CommandeForm::CommandeForm_Load(sender, e);
}

System::Void ProjetG4::CommandeForm::btn_afficher_Click(System::Object^ sender, System::EventArgs^ e)
{
    FicheCommande^ fc = gcnew FicheCommande();
    fc->listearticle = this->gestioncommande->get_listearticle();
    this->gestioncommande->afficher(Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value));
    fc->set_adresse_list(this->gestioncommande->get_adressesclient());
    fc->set_client(this->gestioncommande->get_nomprenom());
    fc->set_commande(this->gestioncommande->get_commande());
    fc->set_choix(this->gestioncommande->get_choix());
    fc->ShowDialog();
}

System::Void ProjetG4::CommandeForm::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
    FicheCommande^ fc = gcnew FicheCommande();
    MyForm1^ lstcl = gcnew MyForm1();
    lstcl->set_cl_lst(this->gestioncommande->listeclient());
    lstcl->ShowDialog();
    if (lstcl->selected) {
        this->gestioncommande->set_idclient(lstcl->get_cl_sl());
        fc->set_adresse_list(this->gestioncommande->get_adressesclient());
        fc->set_client(lstcl->get_client());
        fc->listearticle = this->gestioncommande->get_listearticle();
        fc->ShowDialog();
        if (fc->valider) {
            this->gestioncommande->set_commande(fc->get_commande());
            this->gestioncommande->set_choix(fc->get_choix());
            this->gestioncommande->ajouter();
        }
    }
    ProjetG4::CommandeForm::CommandeForm_Load(sender, e);
}

System::Void ProjetG4::CommandeForm::btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Windows::Forms::MessageBox::Show("Oups! Pas de modification disponible", "On a vraiment essayé !", MessageBoxButtons::OK);
}


