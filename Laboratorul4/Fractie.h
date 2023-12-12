#pragma once
#include <iostream>
class Fractie
{
private:
	int numitor;
	int numarator;
public:
	Fractie();
	Fractie(int numarator);
	Fractie(int numarator, int numitor);
	Fractie(const Fractie& other);

    Fractie operator+(const Fractie& other) const;
    Fractie operator-(const Fractie& other) const;
    Fractie operator*(const Fractie& other) const;
    Fractie operator/(const Fractie& other) const;
    bool operator<(const Fractie& other) const;
    bool operator>(const Fractie& other) const;
    bool operator<=(const Fractie& other) const;
    bool operator>=(const Fractie& other) const;
    bool operator==(const Fractie& other) const;
    bool operator!=(const Fractie& other) const;

    // Functii membre pentru operatorii compusi
    Fractie& operator+=(const Fractie& other);
    Fractie& operator-=(const Fractie& other);
    Fractie& operator*=(const Fractie& other);
    Fractie& operator/=(const Fractie& other);

    // Operatori unari
    Fractie& operator++(); // pre-increment
    Fractie operator++(int); // post-increment
    Fractie& operator--(); // pre-decrement
    Fractie operator--(int); // post-decrement

    // Operatorul de atribuire
    Fractie& operator=(const Fractie& other);

    // Operatori de citire/afisare
    friend std::istream& operator>>(std::istream& is, Fractie& fractie);
    friend std::ostream& operator<<(std::ostream& os, const Fractie& fractie);

};

