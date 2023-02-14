#include <iostream>

using namespace std;

struct adres
{
    string miejscowosc;
    string ulica;
    int numer;
};

struct osoba
{
    string nazwisko;
    string imie;
    int wiek;
    double wzrost;
    bool czyUczen;
    int oceny[5];
    adres zamieszkanie;
};

int main()
{
    osoba o1;
    o1.imie = "Jan";
    o1.nazwisko = "Kowalski";
    o1.wiek = 24;
    o1.wzrost = 177.5;
    o1.czyUczen = false;
    o1.oceny[0] = 5;
    o1.oceny[1] = 3;
    o1.zamieszkanie.miejscowosc = "Jaros³aw";
    o1.zamieszkanie.ulica = "3 Maja";
    o1.zamieszkanie.numer = 4;

    cout<<o1.imie<<" "<<o1.nazwisko<<" lat "<<o1.wiek<<endl;
    cout<<"oceny: ";
    for(int i=0; i<5; i++)
        if(o1.oceny[i]>=1 && o1.oceny[i]<=6)
        cout<<o1.oceny[i]<<" "<<endl;
    cout<<"zam. "<<o1.zamieszkanie.ulica<<" "<<o1.zamieszkanie.numer<<" ,"<<o1.zamieszkanie.miejscowosc<<endl;

    //osoba o2 = {"Nowak", "Adam", 16, 163.0, true};
    //cout<<o2.imie<<" "<<o2.nazwisko<<" lat "<<o2.wiek<<endl;
    osoba o2 = {"Nowak", "Adam", 16, 163.0, true, {1,3,4,6,3}, {"Przemysl", "Rynek", 12}};
    cout<<o2.imie<<" "<<o2.nazwisko<<" lat "<<o2.wiek<<endl;
    cout<<"oceny: ";
    for(int i=0; i<5; i++)
        if(o2.oceny[i]>=1 && o2.oceny[i]<=6)
        cout<<o2.oceny[i]<<" ";
    cout<<endl<<"zam. "<<o2.zamieszkanie.ulica<<" "<<o2.zamieszkanie.numer<<" ,"<<o2.zamieszkanie.miejscowosc<<endl;

    return 0;
}
