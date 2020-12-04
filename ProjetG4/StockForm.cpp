#include "StockForm.h"

System::Void ProjetG4::StockForm::StockForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->dgViewArticle->DataSource = garticle->listestock();
}

System::Void ProjetG4::StockForm::btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void ProjetG4::StockForm::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void ProjetG4::StockForm::btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void ProjetG4::StockForm::btn_afficher_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->garticle->afficher(Convert::ToInt32(dgViewArticle->SelectedRows[0]->Cells[0]->Value));
    this->lbl_idaffich->Text = Convert::ToString(article->getID_article());
    this->txt_ref->Text = article->getReference_article();
    this->txt_nom->Text = article->getDesignation();
    this->txt_couleur->Text = article->getCouleur();
    this->txt_quantite->Text = Convert::ToString(article->getQuantite_en_Stock());
    this->txt_PrixHt->Text = Convert::ToString(article->getPrix_HT());
    this->txt_TVA->Text = Convert::ToString(article->getTaux_TVA());
    StockForm_Load(sender,e);
}

System::Void ProjetG4::StockForm::btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
