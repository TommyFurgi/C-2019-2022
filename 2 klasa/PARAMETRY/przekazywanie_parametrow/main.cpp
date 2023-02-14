#include <iostream>

using namespace std;

//przekazanie arg przez wartosc - potrzebujemy wartosci typu int
int funkcja1(int x);

//przekazanie arg przez referencje - potrzebujemy zmiennej typu int
int funkcja2(int &x);

//przekazanie arg przez wskaŸnik - potrzebujemy zmiennej typu int (*)
int funkcja3(int *x);


int main()
{
    int wynik,a=7;
    cout<<"a="<<a<<endl;
    wynik = funkcja3(&a);
    cout<<"wynik="<<wynik<<endl;
    cout<<"a="<<a<<endl;
    return 0;
}

int funkcja1(int x)
{
    x=x*10;
    return x;
}

int funkcja2(int &x)
{
    x=x*10;
    return x;
}

int funkcja3(int *x)
{
    *x = *x * 10;
    return *x;
}
