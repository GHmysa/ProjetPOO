#pragma once
#include "Personne.h"
#include "Adresse.h"
using namespace System;

namespace NS_Personnel {
	ref class Personnel : public Personne
	{
	private:
		int idPersonnel;
		String^ dateEmbauche;
		String^ superieur;
		NS_Adresse::Adresse^  address;

	public:
		Personnel();
		void setIdPersonnel(int);
		void setDateEmbauche(String^);

		int getIdPersonnel();
		String^ getDateEmbauche();
		String^ getSuperieur();
		NS_Adresse::Adresse^ getAdresse();
		void setAdresse(NS_Adresse::Adresse^ adresse);
		void setSuperieur(String^);

	};
}


