#pragma once
#include "CL_CAD.h"
#include "CL_map_TBPersonnel.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
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
		DataSet^ listePersonnes(String^);
		int ajouter(String^, String^);
		void modifier(int, String^, String^);
		void supprimer(int);
	};
}