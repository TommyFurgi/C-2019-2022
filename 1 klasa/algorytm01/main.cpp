#include <iostream>

using namespace std;

int main()
{   int a=-4;
    while(a<=14)
    {
        if(a!=2 && a!=8)
        {
            cout<<a<<" ";
        }
        a+=3;
    }
    return 0;
}
