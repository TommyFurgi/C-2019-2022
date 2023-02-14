#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x0,y0,a,b,d,A,B,C;
    cout<<"Podaj wspolczynniki prostej y=ax+b ";
    cin>>a>>b;
    cout<<"Podaj wspolrzedne punktu P(x,y): ";
    cin>>x0>>y0;

    A=a;
    B=-1;
    C=b;

    d = (A*x0 + B*y0 + C)/sqrt(A*A + B*B);
    cout<<d;
    return 0;
}
