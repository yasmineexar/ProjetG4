#pragma once

//Classe d'acc�es aux donn�es
namespace Composant
{
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class CAD
	{
	private:
		String^ cnx; //chaine de caract�re pour la connexion avec la base de donn�es
		String^ rq_sql; //string qui va contenir la requete SQL 
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA; //remplir le DataSet et mettre � jour la base de donn�es 
		DataTable^ DS; //prend en charge la cr�ation et la gestion des donn�es 
		void setSQL(String^); //modifier la valeur de la requete SQL
	public:
		CAD(void); //contructeur par d�faut
		int actionRowsID(String^);
		void actionRows(String^);
		DataTable^ getRows(String^);
		~CAD(void); //destructeur
	};
}




