#include "objFonction.h"

NS_objFonction::objFonction::objFonction(void)
{
	this->adresse = gcnew NS_Adresse::Adresse();
	this->article = gcnew NS_Article::Article();
	this->client = gcnew NS_Client::Client();
	this->commande = gcnew NS_Commande::Commande();
	this->personnel = gcnew NS_Personnel::Personnel();
	this->has2Query = false;
}
String^ NS_objFonction::objFonction::getAttributs()
{
	if (this->currentObj == "Adresse")
	{
		return "'"+this->adresse->getAdresse() + "'," + Convert::ToString(this->adresse->getCodePostal()) + ",'" + this->adresse->getVille() + "','" + this->adresse->getPays()+"'";
	}
	if (this->currentObj == "Personnel")
	{
		return "'" + this->personnel->getPrenom() + "', '" + this->personnel->getNom()+ "', " + this->personnel->getDateEmbauche() +"," + this->personnel->getSuperieur() + ", " + Convert::ToString(this->personnel->getAdresse()->getIdAdresse());
	}
}