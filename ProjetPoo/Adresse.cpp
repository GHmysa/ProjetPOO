#include "Adresse.h"
#include <string>
#include "Personne.h"

using namespace std;
using namespace System;

NS_Adresse::Adresse::Adresse()
{
	this->codePostal = "";
	this->idAdresse = 0;
	this->pays = "";
	this->ville = "";
	this->Address = "";
}

void NS_Adresse::Adresse::setCodePostal(String^ codePostal)
{
	this->codePostal = codePostal;
}
void NS_Adresse::Adresse::setIdAdresse(System::Int32^ idAdresse)
{
	this->idAdresse = idAdresse;
}
void NS_Adresse::Adresse::setPays(String^ pays)
{
	this->pays = pays;
}
void NS_Adresse::Adresse::setVille(String^ ville)
{
	this->ville = ville;
}
void NS_Adresse::Adresse::setAdresse(String^ addresse)
{
	this->Address = addresse;
}

String^ NS_Adresse::Adresse::getCodePostal()
{
	return this->codePostal;
}
System::Int32^ NS_Adresse::Adresse::getIdAdresse()
{
	return this->idAdresse;
}
String^ NS_Adresse::Adresse::getPays()
{
	return this->pays;
}
String^ NS_Adresse::Adresse::getVille()
{
	return this->ville;
}
String^ NS_Adresse::Adresse::getAdresse()
{
	return this->Address;
}