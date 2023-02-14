#include <iostream>

using namespace std;

int main()
{
    double a1,b1,a2,b2;
    cout<<"Podaj wspolczynniki 1 prostej y=ax+b ";
    cin>>a1>>b1;
    cout<<"Podaj wspolczynniki 2 prostej y=ax+b ";
    cin>>a2>>b2;

    if(a1==a2)
        cout<<"Proste sa rownolegle";
    else
        if(a1*a2==-1)
            cout<<"Proste sa prostopadle";
        else
            cout<<"Proste nie sa rownolegle ani prostopadle";
    return 0;
}
