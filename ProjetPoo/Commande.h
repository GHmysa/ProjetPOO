#pragma once
#include "pch.h"
#include <iostream>

#include <cliext/list>
using namespace cliext;

using namespace std;
ref class Commande
{
private:

	String^ referenceCommande;
	String^ dateEmission;
	String^ dateLivraisonPrev;
	String^ moyenPaiement;

public:

	Commande(String^ referenceCommande, String^ dateEmission, String^ dateLivraisonPrev, String^ moyenPaiement);

	String^ getReferenceCommande();
	String^ getDateEmission();
	String^ getDateLivraisonPrev();
	String^ getMoyenPaiement();
	void setReferenceCommande(String^ referenceCommande);
	void setDateEmission(String^ dateEmission);
	void setDateLivraisonPrev(String^ dateLivraisonPrev);
	void setMoyenPaiement(String^ moyenPaiement);




};

