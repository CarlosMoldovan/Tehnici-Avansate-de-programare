#pragma once
#include "Persoana.h"

class Student : public Persoana {
private:
    string email;
    int nota;

public:
    Student();
    Student(const Student& other);
    ~Student();
    string detalii() override;

    string getNota() const;
};