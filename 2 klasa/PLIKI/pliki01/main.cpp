//zapis do pliku
#include <iostream>
#include <fstream>//file stream

using namespace std;

int main()
{
    ofstream plik; //zmienna reprezentujaca plik do zapisu
    plik.open("wynik.txt",ios::app); //powiazanie zmiennej plik z konkretnym plikiem na dysku {ios::app - dopisywanie}

    plik<<"Test"<<endl;
    int liczba;
    cout<<"podaj liczbe: ";
    cin>>liczba;
    plik<<"liczba "<<liczba<<endl;

    for(int i=1;i<=liczba;i++)
        plik<<i<<" ";
    plik<<endl;

    plik.close(); //zamnieci pliku
    return 0;
}
