#pragma once
#include"CAD.h"
#include"Article.h"
namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gstock
	{
	private:
		Composant::CAD^ cad;
		Composant::Article^ article;
		DataTable^ dt;
	public:
		SVC_Gstock();
		Composant::Article^ get_article();
		DataTable^ listestock();
		void afficher(int);
		void ajouter(String^,String^ ,float, float, int, int, String^);
		void modifier(int, String^, String^, float, float, int, int, String^);
		void supprimer(int);
	};
}
