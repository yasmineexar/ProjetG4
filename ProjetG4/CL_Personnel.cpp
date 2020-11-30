#include "CL_Personnel.h"


namespace NS_Svc
{
	CL_Personnel::CL_Personnel(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personnel = gcnew NS_Composants::CL_map_TBPERSONNEL();
		this->ds = gcnew DataSet();
	}
	DataSet^ CL_Personnel::listePersonnel(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);
		return this->ds;
	}
	int CL_Personnel::ajouter(String^ Nom_P, String^ Prenom_P, String^ DateDembauche)
	{
		int id_personne;
		this->personnel->setNom_P(Nom_P);
		this->personnel->setPrenom_P(Prenom_P);
		this->personnel->setDateDembauche(DateDembauche);
		id_personne = this->cad->actionRowsID(this->personnel->INSERT());
		return id_personne;
	}
	void CL_Personnel::modifier(int id_personne, String^ Nom_P, String^ Prenom_P, String^ DateDembauche)
	{
		this->personnel->setID_Personnel(id_personne);
		this->personnel->setNom_P(Nom_P);
		this->personnel->setPrenom_P(Prenom_P);
		this->personnel->setDateDembauche(DateDembauche);
		this->cad->actionRows(this->personnel->UPDATE());
	}
	void CL_Personnel::supprimer(int id_personne)
	{
		this->personnel->setID_Personnel(id_personne);
		this->cad->actionRows(this->personnel->DELETE());
	}
}