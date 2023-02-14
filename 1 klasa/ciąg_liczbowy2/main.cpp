#include <iostream>

using namespace std;

int main()
{
    int n, i=1, a=-2;
    cout<<"ile liczb ma znalezc sie w ciagu? ";
    cin>>n;
    while(i<=n)
    {
        cout<<a<<", ";
        a=a*(-2);
        i++;
    }
    return 0;
}
