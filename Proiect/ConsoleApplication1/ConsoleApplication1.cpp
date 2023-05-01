// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;
class lactate
{
 private:
    float pret;
    char fur[32];
    struct data_expirare
    {
        int an, luna, zi;
    }data;
public:
    lactate(float prkg, float cant) {
        pret = prkg * cant;
        fur[0] = '/0';
        data.zi = 0;
        data.luna = 0;
        data.an = 0;

    }
    
    friend ostream& operator<<(ostream& out, const lactate& l)
    {
        out << "Pret: " << l.pret << endl << "Furnizor: " << l.fur << endl << "Data expirarii: " << l.data.zi << " " << l.data.luna << " " << l.data.an;
        return out;
    }
    
    void furnizor(const char* s);
    void dat(int, int, int);

    ~lactate() {};
};

void  lactate::furnizor(const char* s)
{
    strcpy_s(fur, s);
}
void lactate::dat(int day, int month, int year)
{
    data.zi = day;
    data.luna = month;
    data.an = year;
}


int main()
{
    lactate cascaval(30, 0.75), telemea(20, 0.5), mozzarela(40, 1);
    cascaval.furnizor("Gordon");
    cascaval.dat(1, 5, 2023);
    telemea.furnizor("test1");
    telemea.dat(5, 6, 2023);
    mozzarela.furnizor("test2");
    mozzarela.dat(4, 5, 2023);

    cout << cascaval<<endl<<telemea<<endl<<mozzarela;
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
