//problema  1

/*#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main() {
    ifstream in("textP1.txt");

    set<string> cuvinte;
 
    string cuvant;
    while (in >> cuvant) {
        if (cuvinte.find(cuvant) == cuvinte.end()) {
            cuvinte.insert(cuvant);
        }
    }
    ofstream out("cuvinteP1.txt");

    for (const string& cuvant : cuvinte) {
        out << cuvant << endl;
    }

    in.close();
    out.close();

    return 0;
}
*/

//Problema 2
/*
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
    ifstream in("textP2.txt");
    map<string, unsigned> aparitii;

    string cuvant;
    while (in >> cuvant) {
        aparitii[cuvant]++;
    }
    for (const auto& aparitie : aparitii) {
        cout << aparitie.first << " -> " << aparitie.second << endl;
    }

    in.close();

    return 0;
}*/

//problema 3


#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main() {
    ifstream in("textP3.txt");

    map<unsigned, map<string, unsigned>> aparitii;

    string linie;
    unsigned linie_curenta = 1;
    while (getline(in, linie)) {
        map<string, unsigned> aparitii_linie;

        for (char cuvant : linie) {
            aparitii_linie[to_string(cuvant)]++;
        }

        aparitii[linie_curenta] = aparitii_linie;
        linie_curenta++;
    }

    for (const auto& aparitie_linie : aparitii) {
        cout << "Linie " << aparitie_linie.first << ":" << endl;
        for (const auto& aparitie_cuvant : aparitie_linie.second) {
            cout << aparitie_cuvant.first << " -> " << aparitie_cuvant.second << endl;
        }
    }
    in.close();

    return 0;
}