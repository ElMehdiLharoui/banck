#include "pch.h"
#include "client.h"


client::client(string nom, string adress, string prenom)
{
	this->nom = nom;

	this->prenom = prenom;
	this->adresse = adress;

}

void client::afficher() const
{
	cout << this->nom << ' ' << this->prenom << ' ' << this->adresse << endl;
}
