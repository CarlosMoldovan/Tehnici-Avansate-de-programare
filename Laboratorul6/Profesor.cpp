#include "Profesor.h"
#include <iostream>

using namespace std;

Profesor::Profesor()
{
	this->materie = materie;
}
Profesor::Profesor(const Profesor& other)
{
	this->materie = other.materie;
}
Profesor::~Profesor() {}
string Profesor::detalii()
{
	return "Profesorul" + getNume() + "preda" + getMaterie();
}