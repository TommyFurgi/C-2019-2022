#include <iostream>

using namespace std;
int x;
int n=1;
int z;
int main()
{
    cout << "podaj liczbe: " << endl;
    cin >> z;
    if(z>0)
    {
        cout << "liczba "  << z << " jest dodatnia" << endl;
    }
    else
    {
        if(z<0)
        {
            cout << "liczba "  << z <<  " jest ujemna"<< endl;
        }
        else
        {
            cout << z <<"=0" << endl;
        }
    }

    cout<<"Podaj liczbe naturalna: ";
    cin>>x;
    while(n<=x)
    {
        cout<<n<<" "<<endl;
        n++;
    }

    cout << "koniec pracy progrmu" << endl;
    return 0;
}
