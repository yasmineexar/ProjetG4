#pragma once
#include"CAD.h"
namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gstatistique
	{
	private:
		Composant::CAD^ cad; //objet pour la connexion a notre base de données 
	public:
		SVC_Gstatistique();
		float calculpaniermoyen();
		float calculchiffreaffaire(DateTime^,DateTime^);
		DataTable^ produitssousseuilreap();
		float calcultotalachatclient(int);
		DataTable^ topvendu();
		DataTable^ flopvendu();
		float valeurcommercialstock();
		float valeurachatstock();
		DataTable^ clientliste();
	};

}
