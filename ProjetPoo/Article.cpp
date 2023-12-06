#include "Article.h"

String^ Article::DonnerAttributsObjet() {
	return "Article";
}

Article::Article(int idArticle, String^ nomArticle, float prixHT, int quantite, int seuilReaprovisionnement, String^ reference, String^ natureProduit, String^ couleurProduit) {
	this->idArticle = idArticle;
	this->nomArticle = nomArticle;
	this->prixHT = prixHT;
	this->quantite = quantite;
	this->seuilReaprovisionnement = seuilReaprovisionnement;
	this->reference = reference;
	this->natureProduit = natureProduit;
	this->couleurProduit = couleurProduit;
}

int Article::getIdArticle() {
	return idArticle;
}

String^ Article::getNomArticle() {
	return nomArticle;
}

float Article::getPrixHT() {
	return prixHT;
}

int Article::getQuantite() {
	return quantite;
}

int Article::getSeuilReaprovisionnement() {
	return seuilReaprovisionnement;
}

String^ Article::getReference() {
	return reference;
}

String^ Article::getNatureProduit() {
	return natureProduit;
}

String^ Article::getCouleurProduit() {
	return couleurProduit;
}

void Article::setIdArticle(int idArticle) {
	this->idArticle = idArticle;
}

void Article::setNomArticle(String^ nomArticle) {
	this->nomArticle = nomArticle;
}

void Article::setPrixHT(float prixHT) {
	this->prixHT = prixHT;
}

void Article::setQuantite(int quantite) {
	this->quantite = quantite;
}

void Article::setSeuilReaprovisionnement(int seuilReaprovisionnement) {
	this->seuilReaprovisionnement = seuilReaprovisionnement;
}

void Article::setReference(String^ reference) {
	this->reference = reference;
}

void Article::setNatureProduit(String^ natureProduit) {
	this->natureProduit = natureProduit;
}

void Article::setCouleurProduit(String^ couleurProduit) {
	this->couleurProduit = couleurProduit;
}

void Article::setPrixTTC(float prixTTC) {
	this->prixTTC = prixTTC;
}

float Article::getPrixTTC() {
	return prixTTC;
}

void Article::setTauxTVA(float tauxTVA) {
	this->tauxTVA = tauxTVA;
}

float Article::getTauxTVA() {
	return tauxTVA;
}

