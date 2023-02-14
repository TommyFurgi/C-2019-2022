#include <iostream>

using namespace std;

int main()
{   /* to by³o
    int n,l;
    cout<<"podaj liczby ";
    cin>>n>>l;

    if(n>l)
    {
        cout<<n<<" jest wieksze od"<<l<<endl;
    }
    else
    {
        if(l>n)
        {
            cout<<l<<" jest wieksze od "<<n<<endl;
        }
    }

    */
    int a;
    cout<<"ile razy? ";
    cin>>a;

    int i=1;

    while(i<=a)
    {
        cout<<"test "<<i<<endl;
        i++; //postinkrementacja
    }

    cout<<"koniec";

    return 0;
}
