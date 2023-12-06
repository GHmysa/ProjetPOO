#pragma once
#include <iostream>
#include "Personne.h"
#include <cliext/list>

using namespace cliext;
using namespace System;
using namespace std;

ref class Client : public Personne
{
#pragma once
private:
	int idClient;
	String^ dateNaissance;

public:
	Client(int idClient, String^ nom, String^ prenom, String^ dateNaissance);
	Client();
	int getIdClient();
	String^ getNom();
	String^ getPrenom();
	String^ getDateNaissance();
	void setIdClient(int idClient);
	void setNom(String^ nom);
	void setPrenom(String^ prenom);
	void setDateNaissance(String^ dateNaissance);

};

