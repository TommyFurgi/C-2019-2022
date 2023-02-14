#include <iostream>
#include <cstring>

using namespace std;
int policzZnak(string napis, char znak);
string zamien(string napis, char a, char b);

int main()
{
    string napis="testa";
    string napis2 = zamien(napis,'a','*');
    cout<<napis<<" "<<napis2;
    cout<<napis<<endl;
    cout<<"Litera a wystepuje razy "<<policzZnak(napis,'a')<<endl;
    cout<<napis[0]<<endl;
    int dlugosc = napis.size();
    cout<<dlugosc<<endl;
    cout<<"Podaj jakies slowo: "<<endl;
    getline(cin,napis);
    cout<<napis<<endl;
    dlugosc = napis.size();
    cout<<dlugosc<<endl;
    return 0;
}

int policzZnak(string napis, char znak)
{
    int wynik=0;
    for(int i=0;i<napis.size();i++)
        if(napis[i]==znak)
            wynik++;
    return wynik;
}


string zamien(string napis, char a, char b)
{
    string wynik=napis;
    for(int i=0;i<napis.size();i++)
        if(napis[i]==a)
            wynik[i]=b;
    return wynik;
}
