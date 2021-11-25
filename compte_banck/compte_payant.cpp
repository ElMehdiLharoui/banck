#include "pch.h"
#include "compte_payant.h"
double taux = 0.05;
compte_payant::compte_payant(double t, MAD* s,client* c) :compte(c,s)
{
	
}

bool compte_payant::debiter(MAD* d)
{
	MAD* d = new MAD(*d * (1 + taux));


	return compte::debiter(d);
}

void compte_payant::crediter(MAD* d)
{
	MAD* d = new MAD(*d * (1 - this->taux));
	compte::crediter(d);
}
