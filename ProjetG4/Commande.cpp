#include "Commande.h"
namespace Composant {
	Commande::Commande() {
		this->date_emission = System::DateTime::Now;
		this->date_livraison = System::DateTime::Now;
		this->date_reglement_solde = System::DateTime::Now;
		this->id_adresse_facturation = -1;
		this->id_adresse_livraison = -1;
		this->id_client = -1;
		this->id_commande = -1;
		this->ref = "RIEN";
	}
	void Commande::set_id_commande(int a) {
		this->id_commande = a;
	}
	void Commande::set_id_client(int a) {
		this->id_client = a;
	}
	void Commande::set_id_adresse_livraison(int a) {
		this->id_adresse_livraison = a;
	}
	void Commande::set_id_adresse_facturation(int a) {
		this->id_adresse_facturation = a;
	}
	void Commande::set_date_emmision(System::DateTime^ a) {
		this->date_emission = a;
	}
	void Commande::set_date_livraison(System::DateTime^ a) {
		this->date_livraison = a;
	}
	void Commande::set_date_reglement_solde(System::DateTime^ a) {
		this->date_reglement_solde = a;
	}
	void Commande::set_ref(System::String^ a) {
		this->ref = a;
	}
	int Commande::get_id_commande() {
		return this->id_commande;
	}
	int Commande::get_id_client() {
		return this->id_client;
	}
	int Commande::get_id_adresse_livraison() {
		return id_adresse_livraison;
	}
	int Commande::get_adresse_facturation() {
		return id_adresse_facturation;
	}
	System::DateTime^ Commande::get_date_emission() {
		return date_emission;
	}
	System::DateTime^ Commande::get_date_livraison() {
		return date_livraison;
	}
	System::DateTime^ Commande::get_date_reglement_solde() {
		return date_reglement_solde;
	}
	System::String^ Commande::get_ref() {
		return ref;
	}
	System::String^ Commande::SELECT() {
		return "select id_commande,  reference, date_emission,(select concat(nom_c,' ',prenom_c) from client where commande.id_client = client.id_client)as client,(select sum (prix_ht + (tva*prix_ht/100)) from choisir where choisir.id_commande = commande.id_commande) as prix_ttc from commande";
	}
	System::String^ Commande::SELECTbyid() {
		return Commande::SELECT() + " where id_commande = " + this->id_commande;
	}
	System::String^ Commande::UPDATE() {
		return "UPDATE commande " + "SET id_commande= '" + this->get_id_commande() + "', date_emission = '" + date_to_string(this->get_date_emission())
			+ "', reference = " + this->get_ref() + ", date_livraison = " + date_to_string(this->get_date_livraison()) + ", date_reglementsolde = " +
			date_to_string(this->get_date_reglement_solde()) +
			",id_client = " + this->get_id_client() + ",id_adresse_livraison = " + this->get_id_adresse_livraison() + ",id_adresse_facturation = " + this->get_adresse_facturation() + "WHERE(ID_commande = " + this->get_id_commande() + ");";
	}
	System::String^ Commande::DELETE() {
		return "DELETE FROM commande " +
			"WHERE(ID_commande = " + this->get_id_commande() + ");";
	}
	System::String^ Commande::INSERT() {
		return "insert into commande(date_emission,reference,date_livraison,date_reglementsolde,id_client,id_adresse_livraison,id_adresse_facturation)" +
			"values(convert(datetime,'" + (this->get_date_emission()) + "', 103),'" + this->get_ref()+ "convert(datetime,'" + (this->get_date_emission()) + "', 103) " + "," +
			"convert(datetime, '" + (this->get_date_livraison()) + "', 103),'" + "convert(datetime, '" + (this->get_date_reglement_solde()) + "', 103),'" + this->get_id_client() + "," + this->get_id_adresse_livraison() + "," + this->get_adresse_facturation() + ");select @@IDENTITY;";
	}
	System::String^ Commande::date_to_string(System::DateTime^ date) {
		return date->Year + "" + date->Month + "" + date->Day;
	}
}