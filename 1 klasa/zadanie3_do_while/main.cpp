#include <iostream>

using namespace std;

int main()
{   int n, i=1, s=0;
    cout << "podaj liczbe"<<endl;
    cin >> n;
    do
    {
        s=s+i;
        i++;
    }
    while(i<=n);
    cout<< s;
    return 0;
}
