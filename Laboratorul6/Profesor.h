#pragma once
#include "Persoana.h"
class Profesor : Persoana
{
private:
	string materie;

public:
	Profesor();
	Profesor(const Profesor& other);
	~Profesor();
	string getMaterie();
	string detalii() override;
};
