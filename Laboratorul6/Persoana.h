#pragma once
#include <iostream>

using namespace std;
class Persoana
{
private:
	string CNP;
	string nume;


public:
	Persoana();
	Persoana(const Persoana& other);
	~Persoana();

	virtual string detalii();
	string getNume()
	{
		return nume;
	}
};
