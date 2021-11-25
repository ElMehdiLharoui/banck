#include "pch.h"
#include "MAD.h"
#include<iostream>
using namespace std;

MAD::MAD(int a)
{
    this->solde = a;
}

MAD& MAD::operator+(const MAD& m) const
{
    MAD* res = new MAD(this->solde + m.solde);
    return *res;
}

MAD& MAD::operator-(const MAD& m) const
{
    MAD* res = new MAD(this->solde - m.solde);
    return *res;
}

bool MAD::operator>=(const MAD& m) const
{
    if (this->solde >= m.solde) return true;
    return false;
}

bool MAD::operator<=(const MAD& m) const
{
    if (this->solde <= m.solde) return true;
    return false;
}

MAD& MAD::operator*(const MAD& ma) const
{
    MAD* m = new MAD(this->solde * ma.solde);
    return *m;
}

MAD& MAD::operator/(double d) const
{
    MAD* m = new MAD(this->solde / d);
    return *m;
}

void MAD::afficher() const
{
    cout << this->solde << endl;
}
