#include "Persoana.h"

Persoana::Persoana()
{
	this->CNP = CNP;
	this->nume = nume;
}
Persoana::Persoana(const Persoana& other)
{
	this->CNP = other.CNP;
	this->nume = other.nume;
}
Persoana::~Persoana() {
}
string Persoana::detalii()
{
	return "CNP: " + CNP + "nume: " + nume;
}