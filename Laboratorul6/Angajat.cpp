#include "Angajat.h"
#include <iostream>
using namespace std;

Angajat::Angajat()
{
	this->department = department;
}
Angajat::Angajat(const Angajat& other)
{
	this->department = other.department;
}
Angajat::~Angajat()
{

}
string Angajat::getDepartament()
{
	return "Angajatul" + getNume() + "face parte din departamentul" + department;
}