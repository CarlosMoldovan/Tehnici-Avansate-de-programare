#include "Complex.h"

Complex::Complex() {
    this->re = 1;
    this->im = 1;
}
Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}
Complex::Complex(const Complex& other)
{
    this->re = other.re;
    this->im = other.im;
}

Complex Complex::operator+(const Complex& other) const {
    double realNou = re + other.re;
    double imaginarNou = im + other.im;
    Complex rezultat(realNou, imaginarNou);
    return rezultat;
}

Complex Complex::operator-(const Complex& other) const {
    double realNou = re - other.re;
    double imaginarNou = im - other.im;
    Complex rezultat(realNou, imaginarNou);
    return rezultat;
     
}

Complex Complex::operator*(const Complex& other) const {
    double realNou = re * other.re - im * other.im; // (a * c - b * d)
    double imaginarNou = re * other.im + im * other.re; // (a * d + b * c)
    Complex rezultat(realNou, imaginarNou);
    return rezultat;
}

Complex Complex::operator/(const Complex& other) const {
    double numitor = other.re * other.re + other.im * other.im;
    if (numitor == 0.0) {
        return Complex(0.0, 0.0);
    }

    double realNou = (re * other.re + im * other.im) / numitor;
    double imaginarNou = (im * other.re - re * other.im) / numitor;

    Complex rezultat(realNou, imaginarNou);
    return rezultat;
}

bool Complex::operator<(const Complex& other) const {
    if (re < other.re) {
        return true;
    }
    else if (re > other.re) {
        return false;
    }

    return im < other.im;
}

bool Complex::operator>(const Complex& other) const {
    if (re > other.re) {
        return true;
    }
    else if (re < other.re) {
        return false;
    }

    return im > other.im;
}

bool Complex::operator<=(const Complex& other) const {
    if (re < other.re) {
        return true;
    }
    else if (re > other.re) {
        return false;
    }

    return im <= other.im;
}

bool Complex::operator>=(const Complex& other) const {
    if (re > other.re) {
        return true;
    }
    else if (re < other.re) {
        return false;
    }

    return im >= other.im;
}

bool Complex::operator==(const Complex& other) const {
    return (re == other.re) && (im == other.im);
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

// Functii membre pentru operatorii compusi
Complex& Complex::operator+=(const Complex& other) {
    re += other.re;
    im += other.im;

    return *this;
}

Complex& Complex::operator-=(const Complex& other) {
    re -= other.re;
    im -= other.im;

    return *this;
}

Complex& Complex::operator*=(const Complex& other) {
    double realNou = re * other.re - im * other.im;
    double imaginarNou = re * other.im + im * other.re;

    re = realNou;
    im = imaginarNou;

    return *this;
}

Complex& Complex::operator/=(const Complex& other) {
    double numitor = other.re * other.re + other.im * other.im;
    if (numitor != 0.0) {
        double realNou = (re * other.re + im * other.im) / numitor;
        double imaginarNou = (im * other.re - re * other.im) / numitor;

        re = realNou;
        im = imaginarNou;
    }
    return *this;
}

std::istream& operator>>(std::istream& is, Complex& fractie) {
    is >> fractie.re;

    if (is) {
        char separator;
        is >> separator;
        if (separator == 'i') {
            is >> fractie.im;
        }
        else {
            fractie.im = 0.0;
            is.putback(separator);
        }
    }

    return is;
}

std::ostream& operator<<(std::ostream& os, const Complex& fractie) {
    os << fractie.re;

    if (fractie.im != 0.0) {
        os << (fractie.im > 0.0 ? " + " : " - ");

        os << std::abs(fractie.im) << "i";
    }

    return os;
}

Complex& Complex::operator++() {
    ++re;
    ++im;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp(*this);

    ++re;
    ++im;
    return temp;
}

// Operator de decrementare (pre-decrementare)
Complex& Complex::operator--() {
    --re;
    --im;

    return *this;
}

// Operator de decrementare (post-decrementare)
Complex Complex::operator--(int) {
    Complex temp(*this);

    --re;
    --im;
    return temp;
}

// Operator de atribuire
Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        re = other.re;
        im = other.im;
    }
    return *this;
}
