#include "pch.h"
#include "Date.h"
#include <iostream>
using namespace std;
Date::Date(int a, int b, int c)
{
	this->anne = a;
	this->jour = b;
	this->moi = c;
}

void Date::show() const
{
	cout << this->jour << " " << this->moi << " " << this->anne << endl;
}
