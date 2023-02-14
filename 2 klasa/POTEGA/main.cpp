#include <iostream>

using namespace std;
long double potega(double x, int n);
long double potega_iteracyjnie(double x, int n);

int main()
{
    cout<<potega(5,8)<<endl;
    cout<<potega_iteracyjnie(2,3)<<endl;
    return 0;
}

long double potega(double x, int n)
{
    if(n==0)
        return 1;
    else
        return potega(x,n-1)*x;
}

long double potega_iteracyjnie(double x, int n)
{
    int w=1;
    for(int i=0;i<n;i++)
       w*=x;
    return w;
}
