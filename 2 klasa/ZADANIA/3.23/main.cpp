#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
void LosujLiczby(int t[], int n, int p, int q);
void WyswietlTablice(int t[], int n);
void Tablica2(int t[], int n, int p[], int a);
void WyswietlTablice2(int p[],int n);
void LiczbaNajrzadziej(int p[], int a);
void LiczbaNajczesciej(int p[], int a);

int main()
{
    int p[11]{0};
    int tab[15];
    LosujLiczby(tab,15,0,10);
    WyswietlTablice(tab,15);

    cout<<"Zakres w tablicy: "<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"Czestosc wystepowania tej liczby pod tym miejscem w tablicy: "<<endl;
    Tablica2(tab,15,p,11);

    WyswietlTablice2(p,11);
    cout<<endl;
    LiczbaNajrzadziej(p,11);
    cout<<endl;
    LiczbaNajczesciej(p,11);
    return 0;
}

void LosujLiczby(int t[], int n, int p, int q)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
        t[i]=p+rand()%(q-p+1);
}

void WyswietlTablice(int t[], int n)
{
    for(int i=0;i<n;i++)
        cout<<t[i]<<" ";
    cout<<endl<<endl;
}

void Tablica2(int t[], int n, int p[], int a)
{
    for(int i=0;i<n;i++)
        for(int l=0;l<a;l++)
            if(t[i]==l)
                p[l]++;

}


void WyswietlTablice2(int p[],int n)
{
    for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
    cout<<endl;
}

void LiczbaNajrzadziej(int p[], int a)
{
    cout<<"Najrzadziej wystepujaca liczba to: "<<endl;
    int zmienna=10, zmienna2=0 ;
    for(int i=0;i<a;i++)
        if(p[i]<p[zmienna] && p[i]>0)
            zmienna=i;
    for(int i=0;i<a;i++)
        if(p[zmienna]==p[i])
            zmienna2++;

    if(zmienna2==1)
        cout<<zmienna<<endl;
    else
        cout<<"W tablicy nie ma takiego argumentu :( "<<endl;

}

void LiczbaNajczesciej(int p[], int a)
{
    cout<<"Najczesciej wystepujaca liczba to: "<<endl;
    int zmienna=0, zmienna2=0 ;
    for(int i=0;i<a;i++)
        if(p[i]>p[zmienna])
            zmienna=i;
    for(int i=0;i<a;i++)
        if(p[zmienna]==p[i])
            zmienna2++;

    if(zmienna2==1)
        cout<<zmienna<<endl;
    else
        cout<<"W tablicy nie ma takiego argumentu :( "<<endl;
}

