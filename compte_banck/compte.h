#pragma once
#include<vector>
#include"client.h"
#include"MAD.h"
#include<iostream>
#include"operation.h"
using namespace std;
class compte
{
private:
	const int numc;
	static int count;
	client* titulaire;
	static MAD* plafond;
	MAD* solde;
	vector <operation*> list_op;

public:
	compte(client*, MAD*);//parametre
	compte(const compte&);//de recopie
    virtual void crediter(MAD*);
	virtual bool debiter(MAD*);
	virtual void consulter()const = 0;
	bool verser(MAD* M, compte& C);
	bool ismoitie(MAD*);
protected:
	void add_pour(double);
 




};

