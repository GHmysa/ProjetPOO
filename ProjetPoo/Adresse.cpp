#include "Adresse.h"
#include <string>
#include "Personne.h"

using namespace std;
using namespace System;


Adresse::Adresse(int codePostal, int idAdresse, String^ pays, String^ ville)
{
	this->codePostal = codePostal;
	this->idAdresse = idAdresse;
	this->pays = pays;
	this->ville = ville;

}

Adresse::Adresse()
{
	this->codePostal = 0;
	this->idAdresse = 0;
	this->pays = "";
	this->ville = "";
}

void Adresse::setCodePostal(int codePostal)
{
	this->codePostal = codePostal;
}
void Adresse::setIdAdresse(int idAdresse)
{
	this->idAdresse = idAdresse;
}
void Adresse::setPays(String^ pays)
{
	this->pays = pays;
}
void Adresse::setVille(String^ ville)
{
	this->ville = ville;
}

int Adresse::getCodePostal()
{
	return this->codePostal;
}
int Adresse::getIdAdresse()
{
	return this->idAdresse;
}
String^ Adresse::getPays()
{
	return this->pays;
}
String^ Adresse::getVille()
{
	return this->ville;
}
