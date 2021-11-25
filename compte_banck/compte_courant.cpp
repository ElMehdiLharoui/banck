#include "pch.h"
#include "compte_courant.h"

compte_courant::compte_courant(double a, client* c, MAD* m) :compte(c, m)
{
	this->decouvert = a;
}
