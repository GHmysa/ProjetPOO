#include "Client.h"

using namespace System;
NS_Client::Client::Client(System::Int32 idClient, String^ nom, String^ prenom, String^ dateNaissance) {

	this->idClient = idClient;
	this->nom = nom;
	this->prenom = prenom;
	this->dateNaissance = dateNaissance;
}

NS_Client::Client::Client() {

}

int NS_Client::Client::getIdClient() {
	return this->idClient;
}

String^ NS_Client::Client::getNom() {
	return this->nom;
}

String^ NS_Client::Client::getPrenom() {
	return this->prenom;
}


String^ NS_Client::Client::getDateNaissance() {
	return this->dateNaissance;
}

void NS_Client::Client::setIdClient(System::Int32 idClient) {
	this->idClient = idClient;
}

void NS_Client::Client::setNom(String^ nom) {
	this->nom = nom;
}

void NS_Client::Client::setPrenom(String^ prenom) {
	this->prenom = prenom;
}


void NS_Client::Client::setDateNaissance(String^ dateNaissance) {
	this->dateNaissance = dateNaissance;
}
