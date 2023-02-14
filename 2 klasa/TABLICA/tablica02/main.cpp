#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void generuj(int t[], int n, int zakres);
void pokaz(int t[], int n);
void suma(int t[], int n, int &a, int&b);
void zamien(int *t, int n);
void zamien(int *t, int n, int a, int b);
void zamienParami(int *t, int n);
void wartoscNajwieksza(int *t, int n);

int main()
{
    int n,zakres,sumaP=0,sumaNP=0;
    cin>>n>>zakres;
    int tab[n];
    generuj(tab,n,zakres);
    pokaz(tab,n);
    suma(tab,n,sumaP,sumaNP);
    cout<<"Suma NP: "<<sumaNP<<" Suma P: "<<sumaP<<endl;
    //zamien(tab,n);
    int a,b;
    //cin>>a>>b;
    //zamien(tab,n,a,b);

    //zamienParami(tab,n);
    wartoscNajwieksza(tab,n);
    pokaz(tab,n);
    cout<<tab[0]<<endl;
    return 0;
}

void generuj(int t[], int n, int zakres)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
        t[i]=rand()%(zakres+1);

}

void pokaz(int t[], int n)
{
    for(int i=0;i<n;i++)
        cout<<t[i]<<" ";
    cout<<endl;
}

void suma(int t[], int n, int &a, int&b)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            a=a+t[i];
        }
        else
        {
            b=b+t[i];
        }
    }
}

void zamien(int *t, int n)
{
    int pom;
    pom=t[0];
    t[0]=t[n-1];
    t[n-1]=pom;
}

void zamien(int *t, int n, int a, int b)
{
    int pom;
    pom=t[a];
    t[a]=t[b];
    t[b]=pom;

}

void zamienParami(int *t, int n)
{
    n=(n%2==0)? n : n-1;
    for(int i=0;i<n;i+=2)
        zamien(t,n,i,i+1);

}

void wartoscNajwieksza(int *t, int n)
{
    for(int i=1;i<n;i++)
        if(t[i]>t[0])
            zamien(t,n,0,i);

}

