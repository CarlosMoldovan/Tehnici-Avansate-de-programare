#pragma 
#include <iostream>
class Complex
{
private:
	double re;
	double im;
public:
    Complex();
    Complex(double re, double im);
    Complex(const Complex& other);

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    bool operator<(const Complex& other) const;
    bool operator>(const Complex& other) const;
    bool operator<=(const Complex& other) const;
    bool operator>=(const Complex& other) const;
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;

    // Functii membre pentru operatorii compusi
    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator/=(const Complex& other);

    // Operatori unari
    Complex& operator++(); // pre-increment
    Complex operator++(int); // post-increment
    Complex& operator--(); // pre-decrement
    Complex operator--(int); // post-decrement

    // Operatorul de atribuire
    Complex& operator=(const Complex& other);

    // Operatori de citire/afisare
    friend std::istream& operator>>(std::istream& is, Complex& fractie);
    friend std::ostream& operator<<(std::ostream& os, const Complex& fractie);
};

