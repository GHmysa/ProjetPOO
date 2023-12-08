#include "Personnel.h"

NS_Personnel::Personnel::Personnel()
{
	this->prenom = "";
	this->nom = "";
	this->dateEmbauche = "";
	this->superieur = "";
	this->idPersonnel = 0;
	this->address = gcnew NS_Adresse::Adresse();
}

void NS_Personnel::Personnel::setIdPersonnel(int idPersonnel) {
	this->idPersonnel = idPersonnel;
}

void NS_Personnel::Personnel::setDateEmbauche(String^ dateEmbauche) {
	this->dateEmbauche = dateEmbauche;
}

int NS_Personnel::Personnel::getIdPersonnel() {
	return this->idPersonnel;
}

String^ NS_Personnel::Personnel::getDateEmbauche() {
	return this->dateEmbauche;
}

String^ NS_Personnel::Personnel::getSuperieur() {
	return this->superieur;
}

void NS_Personnel::Personnel::setSuperieur(String^ superieur) {
	this->superieur = superieur;
}
void NS_Personnel::Personnel::setAdresse(NS_Adresse::Adresse^ addresse)
{
	this->address = addresse;
}
NS_Adresse::Adresse^ NS_Personnel::Personnel::getAdresse()
{
	return this->address;
}