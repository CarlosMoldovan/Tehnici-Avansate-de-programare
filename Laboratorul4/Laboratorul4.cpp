#include <iostream>
#include "Fractie.h"

using namespace std;

int main()
{
    int nr1, nr2, n2;
    cout << "Introdu numãratorul primei fractii:";
    cin >> nr1;
    cout << "Introdu numaratorul pentru a doua fractie:";
    cin >> nr2;
    cout << "Introdu numitorul pentru a doua fractie:";
    cin >> n2;

    Fractie f1;
    Fractie f2(nr1);
    Fractie f3(nr2, n2);
    Fractie f4 = f3;

    
    cout << "Suma este:";
    Fractie suma = f2 + f3;
    cout << "Suma este: "<< suma << endl;
    Fractie diferenta = f3 - f2;
    cout << "Diferenta este: " << diferenta << endl;
    Fractie produs = f2 * f3;
    cout << "Produsul este: " << produs << endl;
    Fractie cat = f3 / f2;
    cout << "Catul este: " << cat << endl;
    bool maiMic = f2 < f3;

    bool maiMare = f2 > f3;
    bool maiMicSauEgal = f2 <= f3;
    bool maiMareSauEgal = f2 >= f3;
    bool egal = f2 == f3;
    bool diferit = f2 != f3;

    // Testare operatori compusi
    f1 += f2;
    f1 -= f3;
    f1 *= f2;
    f1 /= f3;

    // Testare operatori unari
    Fractie preIncrement = ++f1;
    Fractie postIncrement = f1++;
    Fractie preDecrement = --f1;
    Fractie postDecrement = f1--;

    // Testare operatorul de atribuire
    Fractie f5;
    f5 = f1;

    return 0;
}

