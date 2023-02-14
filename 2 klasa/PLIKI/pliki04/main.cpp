#include <iostream>
#include <fstream>

using namespace std;

struct osoba
{
    string imie,nazwisko;
    int wiek;
    double srednia;
};

void pokazDane(osoba *T, int n);
void dodajOsobe(osoba *T, int &n);

void wczytajDane(string nazwaPliku, osoba *T, int &n);
void zapiszDane(string nazwaPliku, osoba *T, int n);

int main()
{
    osoba U[100];
    int n;
    wczytajDane("mojedane.txt",U,n);
    pokazDane(U,n);
    dodajOsobe(U,n);
    zapiszDane("mojedane.txt",U,n);
    pokazDane(U,n);

    return 0;
}

void zapiszDane(string nazwaPliku, osoba *T, int n)
{
    ofstream plik;
    plik.open(nazwaPliku.c_str());

    for(int i=0;i<n;i++)
    {
        plik<<T[i].imie<<" "<<T[i].nazwisko<<" "<<T[i].wiek<<" "<<T[i].srednia;
        if(i<n-1)
            plik<<endl;
    }

    plik.close();
}

void dodajOsobe(osoba *T, int &n)
{
    cout<<"podaj imie: ";
    cin>>T[n].imie;
    cout<<"podaj nazwisko: ";
    cin>>T[n].nazwisko;
    cout<<"podaj wiek: ";
    cin>>T[n].wiek;
    cout<<"podaj srednia: ";
    cin>>T[n].srednia;
    n++;
}

void pokazDane(osoba *T, int n)
{
    for(int i=0;i<n;i++)
        cout<<T[i].imie<<" "<<T[i].nazwisko<<", lat: "<<T[i].wiek<<", sr. ocen: "<<T[i].srednia<<endl;
}

void wczytajDane(string nazwaPliku, osoba *T, int &n)
{
    ifstream plik;
    plik.open(nazwaPliku.c_str());
    n=0;
    while(!plik.eof())
    {
        plik>>T[n].imie;
        plik>>T[n].nazwisko;
        plik>>T[n].wiek;
        plik>>T[n].srednia;
        n++;
    }
    plik.close();
}
