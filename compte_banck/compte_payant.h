#pragma once
#include "compte.h"
#include "MAD.h"
#include "client.h"
class compte_payant :
    public compte
{
private:
    static double taux;
    client* c;
    MAD* m;
public:
    compte_payant(double,MAD *,client*);
    bool debiter(MAD*)override;
    void crediter(MAD*)override;
};

