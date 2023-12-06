#pragma once
#include <string>
using namespace std;
using namespace System;
using namespace System::IO;

ref class Personne
{
protected:
	System::String^ nom;
	System::String^ prenom;


public:
	Personne();
	Personne(System::String^, System::String^);
	System::String^ getNom();
	System::String^ getPrenom();
	void setNom(System::String^);
	void setPrenom(System::String^);
};


