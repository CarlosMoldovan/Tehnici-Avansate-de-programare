#include "Punct.h"
#include <iostream>
#include <cmath>


Punct::Punct() {
	this->x = 1;
	this->y = 2;
}

Punct::Punct(double x, double y)
{
    this->x = x;
    this->y = y;
}

Punct::Punct(const Punct& other) {
	this->x = other.x;
	this->y = other.y;
}

Punct::~Punct() {

}

double Punct::getX() const
{
	return x;
}

double Punct::getY() const
{
	return y;
}

double distanta(const Punct& punct1, const Punct& punct2)
{
	double deltaX = punct1.x - punct2.x;
	double deltaY = punct1.y - punct2.y;
	return sqrt(deltaX * deltaX + deltaY * deltaY);
}

Dreapta Punct::dreaptaStatica;

Punct Punct::centruDeGreutate(const Punct* vectorPuncte, int n)
{
    double sumaX = 0;
    double sumaY = 0;

    for (int i = 0; i < n; ++i)
    {
        sumaX += vectorPuncte[i].getX();
        sumaY += vectorPuncte[i].getY();
    }

    double centruX = sumaX / n;
    double centruY = sumaY / n;

    return Punct(centruX, centruY);
}