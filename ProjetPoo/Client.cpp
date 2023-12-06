#include "Client.h"

using namespace System;
Client::Client(int idClient, String^ nom, String^ prenom, String^ dateNaissance) {

	this->idClient = idClient;
	this->nom = nom;
	this->prenom = prenom;
	this->dateNaissance = dateNaissance;
}

Client::Client() {

}

int Client::getIdClient() {
	return this->idClient;
}

String^ Client::getNom() {
	return this->nom;
}

String^ Client::getPrenom() {
	return this->prenom;
}


String^ Client::getDateNaissance() {
	return this->dateNaissance;
}

void Client::setIdClient(int idClient) {
	this->idClient = idClient;
}

void Client::setNom(String^ nom) {
	this->nom = nom;
}

void Client::setPrenom(String^ prenom) {
	this->prenom = prenom;
}


void Client::setDateNaissance(String^ dateNaissance) {
	this->dateNaissance = dateNaissance;
}
