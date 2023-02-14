#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("dane.txt");

    if(plik.good()==true)
    {
        int liczba,suma=0;
        while(!plik.eof())//dopoki nie osiagniesz konca pliku
        {
            plik>>liczba;
            suma+=liczba;
        }
        cout<<suma;

    }
    else
        cout<<"Nie ma";


    plik.close();
    return 0;
}
