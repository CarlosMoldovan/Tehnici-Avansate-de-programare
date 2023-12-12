#include "Fractie.h"

Fractie::Fractie() {
    this->numarator = 0;
    this->numitor = 1;
}
Fractie::Fractie(int numarator) {
    this->numarator = numarator;
    numitor = 1;
}
Fractie::Fractie(int numarator, int numitor) {
    this->numarator = numarator;
    this->numitor = numitor;
}
Fractie::Fractie(const Fractie& other)
{
    this->numarator = other.numarator;
    this->numitor = other.numitor;
}

Fractie Fractie::operator+(const Fractie& other) const {
    Fractie result;
    result.numarator = this->numarator * other.numitor + other.numarator * this->numitor;
    result.numitor = this->numitor * other.numitor;
    return result;
}

Fractie Fractie::operator-(const Fractie& other) const {
    Fractie result;
    result.numarator = this->numarator * other.numitor - other.numarator * this->numitor;
    result.numitor = this->numitor * other.numitor;
    return result;
}

Fractie Fractie::operator*(const Fractie& other) const {
    Fractie result;
    result.numarator = this->numarator * other.numarator;
    result.numitor = this->numitor * other.numitor;
    return result;
}

Fractie Fractie::operator/(const Fractie& other) const {
    Fractie result;
    result.numarator = this->numarator * other.numitor;
    result.numitor = this->numitor * other.numarator;
    return result;
}

bool Fractie::operator<(const Fractie& other) const {
    return (this->numarator * other.numitor < other.numarator * this->numitor);
}

bool Fractie::operator>(const Fractie& other) const {
    return (this->numarator * other.numitor > other.numarator * this->numitor);
}

bool Fractie::operator<=(const Fractie& other) const {
    return (this->numarator * other.numitor <= other.numarator * this->numitor);
}

bool Fractie::operator>=(const Fractie& other) const {
    return (this->numarator * other.numitor >= other.numarator * this->numitor);
}

bool Fractie::operator==(const Fractie& other) const {
    return (this->numarator * other.numitor == other.numarator * this->numitor);
}

bool Fractie::operator!=(const Fractie& other) const {
    return (this->numarator * other.numitor != other.numarator * this->numitor);
}

// Functii membre pentru operatorii compusi
Fractie& Fractie::operator+=(const Fractie& other) {
    this->numarator = this->numarator * other.numitor + other.numarator * this->numitor;
    this->numitor = this->numitor * other.numitor;
    return *this;
}

Fractie& Fractie::operator-=(const Fractie& other) {
    this->numarator = this->numarator * other.numitor - other.numarator * this->numitor;
    this->numitor = this->numitor * other.numitor;
    return *this;
}

Fractie& Fractie::operator*=(const Fractie& other) {
    this->numarator = this->numarator * other.numarator;
    this->numitor = this->numitor * other.numitor;
    return *this;
}

Fractie& Fractie::operator/=(const Fractie& other) {
    this->numarator = this->numarator * other.numitor;
    this->numitor = this->numitor * other.numarator;
    return *this;
}

std::istream& operator>>(std::istream& is, Fractie& fractie) {
    // Implementați citirea fractiei din istream
    is >> fractie.numarator >> fractie.numitor;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Fractie& fractie) {
    // Implementați afișarea fractiei în ostream
    os << fractie.numarator << "/" << fractie.numitor;
    return os;
}

Fractie& Fractie::operator++() {
    // Implementați incrementarea
    this->numarator += this->numitor;
    return *this;
}

// Operator de incrementare (post-incrementare)
Fractie Fractie::operator++(int) {
    Fractie temp(*this);
    // Implementați incrementarea
    this->numarator += this->numitor;
    return temp;
}

// Operator de decrementare (pre-decrementare)
Fractie& Fractie::operator--() {
    // Implementați decrementarea
    this->numarator -= this->numitor;
    return *this;
}

// Operator de decrementare (post-decrementare)
Fractie Fractie::operator--(int) {
    Fractie temp(*this);
    // Implementați decrementarea
    this->numarator -= this->numitor;
    return temp;
}

// Operator de atribuire
Fractie& Fractie::operator=(const Fractie& other) {
    // Implementați atribuirea
    this->numarator = other.numarator;
    this->numitor = other.numitor;
    return *this;
}
