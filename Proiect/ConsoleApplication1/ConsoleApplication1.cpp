// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

float soldreal;
class articol
{
 private:
    string nume;
    string culoare;
    string tara;
    float pret;
    int stoc;

public:
    articol(string nm, string clr, string tr, float prt, int stc) {
        nume = nm;
        culoare = clr;
        pret = prt;
        tara = tr;
        stoc = stc;

    }
    
    void cumpara();

    friend ostream& operator<<(ostream& out, const articol& l)
    {
        out << "Nume: " << l.nume << endl << "Culoare: " << l.culoare << endl << "Tara de provenienta: " << l.tara << endl<< "Pret: " << l.pret << endl << "Valabile in stoc: " << l.stoc << endl;
        return out;
    }

    
    ~articol() {};
};

void articol::cumpara(){
    int k;
    cout << "Cate flori doriti sa cumparati?";
    cout << endl;
    cin >> k;
    if (stoc >= k)
    {
        if (pret * k <= soldreal) {
            soldreal = soldreal - (pret * k);
            stoc = stoc - k;
            cout << "Achizitionat cu succes!" << endl;
        }
        else cout << "Insuficienti bani"<<endl;
    }
    else cout << "Nu sunt destule in stoc!"<<endl;

}

int main()
{
    articol Lalea("Lalea", "alba","Olanda", 6, 50),
            Trandafir("Trandafir","rosu", "Olanda", 11, 35),
            Crin("Crin-imperial", "portocaliu", "Italia", 1, 50),
            Feriga("Feriga", "verde", "Grecia", 1, 200),
            Lavanda("Lavanda", "mov", "Romania", 1, 500);
    int x;
    float sold;
    cout << "Introdu soldul contului: ";
    resold:
        cin >> sold;
        if (sold < 0)
        {
            cout << "Introduceti o valoare pozitiva!" << endl;
                goto resold;
        }
        else soldreal = sold;
    cout << endl;
    cout << "- FLORARIE -";
    cout << endl;

shop:
    cout << "Sold disponibil: " << soldreal << endl << "Ce doriti?"<<endl;
    cout << "(1) Lalea " << endl << "(2) Trandafir " << endl << "(3) Crin " << endl << "(4) Feriga " << endl << "(5) Lavanda " << endl << "(0) Iesire" << endl;
    cin >> x;
    switch (x)
    {
    case 1: {
        int n;
        shop2:
        cout << "(1)Cumpara" << endl << "(2)Afiseaza datele" << endl << "(3) Inapoi" << endl;
        cin >> n;
        switch (n) {
        case 1: Lalea.cumpara(); goto shop; break;
        case 2: cout << Lalea << endl; goto shop; break;
        case 3: goto shop; break;
        default: cout << "Valoare introdusa nu este valida!"<<endl; goto shop2;
                   }

            }
    case 2: {
        int n;
    shop3:
        cout << "(1)Cumpara" << endl << "(2)Afiseaza datele" << endl << "(3) Inapoi" << endl;
        cin >> n;
        switch (n) {
        case 1: Trandafir.cumpara(); goto shop; break;
        case 2: cout << Trandafir << endl; goto shop; break;
        case 3: goto shop; break;
        default: cout << "Valoare introdusa nu este valida!" << endl; goto shop3;
        }

    }
    case 3: {
        int n;
    shop4:
        cout << "(1)Cumpara" << endl << "(2)Afiseaza datele" << endl << "(3) Inapoi" << endl;
        cin >> n;
        switch (n) {
        case 1: Crin.cumpara(); goto shop; break;
        case 2: cout << Crin << endl; goto shop; break;
        case 3: goto shop; break;
        default: cout << "Valoare introdusa nu este valida!" << endl; goto shop4;
        }

    }
    case 4: {
        int n;
    shop5:
        cout << "(1)Cumpara" << endl << "(2)Afiseaza datele" << endl << "(3) Inapoi" << endl;
        cin >> n;
        switch (n) {
        case 1: Feriga.cumpara(); goto shop; break;
        case 2: cout << Feriga << endl; goto shop; break;
        case 3: goto shop; break;
        default: cout << "Valoare introdusa nu este valida!" << endl; goto shop5;
        }

    }
    case 5: {
        int n;
    shop6:
        cout << "(1)Cumpara" << endl << "(2)Afiseaza datele" << endl << "(3) Inapoi" << endl;
        cin >> n;
        switch (n) {
        case 1: Lavanda.cumpara(); goto shop; break;
        case 2: cout << Lavanda << endl; goto shop; break;
        case 3: goto shop; break;
        default: cout << "Valoare introdusa nu este valida!" << endl; goto shop6;
        }

    }
    case 0: return 0;
    default: cout << "valoarea introdusa nu este valida!" << endl;
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
