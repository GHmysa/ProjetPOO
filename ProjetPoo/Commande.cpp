#include "Commande.h"

NS_Commande::Commande::Commande()
{
	this->referenceCommande = "";
	this->dateEmission = "";
	this->dateLivraisonPrev = "";
	this->moyenPaiement = "";
	this->idCommande = 0;
	this->idFacture = 0;
	this->nomSociete = "Nom Societe";
	this->numClient = 0;
}
NS_Commande::Commande::Commande(System::Int32^ idCommande, System::Int32^ idFacture, String^ referenceCommande, String^ dateEmission, String^ dateLivraisonPrev, String^ moyenPaiement) {
	this->referenceCommande = referenceCommande;
	this->dateEmission = dateEmission;
	this->dateLivraisonPrev = dateLivraisonPrev;
	this->moyenPaiement = moyenPaiement;
	this->idCommande = idCommande;
	this->idFacture = idFacture;
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

System::Int32^ NS_Commande::Commande::getIdFacture()
{
	return this->idFacture;
}
System::Int32^ NS_Commande::Commande::getNumClient()
{
	return this->numClient;
}
System::String^ NS_Commande::Commande::getNomSociete()
{
	return this->nomSociete;
}

String^ NS_Commande::Commande::getMoyenPaiement() {
	return this->moyenPaiement;
}

String^ NS_Commande::Commande::getDatePaiement() {
return this->datePaiement;

}
String^ NS_Commande::Commande::getDateReglement(){
	return this->dateReglement;
}
Int32^ NS_Commande::Commande::getTotalItems(){
	return this->totalItems;
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

void NS_Commande::Commande::setDateReglement(String^ dateReglement) {
	this->dateReglement = dateReglement;
}

void NS_Commande::Commande::setDatePaiement(String^ datePaiement) {
	this->datePaiement = datePaiement;
}

void NS_Commande::Commande::setTotalItems(Int32^ totalItems) {
	this->totalItems = totalItems;
}
void NS_Commande::Commande::setNumClient(Int32^ numClient)
{
	this->numClient = numClient;
}
void NS_Commande::Commande::setNomSociete(String^ nomSociete)
{
	this->nomSociete = nomSociete;
}
void NS_Commande::Commande::setIdFacture(Int32^ idFacture)
{
	this->idFacture = idFacture;
}


