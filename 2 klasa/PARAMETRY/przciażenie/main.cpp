#include <iostream>

using namespace std;

long silnia(int n);
long suma(int n);
double wyrazenie(int x, int y);

int main()
{
    cout<<wyrazenie(1,1)<<endl;
    cout<<wyrazenie(2,1)<<endl;
    cout<<wyrazenie(1,2)<<endl;
    cout<<wyrazenie(2,3)<<endl;
    cout<<wyrazenie(3,2)<<endl;
    return 0;
}
long silnia(int n)
{
    long w=1;
    for(int i=1;i<=n;i++)
    {
        w*=i;
    }
    return w;
}
long suma(int n)
{
    long w=0;
    for(int i=1;i<=n;i++)
    {
        w+=i;
    }
    return w;
}
double wyrazenie(int x, int y)
{
    double w;
    w=(1.0*silnia(x) + 1.0*silnia(y))/(1.0*suma(y));
    return w;
}
