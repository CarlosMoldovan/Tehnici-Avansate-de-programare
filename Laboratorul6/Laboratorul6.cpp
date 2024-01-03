#include <iostream>
#pragma once
#include "Persoana.h"
#include "Student.h"
#include "Profesor.h"
#include "Angajat.h"

using namespace std;


int main()
{

    Persoana persoana;
    persoana.detalii();

    Student student;
    student.detalii();


    Profesor profesor;
    profesor.detalii();

    Angajat angajat;
    angajat.getDepartament();
}
