#include "Personnel.h"

Personnel::Personnel()
{

}

void Personnel::setIdPersonnel(int) {
	this->idPersonnel = idPersonnel;
}

void Personnel::setDateEmbauche(String^) {
	this->dateEmbauche = dateEmbauche;
}

int Personnel::getIdPersonnel() {
	return this->idPersonnel;
}

String^ Personnel::getDateEmbauche() {
	return this->dateEmbauche;
}

Personnel^ Personnel::getSuperieur() {
	return this->superieur;
}

void Personnel::setSuperieur(Personnel^ superieur) {
	this->superieur = superieur;
}

