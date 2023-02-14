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
void menu(int &a);


int main()
{
    osoba U[100];
    int n;
    int a;
    wczytajDane("mojedane.txt",U,n);
    do
    {
        menu(a);
        switch(a)
        {
            case 1:
                pokazDane(U,n);
                break;
            case 2:
                dodajOsobe(U,n);
                break;
            case 3:
                zapiszDane("mojedane.txt",U,n);
                break;
            case 4:
                break;
        }
    cout<<"==============================================="<<endl;
    }while(a!=4);
    return 0;
}
void menu(int &a)
{
    cout<<endl;
    cout<<"Pokaz dane: 1"<<endl;
    cout<<"Wprowadz dane: 2"<<endl;
    cout<<"Zapisz dane: 3"<<endl;
    cout<<"Zakoncz program: 4"<<endl;
    cout<<endl<<"Co chcesz zrobic: "<<endl;
    cin>>a;
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
