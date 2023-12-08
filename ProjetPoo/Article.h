#pragma once
using namespace System;
namespace NS_Article
{
	ref class Article
	{
	private:
		int idArticle;
		String^ nomArticle;
		float prixHT;
		float prixTTC;
		float tauxTVA;
		int quantite;
		int seuilReaprovisionnement;
		String^ reference;
		String^ natureProduit;
		String^ couleurProduit;

	public:

		virtual String^ DonnerAttributsObjet();
		Article();
		Article(int idArticle, String^ nomArticle, float prixHT, int quantite, int seuilReaprovisionnement, String^ reference, String^ natureProduit, String^ couleurProduit);
		int getIdArticle();
		String^ getNomArticle();
		float getPrixHT();
		int getQuantite();
		int getSeuilReaprovisionnement();
		String^ getReference();
		String^ getNatureProduit();
		String^ getCouleurProduit();
		float getPrixTTC();
		float getTauxTVA();

		void setIdArticle(int idArticle);
		void setNomArticle(String^ nomArticle);
		void setPrixHT(float prixHT);
		void setQuantite(int quantite);
		void setSeuilReaprovisionnement(int seuilReaprovisionnement);
		void setReference(String^ reference);
		void setNatureProduit(String^ natureProduit);
		void setCouleurProduit(String^ couleurProduit);
		void setPrixTTC(float prixTTC);
		void setTauxTVA(float tauxTVA);

	};
}


