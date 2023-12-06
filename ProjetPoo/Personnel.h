#pragma once
#include "Personne.h"
using namespace System;

ref class Personnel : public Personne
{
private:
	int idPersonnel;
	String^ dateEmbauche;
	Personnel^ superieur;

public:
	Personnel();
	void setIdPersonnel(int);
	void setDateEmbauche(String^);

	int getIdPersonnel();
	String^ getDateEmbauche();
	Personnel^ getSuperieur();
	void setSuperieur(Personnel^);

};

