#include <iostream>

using namespace std;
bool funkcja_C(int a, int b);

int main()
{
    int a, b;
    cin>>a>>b;

    if(funkcja_C(a,b)==true)
        cout<<"wyrazenie jest wieksze od 0 ";
    else
        cout<<"wyrazenie nie jest wieksze od 0";
    return 0;
}

bool funkcja_C(int a, int b)
{
    if((2*a-b)>0)
        return true;
    else
        return false;
}
