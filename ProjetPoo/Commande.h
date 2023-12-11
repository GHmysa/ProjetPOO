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
		String^ moyenPaiement; // pas dans la BDD
		String^ datePaiement;
		String^ dateReglement;
		Int32^ totalItems;


	public:
		Commande();
		Commande(String^ referenceCommande, String^ dateEmission, String^ dateLivraisonPrev, String^ moyenPaiement);

		String^ getReferenceCommande();
		String^ getDateEmission();
		String^ getDateLivraisonPrev();
		String^ getMoyenPaiement();
		String^ getDatePaiement();
		String^ getDateReglement();
		Int32^ getTotalItems();


		void setReferenceCommande(String^ referenceCommande);
		void setDateEmission(String^ dateEmission);
		void setDateLivraisonPrev(String^ dateLivraisonPrev);
		void setMoyenPaiement(String^ moyenPaiement);
		void setDatePaiement(String^ datePaiement);
		void setDateReglement(String^ dateReglement);
		void setTotalItems(Int32^ totalItems);



	};
}


