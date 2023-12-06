#include "Commande.h"

Commande::Commande(String^ referenceCommande, String^ dateEmission, String^ dateLivraisonPrev, String^ moyenPaiement) {
	this->referenceCommande = referenceCommande;
	this->dateEmission = dateEmission;
	this->dateLivraisonPrev = dateLivraisonPrev;
	
	this->moyenPaiement = moyenPaiement;
}

String^ Commande::getReferenceCommande() {
	return this->referenceCommande;
}

String^ Commande::getDateEmission() {
	return this->dateEmission;
}

String^ Commande::getDateLivraisonPrev() {
	return this->dateLivraisonPrev;
}



String^ Commande::getMoyenPaiement() {
	return this->moyenPaiement;
}

void Commande::setReferenceCommande(String^ referenceCommande) {
	this->referenceCommande = referenceCommande;
}

void Commande::setDateEmission(String^ dateEmission) {
	this->dateEmission = dateEmission;
}

void Commande::setDateLivraisonPrev(String^ dateLivraisonPrev) {
	this->dateLivraisonPrev = dateLivraisonPrev;
}


void Commande::setMoyenPaiement(String^ moyenPaiement) {
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

