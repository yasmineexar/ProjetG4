
#pragma once
using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBPERSONNEL
	{
	private:
		int ID_Personnel;
		String^ Nom_P;
		String^ Prenom_P;
		String^ DATE_D_embauche;
	public:
		CL_map_TBPERSONNEL(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID_Personnel(int);
		void setPrenom_P(String^);
		void setNom_P(String^);
		void setDateDembauche(String^);
		int getID_Personnel(void);
		String^ getNom_P(void);
		String^ getPrenom_P(void);
		String^ getDateDembauche(void);
	};
}