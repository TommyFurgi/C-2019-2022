#include <iostream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

osoba wpiszDane();
osoba wpiszDane(string imie, string nazwisko, int lat);
osoba wpiszDane(osoba &o,string imie, string nazwisko, int lat);
void wpiszDane(osoba &o, string imie, string nazwisko, int wiek);
void pokazDane(osoba o);
bool czyPelnoletni(osoba o);

int main()
{
    osoba uczniowie[5];
    osoba o1;
    o1=wpiszDane();
    pokazDane(osoba o);

    osoba o2;
    o2=wpiszDane("Anna","Nowak",20);
    pokazDane(o2);

    osoba o3;
    wpiszDane(o3,)

    if(czyPelnoletni(o3))
        cout<<"Mozesz samodzielnie zalozyc konto w banku"<<endl;

    return 0;
}

bool czyPelnoletni(osoba o)
{
    if(o.wiek>=18)
        return true;
    else
        return false;
}
void wpiszDane(osoba &o, string imie, string nazwisko, int wiek)
{
    o.imie=imie;
    o.nazwisko=nazwisko;
    o.wiek=wiek;
}

osoba wpiszDane(string imie, string nazwisko, int wiek)
{
    osoba o;
    o.imie = imie;
    o.nazwisko = nazwisko;
    o.wiek = wiek;
    return o;
}

void pokazDane(osoba o)
{
    cout<<o.imie<<" "<<o.nazwisko<<" "<<o.wiek<<endl;
}

osoba wpiszDane()
{
    osoba o;
    cout<<"imie: ";
    cin>>o.imie;
    cout<<"nazwisko: ";
    cin>>o.nazwisko;
    cout<<"wiek: ";
    cin>>o.wiek;
    return o;
}
