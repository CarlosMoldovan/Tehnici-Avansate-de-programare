 #include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex numarComplex1(3.0, 4.0);
    Complex numarComplex2(1.5, 2.5);

    // Afisare obiecte
    cout << "Numarul complex 1: " << numarComplex1 << endl;
    cout << "Numarul complex 2: " << numarComplex2 << endl;

    // Operatii cu numere complexe
    Complex suma = numarComplex1 + numarComplex2;
    Complex diferenta = numarComplex1 - numarComplex2;
    Complex produs = numarComplex1 * numarComplex2;
    Complex impartire = numarComplex1 / numarComplex2;

    cout << "Suma: " << suma << endl;
    cout << "Diferenta: " << diferenta << endl;
    cout << "Produsul: " << produs << endl;
    cout << "Impartirea: " << impartire << endl;

    // Operatori de comparare
    if (numarComplex1 < numarComplex2) {
         cout << "Numarul complex 1 este mai mic decat numarul complex 2." << endl;
    }
    else {
         cout << "Numarul complex 1 nu este mai mic decat numarul complex 2." << endl;
    }

    // Operatori compuși
    numarComplex1 += numarComplex2;
    numarComplex2 -= numarComplex1;
    numarComplex1 *= numarComplex2;
    numarComplex2 /= numarComplex1;

    cout << "Numarul complex 1 dupa operatii compuse: " << numarComplex1 << endl;
    cout << "Numarul complex 2 dupa operatii compuse: " << numarComplex2 << endl;

    // Operatori de comparare
    if (numarComplex1 == numarComplex2) {
        cout << "Numarul complex 1 este egal cu numarul complex 2." << endl;
    }
    else {
        cout << "Numarul complex 1 nu este egal cu numarul complex 2." << endl;
    }

    // Operatori de incrementare și decrementare
    ++numarComplex1;
    Complex postIncrement = numarComplex2++;
    --numarComplex1;
    Complex postDecrement = numarComplex2--;

    cout << "Numarul complex 1 dupa incrementare: " << numarComplex1 << endl;
    cout << "Numarul complex 2 dupa incrementare (post): " << numarComplex2 << endl;
    cout << "Rezultatul incrementarii post: " << postIncrement << endl;
    cout << "Rezultatul decrementarii post: " << postDecrement << endl;

    // Operator de atribuire
    Complex numarComplex3;
    numarComplex3 = numarComplex1;

    cout << "Numarul complex 3 dupa atribuire: " << numarComplex3 << endl;

    // Citire de la tastatură
    Complex numarComplexInput;
    cout << "Introduceti un numar complex (de exemplu, 3.5 2.0i): ";
    cin >> numarComplexInput;

    cout << "Ati introdus: " << numarComplexInput << endl;

    return 0;
}
