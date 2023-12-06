#pragma once
#include <iostream>
#include <string>
using namespace std;
using namespace System;


ref class Adresse
{
private:

	int idAdresse;
	int codePostal;
	String^ ville;
	String^ pays;

public:
	Adresse();
	Adresse(int, int, String^, String^);
	void setIdAdresse(int);
	void setCodePostal(int);
	void setVille(String^);
	void setPays(String^);

	int getIdAdresse();
	int getCodePostal();
	String^ getVille();
	String^ getPays();


};

