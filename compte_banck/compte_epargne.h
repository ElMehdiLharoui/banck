#pragma once
#include "compte.h"
class compte_epargne :public compte
{

private:
	double tauxI;

public :
	compte_epargne(double ,client*,MAD*);
	void calculerI();
	void crediter(MAD*)override;
};

