#include "StockForm.h"

System::Void ProjetG4::StockForm::StockForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->dgViewArticle->DataSource = garticle->listestock();
}

System::Void ProjetG4::StockForm::btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void ProjetG4::StockForm::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->garticle->ajouter(txt_ref->Text, txt_nom->Text, Convert::ToDouble(txt_PrixHt->Text), Convert::ToDouble(txt_TVA->Text), Convert::ToInt32(num_qnt->Value), Convert::ToInt32(num_seuil->Value), txt_couleur->Text);
    StockForm_Load(sender, e);
}

System::Void ProjetG4::StockForm::btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->garticle->modifier(Convert::ToInt32(lbl_idaffich->Text),txt_ref->Text,txt_nom->Text,Convert::ToDouble(txt_PrixHt->Text), Convert::ToDouble(txt_TVA->Text),Convert::ToInt32(num_qnt->Value) , Convert::ToInt32(num_seuil->Value),txt_couleur->Text);
    StockForm_Load(sender, e);
}

System::Void ProjetG4::StockForm::btn_afficher_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->garticle->afficher(Convert::ToInt32(dgViewArticle->SelectedRows[0]->Cells[0]->Value));
    this->set_article(this->garticle->get_article());
    StockForm_Load(sender,e);
}

System::Void ProjetG4::StockForm::btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Etes-vous sur de vouloir supprimer ?", "Valider la suppresion", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
        this->garticle->supprimer(Convert::ToInt32(dgViewArticle->SelectedRows[0]->Cells[0]->Value));
        StockForm_Load(sender, e);
    }else{
        StockForm_Load(sender, e);
    }
        

}

void ProjetG4::StockForm::calculTTC(System::Object^ sender, System::EventArgs^ e)
{
    if(!(txt_PrixHt->Text ==""|| txt_TVA->Text =="") ){
        float HT = Convert::ToDouble(txt_PrixHt->Text->Replace(",", "."));
        float TVA = Convert::ToDouble(txt_TVA->Text->Replace(",", "."));
        float TTC = HT + (HT * TVA / 100);
        this->txt_TTC->Text = TTC.ToString();
    }
}

void ProjetG4::StockForm::set_article(Composant::Article^ article)
{
    this->article = article;
    this->lbl_idaffich->Text = Convert::ToString(article->getID_article());
    this->txt_ref->Text = article->getReference_article();
    this->txt_nom->Text = article->getDesignation();
    this->txt_PrixHt->Text = article->getPrix_HT().ToString();
    this->txt_TVA->Text = article->getTaux_TVA().ToString();
    this->num_qnt->Value = article->getQuantite_en_Stock();
    this->num_seuil->Value = article->getSeuil_de_reapprovisionnement();
    this->txt_couleur->Text = article->getCouleur();
}
Composant::Article^ ProjetG4::StockForm::get_article(void)
{
    return this->article;
}
