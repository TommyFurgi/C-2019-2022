#include <iostream>

using namespace std;

int main()
{   int n, i=1, s=3;
    cout<<"ile liczb ma znalezc sie w ciagu? ";
    cin>>n;
    while(i<=n)
    {
        i++;
        cout << s <<", ";
        s=s*2;
    }
    return 0;
}
