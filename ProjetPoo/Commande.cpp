#include "Commande.h"

NS_Commande::Commande::Commande()
{
	this->referenceCommande = "";
	this->dateEmission = "";
	this->dateLivraisonPrev = "";
	this->moyenPaiement = "";
}
NS_Commande::Commande::Commande(String^ referenceCommande, String^ dateEmission, String^ dateLivraisonPrev, String^ moyenPaiement) {
	this->referenceCommande = referenceCommande;
	this->dateEmission = dateEmission;
	this->dateLivraisonPrev = dateLivraisonPrev;
	this->moyenPaiement = moyenPaiement;
}

String^ NS_Commande::Commande::getReferenceCommande() {
	return this->referenceCommande;
}

String^ NS_Commande::Commande::getDateEmission() {
	return this->dateEmission;
}

String^ NS_Commande::Commande::getDateLivraisonPrev() {
	return this->dateLivraisonPrev;
}



String^ NS_Commande::Commande::getMoyenPaiement() {
	return this->moyenPaiement;
}

void NS_Commande::Commande::setReferenceCommande(String^ referenceCommande) {
	this->referenceCommande = referenceCommande;
}

void NS_Commande::Commande::setDateEmission(String^ dateEmission) {
	this->dateEmission = dateEmission;
}

void NS_Commande::Commande::setDateLivraisonPrev(String^ dateLivraisonPrev) {
	this->dateLivraisonPrev = dateLivraisonPrev;
}


void NS_Commande::Commande::setMoyenPaiement(String^ moyenPaiement) {
	this->moyenPaiement = moyenPaiement;
}

//double Commande::calculerMontantCommande() {
//	double montant = 0;
//	for each (Article^ produit in this->articles)
//	{
//		montant += produit->getPrixTTC();
//	}
//	return montant;
//}

