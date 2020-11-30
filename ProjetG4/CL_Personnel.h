#pragma once
#include "CL_CAD.h"
#include "CL_map_TBPersonnel.h"
#include"Pch.h"
namespace NS_Svc
{
	ref class CL_Personnel
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBPERSONNEL^ personnel;
		DataSet^ ds;
	public:
		CL_Personnel(void);
		DataSet^ listePersonnel(String^);
		int ajouter(String^, String^, String^);
		void modifier(int, String^, String^, String^);
		void supprimer(int);
	};
}