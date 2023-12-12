#include "dreapta.h"
#include <iostream>
Dreapta::Dreapta()  {
	this->m = 1;
	this->n = 0;
}

Dreapta::Dreapta(const Dreapta& other) {
	this->m = other.m;
	this->n = other.n;
}

Dreapta::~Dreapta() {
	 
}