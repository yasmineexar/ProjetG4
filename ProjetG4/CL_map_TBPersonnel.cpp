#include "CL_map_TBPersonnel.h"

namespace NS_Composants
{
	CL_map_TBPERSONNEL::CL_map_TBPERSONNEL(void)
	{
		this->ID_Personnel = -1;
		this->Nom_P = "RIEN";
		this->Prenom_P = "RIEN";
		this->DATE_D_embauche = "RIEN";
	}
	String^ CL_map_TBPERSONNEL::SELECT(void)
	{
		return "SELECT ID_Personne, Nom_P, Prenom_P, DATE_D_embauche" +
			"FROM Personnel;";
	}
	String^ CL_map_TBPERSONNEL::INSERT(void)
	{
		return "INSERT INTO Personnel " +
			"(Nom_P, Prenom_P, DATE_D_embauche) " +
			"VALUES('" + this->getNom_P() + "', '" + this->getPrenom_P() + "', '" + this->getDateDembauche() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNEL::UPDATE(void)
	{
		return "UPDATE Personnel " +
			"SET Nom_P = '" + this->getNom_P() + "', Prenom_P = '" + this->getPrenom_P() + "' , DATE_D_embauche='" + this->getDateDembauche() + "'" +
			"WHERE(ID_Personnel = " + this->getID_Personnel() + ");";
	}
	String^ CL_map_TBPERSONNEL::DELETE(void)
	{
		return "DELETE FROM Personnel " +
			"WHERE(ID_Personnel = " + this->getID_Personnel() + ");";
	}
	void CL_map_TBPERSONNEL::setID_Personnel(int ID_Personnel)
	{
		if (ID_Personnel > 0)
		{
			this->ID_Personnel = ID_Personnel;
		}
	}
	void CL_map_TBPERSONNEL::setPrenom_P(String^ Prenom_P)
	{
		if (Prenom_P != "")
		{
			this->Prenom_P = Prenom_P;
		}
	}
	void CL_map_TBPERSONNEL::setNom_P(String^ Nom_P)
	{
		if (Nom_P != "")
		{
			this->Nom_P = Nom_P;
		}
	}
	int CL_map_TBPERSONNEL::getID_Personnel(void)
	{
		return this->ID_Personnel;
	}
	String^ CL_map_TBPERSONNEL::getNom_P(void)
	{
		return this->Nom_P;
	}
	String^ CL_map_TBPERSONNEL::getPrenom_P(void)
	{
		return this->Prenom_P;
	}
	String^ CL_map_TBPERSONNEL::getDateDembauche(void)
	{
		return this->DATE_D_embauche;
	}
	void CL_map_TBPERSONNEL::setDateDembauche(String^ DATE_D_embauche)
	{
		this->DATE_D_embauche = DATE_D_embauche;
	}
}
