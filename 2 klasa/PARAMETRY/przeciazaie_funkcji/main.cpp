#include <iostream>

using namespace std;

int suma();
int suma(int a, int b);
int suma(int a, int b, int c);
string suma(string a, string b);

int main()
{
    /*
    int L1, L2, W;
    cout<<"podaj dwie liczby: ";
    cin>>L1>>L2;

    W=suma(L1,L2);
    cout<<L1<<" + "<<L2<<" = "<<W<<endl;
    */

    cout<<suma(12,10)<<endl;
    cout<<suma(12,10,15)<<endl;
    cout<<suma()<<endl;
    cout<<suma("11","13")<<endl;
    cout<<suma("Ala ","ma kota")<<endl;

    return 0;
}

int suma()
{
    return 100;
}
int suma(int a, int b)
{
    int wynik;
    wynik = a+b;
    return wynik;
}

int suma(int a, int b, int c)
{
    int wynik;
    wynik = a+b+c;
    return wynik;
}

string suma(string a, string b)
{
    //+ ³¹czenie ³añcuchów znaków
    return a + b;
}
