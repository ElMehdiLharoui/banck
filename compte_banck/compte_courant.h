#pragma once
#include "compte.h"
class compte_courant :
    public compte
{

private:
    double decouvert;

public :

    compte_courant(double ,client*,MAD*);




};

