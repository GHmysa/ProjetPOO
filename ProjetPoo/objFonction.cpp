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
		return "'" + this->personnel->getPrenom() + "', '" + this->personnel->getNom()+ "',' " + this->personnel->getDateEmbauche() +"'," + this->personnel->getSuperieur() + ", " + Convert::ToString(this->personnel->getAdresse()->getIdAdresse());
	}
	if (this->currentObj == "Client")
	{
		return "'" + this->client->getPrenom()+"','"+this->client->getNom()+"','"+this->client->getDateNaissance()+"'";
	}
	if (this->currentObj == "Have")
	{
		return Convert::ToString(this->adresse->getIdAdresse()) + "," + Convert::ToString(this->client->getIdClient());
	}
	if (this->currentObj == "Commande")
	{
		return "'" + this->commande->getDateReglement() + "', '" + this->commande->getDateEmission() + "', '" + this->commande->getDatePaiement() + "'," + this->commande->getTotalItems() + "," + this->commande->getReferenceCommande() + ",'" + this->commande->getDateLivraisonPrev() + "'," + this->commande->getIdFacture() +"," + this->client->getIdClient();
	}
	if (this->currentObj == "Facture")
	{
		return "'" + this->commande->getNomSociete() + "'," + this->commande->getNumClient();
	}
	if (this->currentObj == "Article") 
	{
		return "'" + this->article->getCouleurProduit()+"','"+this->article->getNatureProduit()+"','"+this->article->getNomArticle()+"',"+this->article->getQuantite()+","+this->article->getReference()+","+this->article->getSeuilReaprovisionnement()+","+this->article->getIdPayement();
	}
	if (this->currentObj == "Payment")
	{
		return this->article->getPrixHT() + "," + this->article->getTauxTVA() + "," + this->article->getPrixTTC();
	}
	if (this->currentObj == "Adds")
	{
		return this->article->getIdArticle() +","+ this->commande->getIdCommande()+","+ this->article->getQuantiteAdds();
	}
}