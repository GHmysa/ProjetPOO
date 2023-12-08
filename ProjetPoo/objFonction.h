#pragma once
#include "Personnel.h"
#include "Client.h"
#include "Adresse.h"
#include "Commande.h"
#include "Article.h"
namespace NS_objFonction
{
	ref class objFonction
	{
	public:
		NS_Adresse::Adresse^ adresse;
		NS_Client::Client^ client;
		NS_Personnel::Personnel^ personnel;
		NS_Article::Article^ article;
		NS_Commande::Commande^ commande;
		System::Boolean^ has2Query;
		System::String^ currentObj;
	public:
		objFonction(void);
		String^ getAttributs();
	};

}


