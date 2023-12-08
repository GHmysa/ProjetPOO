#pragma once
using namespace System;
namespace NS_Commande
{
	ref class Commande
	{
	private:

		String^ referenceCommande;
		String^ dateEmission;
		String^ dateLivraisonPrev;
		String^ moyenPaiement;

	public:
		Commande();
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
}


