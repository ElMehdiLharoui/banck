#pragma once
#include"Date.h"
#include"MAD.h"
#include <iostream>
using namespace std;
class operation
{
private:
	const int num;
	Date* d;
	static int cmp;
	MAD* s;
	string nom;
public:
	operation(string,MAD*,Date*);
	void show()const;
};

