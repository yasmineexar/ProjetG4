#include "SVC_Gcommande.h"
namespace Service {
	DataTable^ SVC_Gcommande::get_listearticle()
	{
		return this->cad->getRows(this->article->SELECT());
	}
	void SVC_Gcommande::set_idclient(int id)
	{
		this->client->set_id(id);
	}
	DataTable^ SVC_Gcommande::get_adressesclient()
	{
		return this->cad->getRows("SELECT id_adresse, concat(adresse,' ,',(SELECT nom_ville from ville where ville.id_ville = adresse.id_ville)) as adresse from adresse where id_client = " + this->client->get_id());
	}
	DataTable^ SVC_Gcommande::listeclient()
	{
		return this->cad->getRows("SELECT id_client as ID ,concat(nom_c,' ',prenom_c) as Client from client");
	}
	SVC_Gcommande::SVC_Gcommande()
	{
		this->cad = gcnew Composant::CAD();
		this->article = gcnew Composant::Article();
		this->client = gcnew Composant::Client();
		this->commande = gcnew Composant::Commande();
		this->adresse = gcnew List<Composant::Adresse^>();
		this->ville = gcnew List<Composant::Ville^>();
	}
	DataTable^ SVC_Gcommande::listecommande()
	{
		this->ds = gcnew DataTable();
		this->ds = this->cad->getRows(this->commande->SELECT());
		return this->ds;
	}
	void SVC_Gcommande::set_addr(DataTable^ addr)
	{
		Composant::Adresse^ a = gcnew Composant::Adresse();
		a->setIdClient(this->client->get_id());
		addr = this->cad->getRows(a->SELECTbyidclient());
		Composant::Ville^ v = gcnew Composant::Ville();
		for (int i = 0; i < addr->Rows->Count; i++) {
			a->setIdAdresse(Convert::ToInt32(addr->Rows[i]->ItemArray[0]));
			a->setAdresse(Convert::ToString(addr->Rows[i]->ItemArray[1]));
			a->setIdVille(Convert::ToInt32(addr->Rows[i]->ItemArray[2]));
			this->adresse->Add(a);
			v->setIdVille(a->getIdVille());
			v->setNomVille(Convert::ToString(this->cad->getRows(v->SELECTbyid())->Rows[0]->ItemArray[1]));
			this->ville->Add(v);
			v = gcnew Composant::Ville();
			a = gcnew Composant::Adresse();
		}
	}
	void SVC_Gcommande::afficher(int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::ajouter(DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::modifier(int, DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::supprimer(int)
	{
		throw gcnew System::NotImplementedException();
	}
}