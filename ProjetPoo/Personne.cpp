#include "Personne.h"
Personne::Personne(System::String^, System::String^)
{
	this->nom = nom;
	this->prenom = prenom;
}

Personne::Personne()
{
	this->nom = "";
	this->prenom = "";
}

System::String^ Personne::getNom()
{
	return this->nom;
}

System::String^ Personne::getPrenom()
{
	return this->prenom;
}

void Personne::setNom(System::String^ nom)
{
	this->nom = nom;
}

void Personne::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
