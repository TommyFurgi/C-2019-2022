#include <iostream>

using namespace std;

int main()
{
    int n, i=5;
    long w=1;
    cout<<"wprowadz liczbe od 5 ";
    cin>>n;
    while(i<=n)
    {
        w*=i; //w=w*i;
        i++; //i=i+1;
    }
    cout << w << endl;
    /*
    int n, i;
    long w=1;
    cout<<"wprowadz liczbe od 5 ";
    cin>>n;
    for(i=5;i<=n;i++)
        w*=i; //w=w*i;

    cout << w << endl;
    */
    return 0;
}
