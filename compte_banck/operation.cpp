#include "pch.h"
#include "operation.h"
int cmp = 0;

operation::operation(string n, MAD* s, Date* d): num(++cmp)
{
	this->nom = n;
	this->s = s;
	this->d = d;
}

void operation::show() const
{
	this->d->show();
	cout << this->nom << " " <<this->num << " " << this->s << endl;
 
}
