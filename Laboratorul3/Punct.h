#pragma once
#include "Dreapta.h"
class Punct
{
private:
	double x;
	double y;
public:
	Punct();
	Punct(const Punct& other);
	Punct(double x, double y);
	~Punct();
	double getX() const;
	double getY() const;
	friend double distanta(const Punct& punct1, const Punct& punct2);
	static Dreapta dreaptaStatica;

	static Punct centruDeGreutate(const Punct* vectorPuncte, int n);
};

