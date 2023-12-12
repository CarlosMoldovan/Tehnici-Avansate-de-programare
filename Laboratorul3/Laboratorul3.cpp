#include <iostream>
#include "dreapta.h"
#include "Punct.h"

using namespace std;

int main()
{
    int n;
    cout << "Introduceti numarul de instante ale clasei Punct (n): ";
    cin >> n;
    Punct punct1;
    Punct punct2;

    Punct* vectorPunct = new Punct[n];
    cout << "Instantele clasei Punct create:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Punct " << i + 1 << ": x = " << vectorPunct[i].getX() << ", y = " << vectorPunct[i].getY() << endl;
    }

    double dist = distanta(punct1, punct2);

    cout << "Distanța între punct1 și punct2: " << dist << endl;

    cout << "Centrul de greutate al punctelor: " << Punct::centruDeGreutate(vectorPunct, n).getX() << ", "
        << Punct::centruDeGreutate(vectorPunct, n).getY() << endl;

     
    return 0;
}
