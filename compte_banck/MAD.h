#pragma once
class MAD
{
private:
	double solde;
public :

	MAD(int);
	MAD& operator + (const MAD&)const;
	MAD& operator - (const MAD&)const;
	bool operator >= (const MAD&)const;
	bool operator <= (const MAD&)const;
	MAD& operator * (const MAD&)const;
	MAD& operator / (double d)const;

	void afficher()const;
};

