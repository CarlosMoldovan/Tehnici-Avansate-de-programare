#include <iostream>
#include "Sabloane.h"

using namespace std;

int main()
{
    int n, v[20];
    cout << "Introdu lungimea vectorului: ";
    cin >> n;
    cout << "Introdu elementele vectorului:";
    for (int i= 0; i < n; i++) {
        cin >> v[i];
    }
    Sabloane<int> intSabloane;
    int maxInt = intSabloane.maxim(v, n);
    int minInt = intSabloane.minim(v, n);
    cout << "Cel mai mare element din vector este: " << maxInt << endl;
    cout << "Cel mai mic element din vector este: " << minInt << endl;
    int elementCautat;
    cout << "Introdu elementul pe care vrei sa-l cauti: ";
    cin >> elementCautat;

    int index = intSabloane.cautareSecventiala(v, n, elementCautat);

    if (index != -1) {
        cout << "Elementul a fost gasit la indexul: " << index << endl;
    }
    else {
        cout << "Elementul nu a fost gasit in vector." << endl;
    }

     
    cout << "Introdu elementul pe care vrei să-l cauți(cautare binara): ";
    cin >> elementCautat;

    int index = intSabloane.cautareBinară(v, n, elementCautat);

    if (index != -1) {
        cout << "Elementul a fost găsit la indexul: " << index << endl;
    }
    else {
        cout << "Elementul nu a fost găsit în vector." << endl;
    }

}
