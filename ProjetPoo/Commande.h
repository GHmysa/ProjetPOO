#pragma once
using namespace System;
namespace NS_Commande
{
	ref class Commande
	{
	private:

		System::Int32^ idCommande;
		System::Int32^ idFacture;
		String^ referenceCommande;
		String^ nomSociete;
		Int32^ numClient;
		String^ dateEmission;
		String^ dateLivraisonPrev;
		String^ moyenPaiement; // pas dans la BDD
		String^ datePaiement;
		String^ dateReglement;
		Int32^ totalItems;


	public:
		Commande();
		Commande(System::Int32^ idCommande, System::Int32^ idFacture,String^ referenceCommande, String^ dateEmission, String^ dateLivraisonPrev, String^ moyenPaiement);

		String^ getReferenceCommande();
		String^ getDateEmission();
		String^ getDateLivraisonPrev();
		String^ getMoyenPaiement();
		String^ getDatePaiement();
		String^ getDateReglement();
		Int32^ getTotalItems();
		Int32^ getIdFacture();
		Int32^ getIdCommande();
		Int32^ getNumClient();
		String^ getNomSociete();

		void setReferenceCommande(String^ referenceCommande);
		void setDateEmission(String^ dateEmission);
		void setDateLivraisonPrev(String^ dateLivraisonPrev);
		void setMoyenPaiement(String^ moyenPaiement);
		void setDatePaiement(String^ datePaiement);
		void setDateReglement(String^ dateReglement);
		void setTotalItems(Int32^ totalItems);
		void setNomSociete(String^ nomSociete);
		void setNumClient(Int32^ numClient);
		void setIdFacture(Int32^ idFacture);
		void setIdCommande(Int32^ idFacture);



	};
}


