#pragma once
using namespace System;
namespace NS_Article
{
	ref class Article
	{
	private:
		System::Int32^ idArticle;
		System::Int32^ idPayement;
		String^ nomArticle;
		float prixHT;
		float prixTTC;
		float tauxTVA;
		System::Int32^ quantite;
		System::Int32^ seuilReaprovisionnement;
		String^ reference;
		String^ natureProduit;
		String^ couleurProduit;

	public:

		virtual String^ DonnerAttributsObjet();
		Article();
		Article(System::Int32^ idPayement,System::Int32^ idArticle, String^ nomArticle, float prixHT, System::Int32^ quantite, System::Int32^ seuilReaprovisionnement, String^ reference, String^ natureProduit, String^ couleurProduit);
		System::Int32^ getIdArticle();
		String^ getNomArticle();
		float getPrixHT();
		System::Int32^ getQuantite();
		System::Int32^ getSeuilReaprovisionnement();
		String^ getReference();
		String^ getNatureProduit();
		String^ getCouleurProduit();
		System::Int32^ getIdPayement();
		float getPrixTTC();
		float getTauxTVA();

		void setIdArticle(System::Int32^ idArticle);
		void setNomArticle(String^ nomArticle);
		void setPrixHT(float prixHT);
		void setQuantite(System::Int32^ quantite);
		void setSeuilReaprovisionnement(System::Int32^ seuilReaprovisionnement);
		void setReference(String^ reference);
		void setNatureProduit(String^ natureProduit);
		void setCouleurProduit(String^ couleurProduit);
		void setPrixTTC(float prixTTC);
		void setTauxTVA(float tauxTVA);
		void setIdPayement(System::Int32^);

	};
}


