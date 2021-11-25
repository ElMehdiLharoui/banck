#include "pch.h"
#include<iostream>
#include "compte.h"
using namespace std;
MAD* compte::plafond = new MAD(200);
int compte::count = 0;
compte::compte(client* c, MAD* m) :numc(++count)    
{
    this->titulaire = c;
    this->solde = m;

}

compte::compte(const compte& c) :numc(++count)
{
    this->solde = c.solde;
    this->titulaire = c.titulaire;
}

void compte::crediter(MAD * m)
{
    *(this->solde) = *(this->solde) + *m;
    
}

bool compte::debiter(MAD* m)
{
    if (*(this->solde) >= *m && *m <= *(compte::plafond)) {

        *(this->solde) = *(this->solde) - *m;
        return true;
    }

    return false;
}

void compte::consulter() const
{
    this->titulaire->afficher();
    this->solde->afficher();
}

bool compte::verser(MAD* M, compte& C)
{
    if (this->debiter(M) == true) {
        C.crediter(M);
        return true;
     }
    return false;
}

bool compte::ismoitie(MAD* m)
{
    if (*m <= *this->solde / 2) return true;
    return false;

   
}

void compte::add_pour(double mo)
{
    *this->solde = *this->solde * *this->solde * (mo / 100);
}
