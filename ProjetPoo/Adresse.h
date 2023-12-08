#pragma once
#include <iostream>
#include <string>
using namespace std;
using namespace System;

namespace NS_Adresse {

	ref class Adresse
	{
	private:

		System::Int32^ idAdresse;
		String^ Address;
		String^ codePostal;
		String^ ville;
		String^ pays;

	public:
		Adresse();
		void setIdAdresse(System::Int32^);
		void setCodePostal(String^);
		void setVille(String^);
		void setPays(String^);
		void setAdresse(String^);
		System::Int32^ getIdAdresse();
		String^ getCodePostal();
		String^ getAdresse();
		String^ getVille();
		String^ getPays();
	};
}

