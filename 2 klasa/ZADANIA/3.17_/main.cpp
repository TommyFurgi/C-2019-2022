#include <iostream>
#include <cmath>

using namespace std;
double funkcja_B(int n);
bool funkcja_C(int a, int b);
double funkcja_D(int n);


int main()
{
    int n, a, b;
    cout<<"Podaj najpierw n potem a, a na koniec b: "<<endl;
    cin>>n>>a>>b;
    cout<<"Suma ciagu wynosi: "<<funkcja_B(n)<<endl;

    if(funkcja_C(a,b)==true)
        cout<<"wyrazenie (2*a-b) jest wieksze od 0 "<<endl;
    else
        cout<<"wyrazenie (2*a-b) nie jest wieksze od 0"<<endl;

    cout<<"n-ty wyraz wynosi: "<<funkcja_D(n)<<endl;


    return 0;
}
double funkcja_B(int n)
{
    double suma=0;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            double mianownik=pow(3,i-1);
            suma+=(-5.0)/(mianownik*1.0);
        }
        return suma;
    }
    return 0;
}

bool funkcja_C(int a, int b)
{
    if((2*a-b)>0)
        return true;
    else
        return false;
}

double funkcja_D(int n)
{
    double w=0;
    if(n>0)
    {
        w=0.3;
        for(int i=1;i<n;i++)
            w*=(-2);
    }

    return w;
}
