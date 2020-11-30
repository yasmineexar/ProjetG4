#include "CL_Personnel.h"

namespace NS_Svc
{
	CL_Personnel::CL_Personnel(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personnel = gcnew NS_Composants::CL_map_TBPERSONNEL();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ CL_Personnel::listePersonnes(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);
		return this->ds;
	}
	int CL_Personnel::ajouter(String^ nom, String^ prenom)
	{
		int id_personne;
		this->personnel->setNom_P(nom);
		this->personnel->setPrenom_P(prenom);
		id_personne = this->cad->actionRowsID(this->personnel->INSERT());
		return id_personne;
	}
	void CL_Personnel::modifier(int id_personne, String^ nom, String^ prenom)
	{
		this->personnel->setID_Personnel(id_personne);
		this->personnel->setNom_P(nom);
		this->personnel->setPrenom_P(prenom);
		this->cad->actionRows(this->personnel->UPDATE());
	}
	void CL_Personnel::supprimer(int id_personne)
	{
		this->personnel->setID_Personnel(id_personne);
		this->cad->actionRows(this->personnel->DELETE());
	}
}