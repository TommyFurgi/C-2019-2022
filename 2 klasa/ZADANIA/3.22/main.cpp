#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void wprowadzanieDanych(double t[],int n, double p, double q);
double SumaElementow(double t[],int n);
double IloczynElementow(double t[], int n, double x);
void pokazTablice(double t[], int n);

int main()
{
    double p=-10.0, q=23.0;
    int n=10;
    double tab[n];

    wprowadzanieDanych(tab,n,p,q);
    pokazTablice(tab,n);
    cout<<"Suma elementow tablicy wynosi: "<<SumaElementow(tab,n)<<endl;
    cout<<"Iloczyn elementow tablicy mniejszych niz 6 wynosi: "<<IloczynElementow(tab,n,6)<<endl;
    return 0;
}

void wprowadzanieDanych(double t[],int n, double p, double q)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
        t[i]=p+(double)rand()/RAND_MAX*(q+1);
}

void pokazTablice(double t[], int n)
{
    for(int i=0;i<n;i++)
        cout<<t[i]<<endl;
}

double SumaElementow(double t[],int n)
{
    double p=0;
    for(int i=0;i<n;i++)
        p+=t[i];
    return p;
}

double IloczynElementow(double t[], int n, double x)
{
    double p=1;
    for(int i=0;i<n;i++)
        if(t[i]<5)
            p*=t[i];
    return p;
}
