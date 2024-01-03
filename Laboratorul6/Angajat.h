#pragma once
#include <iostream>
#include "Persoana.h"
using namespace std;
class Angajat : Persoana
{
private:
	string department;
public:
	Angajat();
	Angajat(const Angajat& other);
	~Angajat();

	string getDepartament();
};

