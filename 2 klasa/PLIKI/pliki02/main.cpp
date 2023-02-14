//odczyt z pliku
#include <iostream>
#include <fstream>

using namespace std;

struct osoba
{
    string imie;
    int wiek;
};
void pokazDane(osoba *t, int n);

int main()
{
    ifstream plik;
    plik.open("dane.txt");

    osoba uczniowie[4];

    for(int i=0;i<4;i++)
    {
        plik>>uczniowie[i].imie;
        plik>>uczniowie[i].wiek;

    }


    plik.close();
    pokazDane(uczniowie,4);
    return 0;
}
void pokazDane(osoba *t, int n)
{
    for(int i=0;i<n;i++)
        cout<<t[i].imie<<", lat "<<t[i].wiek<<" ;";
    cout<<endl;
}
