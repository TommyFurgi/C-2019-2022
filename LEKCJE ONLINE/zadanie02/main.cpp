#include <iostream>

using namespace std;

int main()
{   int a, s=0;
    cout << "podaj liczbe ";
    cin>>a;
    while(a<=50)
    {
        s=a+s;
        cout<<"podaj liczbe ";
        cin>>a;
    }
    cout<<"suma podanych liczb mniejszych niz 50 wynosi "<<s;
    return 0;
}
