#include "pch.h"
#include "compte_epargne.h"

compte_epargne::compte_epargne(double c, client* a, MAD* m):compte(a,m)
{
    if(c<=0 && c>=100) this->tauxI = c;
    
}

void compte_epargne::calculerI()
{
  
    this->add_pour(this->tauxI);

    
}

void compte_epargne::crediter(MAD * m)
{
    
}
