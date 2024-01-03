#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
    this->email = email;
    this->nota = nota;
}
Student::Student(const Student& other) : Persoana(other) {
    this->email = other.email;
    this->nota = other.nota;
}

Student::~Student() {
}

string Student::detalii() {
    return "Studentul: " + getNume() + "are nota: " + getNota();
}