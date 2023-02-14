#include <iostream>

using namespace std;
int Fib(int n);
void Fibonacci_wpisz(int tab[],int n);
void Fibonacci_pokaz(int tab[],int n);

int main()
{
    int n;
    cin>>n;
    int tab[n+1];
    /*
    for(int i=0;i<=20;i++)
        cout<<"Fib("<<i<<")="<<Fib(i)<<endl;
    */
    Fibonacci_wpisz(tab,n+1);
    Fibonacci_pokaz(tab,n+1);
    return 0;
}
void Fibonacci_wpisz(int tab[],int n)
{
    tab[0]=0;
    tab[1]=1;
    for(int i=2; i<n; i++)
        tab[i]=tab[i-1]+tab[i-2];
}
void Fibonacci_pokaz(int tab[],int n)
{
    for(int i=0; i<n; i++)
        cout<<i<<": "<<tab[i]<<endl;
}

int Fib(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return Fib(n-2) + Fib(n-1);
}

