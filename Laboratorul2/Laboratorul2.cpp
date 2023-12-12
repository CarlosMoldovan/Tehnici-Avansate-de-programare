#include <iostream>

using namespace std;

class Fractie
{
private:
    int numitor;
    int numarator;
public:
    Fractie() {
        numarator = 0;
        numitor = 1;
    }
    Fractie(int numarator) {
        this->numarator = numarator;
        numitor = 1;
    }
    Fractie(int numarator, int numitor) {
        this->numarator = numarator;
        this->numitor = numitor;
    }
    Fractie(const Fractie& other)
    {
        this->numarator = other.numarator;
        this->numitor = other.numitor;
    }
    Fractie adunare(const Fractie& other) const
    {
        Fractie rezultat;
        rezultat.numarator = (numarator * other.numitor) + (other.numarator * numitor);
        rezultat.numitor = numitor * other.numitor;
        return rezultat;
    }

    Fractie scadere(const Fractie& other) const
    {
        Fractie rezultat;
        rezultat.numarator = (numarator * other.numitor) - (other.numarator * numitor);
        rezultat.numitor = numitor * other.numitor;
        return rezultat;
    }

    Fractie inmultire(const Fractie& other) const
    {
        Fractie rezultat;
        rezultat.numarator = numarator * other.numarator;
        rezultat.numitor = numitor * other.numitor;
        return rezultat;
    }

    Fractie inpartire(const Fractie& other) const
    {
        Fractie rezultat;
        rezultat.numarator = numarator * other.numitor;
        rezultat.numitor = numitor * other.numarator;
        return rezultat;
    }

    void  simplificare() {
        int x;
        if (numitor > numarator)
        {
            x = numitor;
        }
        else {
            x = numarator;
        }
        for (int i = 2; i <= x; i++) {
            if ((numarator % i == 0) && (numitor % i == 0)) {
                numarator = numarator / i;
                numitor = numitor / i;
            }
        }
    }

    bool egal(Fractie& fr) {
        if ((fr.numarator == numarator) && (fr.numitor == numitor))
            return 1;
        else
            return 0;
    }

    void reciproc() {
        cout << endl << "Reciproca fractiei este: " << numitor << "/" << numarator;
    }

    static int cmmdc(int nr1, int nr2) {
        while(nr1 != nr2){
            if (nr1 > nr2) {
                nr1 = nr1 - nr2;
            }
            else {
                nr2 = nr2 - nr1;
            }
        }
        return nr1;
    }
    void print() {
        cout << numarator << "/" << numitor;
    }
    friend ostream& operator<<(ostream& out, const Fractie& fractie)
    {
        out << fractie.numarator << "/" << fractie.numitor;
        return out;
    }

};

int main()
{
    int numi, numa;
    cout << "Introdu numaratorul fractiei: ";
    cin >> numa;
    cout << "Introdu numitorul fractiei: ";
    cin >> numi;
    Fractie fractie(numa, numi);
    fractie.simplificare();
    cout << "Fractia simplificata este: ";
    fractie.print();
    fractie.reciproc();
    cout << endl << fractie.egal(fractie);
    return 0;
}
