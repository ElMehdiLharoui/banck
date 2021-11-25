#pragma once
#include<vector>
#include <string>
#include <iostream>
using namespace std;
class client
{
private :
	string nom;
	string prenom;
	string adresse;
	vector <compte*> liste_cmpt;
public:
	client(string, string, string);
	void afficher()const;
};

