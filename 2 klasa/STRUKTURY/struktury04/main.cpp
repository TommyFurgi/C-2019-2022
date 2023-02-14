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
void wpiszDane(osoba &o,string imie, string nazwisko, int lat);
void pokazDane(osoba o);
bool czyPelnoletni(osoba o);

string inicjaly(osoba o);

void wpiszDaneTab(osoba *t, int n);
void pokazDaneTab(osoba *t, int n);

void pokazInicjalyTab(osoba *t,int n);
void pokazInicjalyTab(osoba *t,int n, string *ti);

double sredniWiekTab(osoba *t, int n);

int main()
{
    osoba uczniowie[5]{{"Jan","Kowalski",19},{"Anna","Nowak",40},{"Dorota","Kot",22},{"Jan","Kowalski",19},{"Jan","Kowalski",19}};


    //wpiszDaneTab(uczniowie,5);
    pokazDaneTab(uczniowie,5);

    cout<<"sredni wiek "<<sredniWiekTab(uczniowie,5);

    //pokazInicjalyTab(uczniowie,5);
    string ti[5];
    pokazInicjalyTab(uczniowie,5,ti);
    cout<<ti[1];

    return 0;
}
void pokazInicjalyTab(osoba *t, int n, string *ti)
{
    for(int i=0; i<n; i++)
        ti[i]=inicjaly(t[i]);
}

void pokazInicjalyTab(osoba *t, int n)
{
    for(int i=0; i<n; i++)
        cout<<inicjaly(t[i])<<endl;
}

string inicjaly(osoba o)
{
    string w="";
    w+=o.imie[0];
    w+=o.nazwisko[0];
    return w;
}

double sredniWiekTab(osoba *t, int n)
{
    double sr=0;
    for(int i=0; i<n; i++)
        sr+=t[i].wiek;
    return sr/(1.0*n);
}

void wpiszDaneTab(osoba *t, int n)
{
    for(int i=0; i<n; i++)
        t[i]=wpiszDane();
}

void pokazDaneTab(osoba *t, int n)
{
    for(int i=0; i<n; i++)
        pokazDane(t[i]);
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
