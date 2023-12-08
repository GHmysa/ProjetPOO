#include "Article.h"

String^ NS_Article::Article::DonnerAttributsObjet() {
	return "Article";
}
NS_Article::Article::Article()
{
	this->couleurProduit = "";
	this->idArticle = 0;
	this->nomArticle = "";
	this->prixHT = 0;
	this->quantite = 0;
	this->seuilReaprovisionnement = 0;
	this->reference = "";
	this->natureProduit = "";
	this->prixTTC = 0;
	this->tauxTVA = 0;

}
NS_Article::Article::Article(int idArticle, String^ nomArticle, float prixHT, int quantite, int seuilReaprovisionnement, String^ reference, String^ natureProduit, String^ couleurProduit) {
	this->idArticle = idArticle;
	this->nomArticle = nomArticle;
	this->prixHT = prixHT;
	this->quantite = quantite;
	this->seuilReaprovisionnement = seuilReaprovisionnement;
	this->reference = reference;
	this->natureProduit = natureProduit;
	this->couleurProduit = couleurProduit;
}

int NS_Article::Article::getIdArticle() {
	return idArticle;
}

String^ NS_Article::Article::getNomArticle() {
	return nomArticle;
}

float NS_Article::Article::getPrixHT() {
	return prixHT;
}

int NS_Article::Article::getQuantite() {
	return quantite;
}

int NS_Article::Article::getSeuilReaprovisionnement() {
	return seuilReaprovisionnement;
}

String^ NS_Article::Article::getReference() {
	return reference;
}

String^ NS_Article::Article::getNatureProduit() {
	return natureProduit;
}

String^ NS_Article::Article::getCouleurProduit() {
	return couleurProduit;
}

void NS_Article::Article::setIdArticle(int idArticle) {
	this->idArticle = idArticle;
}

void NS_Article::Article::setNomArticle(String^ nomArticle) {
	this->nomArticle = nomArticle;
}

void NS_Article::Article::setPrixHT(float prixHT) {
	this->prixHT = prixHT;
}

void NS_Article::Article::setQuantite(int quantite) {
	this->quantite = quantite;
}

void NS_Article::Article::setSeuilReaprovisionnement(int seuilReaprovisionnement) {
	this->seuilReaprovisionnement = seuilReaprovisionnement;
}

void NS_Article::Article::setReference(String^ reference) {
	this->reference = reference;
}

void NS_Article::Article::setNatureProduit(String^ natureProduit) {
	this->natureProduit = natureProduit;
}

void NS_Article::Article::setCouleurProduit(String^ couleurProduit) {
	this->couleurProduit = couleurProduit;
}

void NS_Article::Article::setPrixTTC(float prixTTC) {
	this->prixTTC = prixTTC;
}

float NS_Article::Article::getPrixTTC() {
	return prixTTC;
}

void NS_Article::Article::setTauxTVA(float tauxTVA) {
	this->tauxTVA = tauxTVA;
}

float NS_Article::Article::getTauxTVA() {
	return tauxTVA;
}

