#include "SVC_Gstatistique.h"
namespace Service {
    SVC_Gstatistique::SVC_Gstatistique()
    {
        this->cad = gcnew Composant::CAD;
    }
    float SVC_Gstatistique::calculchiffreaffaire(DateTime^ debut, DateTime^ fin) //mensuel
    {
        DataTable^ d = this->cad->getRows("select sum((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) from " +
            "(select remise,quantite_article,prix_ht,tva,date_emission from choisir left join [dbo].[Commande] on commande.id_commande = choisir.id_commande where date_emission > convert(date,'" +
            debut->Day + "/" + debut->Month + "/" + debut->Year + "',103) and date_emission < convert(date,'" + fin->Day + "/" + fin->Month + "/" + fin->Year + "',103)) as tbl");
        float chiffreafaire;
        if (d->Rows[0]->ItemArray[0]->ToString() != "") {
            chiffreafaire = float::Parse(d->Rows[0]->ItemArray[0]->ToString());
        }
        else {
            chiffreafaire = 0.00;
        }
        return chiffreafaire;
    }
    float SVC_Gstatistique::calculpaniermoyen()
    {
        float chiffreaffaire;
        int nbcommande = this->cad->actionRowsID("SELECT count(ID_Commande) from commande");
        DataTable^ t = this->cad->getRows("SELECT sum(Prix_Ht+(Prix_Ht*TVA/100)*quantite_article) as chiffre_affaire from choisir");
        if (t->Rows[0]->ItemArray[0]->ToString() != "") {
            chiffreaffaire = float::Parse(t->Rows[0]->ItemArray[0]->ToString());
        }
        else {
            chiffreaffaire = 0.00;
        }
        return chiffreaffaire/nbcommande;
    }
    DataTable^ SVC_Gstatistique::produitssousseuilreap()
    {
        return this->cad->getRows("SELECT Reference_Article,Designation FROM Article WHERE Quantite_en_Stock < Seuil_de_reapprovisionnement");
    }
    float SVC_Gstatistique::calcultotalachatclient(int id)
    {
        return 0.0f;
    }
    DataTable^ SVC_Gstatistique::topvendu()
    {
        return this->cad->getRows("SELECT TOP 10 [Choisir].id_article,[Article].Designation,SUM([Choisir].quantite_article) FROM Article,Choisir WHERE [Choisir].id_article = [Article].id_article GROUP BY [Choisir].id_article,[Article].Designation ORDER BY SUM([Choisir].quantite_article) DESC");
    }
    DataTable^ SVC_Gstatistique::flopvendu()
    {
        return this->cad->getRows("SELECT TOP 10 [Choisir].id_article,[Article].Designation,SUM([Choisir].quantite_article) FROM Article,Choisir WHERE [Choisir].id_article = [Article].id_article GROUP BY [Choisir].id_article,[Article].Designation ORDER BY SUM([Choisir].quantite_article) ASC");
    }
    DataTable^ SVC_Gstatistique::clientliste()
    {
        return this->cad->getRows("select id_client concat(nom_c," ",prenom_c) as client");
    }
    float SVC_Gstatistique::valeurcommercialstock(){
        return 0.0f;
    }
    float SVC_Gstatistique::valeurachatstock()
    {
        return 0.0f;
    }
  
}