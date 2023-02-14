#include <iostream>

using namespace std;
//reszta z dzielenia zapisany iteracyjnie
int NWD_ri(int a, int b);
//reszta z dzielenia zapisana arekurrencyjnie
int NWD_rr(int a, int b);
// odejmowanie iteracyjnie
int NWD_oi(int a, int b);
//odejmowanie rekurencyjnia
int NWD_or(int a, int b);
int NWW(int a, int b);

int main()
{
    int a=16,b=30;
    cout << "NWD_ri("<<a<<","<<b<<") = " << NWD_ri(a,b) << endl;
    cout << "NWD_rr("<<a<<","<<b<<") = " << NWD_rr(a,b) << endl;
    cout << "NWD_oi("<<a<<","<<b<<") = " << NWD_oi(a,b) << endl;
    cout << "NWD_or("<<a<<","<<b<<") = " << NWD_or(a,b) << endl;
    cout << "NWW("<<a<<","<<b<<") = " << NWW(a,b) << endl;
    return 0;
}
int NWW(int a, int b)
{
   return (a*b)/NWD_or(a,b);
}

int NWD_ri(int a, int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int NWD_rr(int a, int b)
{
    if(b==0)
        return a;
    else
        return NWD_rr(b,a%b);
}

int NWD_oi(int a, int b)
{
    while(a!=b)
    {
        if(b>a)
            b=b-a;
        else
            a=a-b;
    }
    return a;
}

int NWD_or(int a, int b)
{
    if(a==b)
        return a;
    else if(b>a)
            return NWD_or(a,b-a);
        else
            return NWD_or(a-b,b);
}
