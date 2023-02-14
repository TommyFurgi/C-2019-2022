#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void wypelnijTablice(int t[], int n);
void wypelnijTablice(int t[], int n, int p, int q);
void pokazTablice(int t[], int n);
void pokazTablice(int t[], int n, char z);
int ileParzystych(int t[], int n);
int ileJestMniejszych(int t[], int n, int x);
int SumaLiczb(int t[], int n, int a, int b);

int main()
{
    int n, p, q;
    cout<<"ile elementow: ";
    cin>>n;
    int tab[n];
    char wybor;
    cout<<"Chcesz [G] - generowac, czy [W] - wybor? "<<endl;
    cin>>wybor;
    if(wybor=='G')
    {
        cout<<"Podaj zakres: ";
        cin>>p>>q;
        wypelnijTablice(tab,n,p,q);
    }
    else if(wybor=='G')
    {
        wypelnijTablice(tab,n);
    }
    else
    {
        cout<<"Bledny wybor "<<endl;
        return 0;
    }

    pokazTablice(tab,n);
    pokazTablice(tab,n,'q');
    cout<<"Licz parzystych jest: "<<ileParzystych(tab,n)<<endl;
    cout<<"Licz mniejszych od 5 jest: "<<ileJestMniejszych(tab,n,5)<<endl;
    cout<<"Suma liczb z przedzialu <5,10> wynosi: "<<SumaLiczb(tab,n,5,10)<<endl;
    return 0;
}
int SumaLiczb(int t[], int n, int a, int b)
{
    int p=0;
    for(int i=0;i<n;i++)
        if(t[i]<=b)
            if(t[i]>=a)
                p=p+t[i];
    return p;
}

int ileJestMniejszych(int t[], int n, int x)
{
    int p=0;
    for(int i=0;i<n;i++)
        if(t[i]<x)
            p++;
    return p;
}

int ileParzystych(int t[], int n)
{
    int p=0;
    for(int i=0;i<n;i++)
        if(t[i]%2==0)
            p++;
    return p;
}

void wypelnijTablice(int t[], int n)
{
   cout<<"Wprowadzanie danych do tablicy:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"podaj liczbe: ";
        cin>>t[i];
    }
}

void wypelnijTablice(int t[], int n, int p, int q)
{
    cout<<"Generowanie danych do tablicy z przedzialu <"<<p<<";"<<q<<"> :"<<endl;
    int srand(time(NULL));
    for(int i=0;i<n;i++)
        t[i]=p+rand()%(q-p+1);

}

void pokazTablice(int t[], int n)
{
    cout<<"Wypisywanie danych z tablicy od poczatku:"<<endl;

    for(int i=0;i<n;i++)
        cout<<t[i]<<" ";
    cout<<endl;
}

void pokazTablice(int t[], int n, char z)
{
    cout<<"Wypisywanie danych z tablicy od konca:"<<endl;

    for(int i=n-1;i>=0;i--)
        cout<<t[i]<<" ";
    cout<<endl;
}


