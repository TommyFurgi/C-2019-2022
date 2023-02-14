#include <iostream>

using namespace std;

int main()
{
    double s=0.0, a=0.0;
    /*
    while(a<=50)
    {
        cout<<"podaj liczbe rzeczywista ";
        s+=a;
        cin>>a;
    }
    */
    // to samo
    while(a<=50)
    {
        cout<<"podaj liczbe rzeczywista ";
        cin>>a;
        if(a<=50)
        {
          s+=a;
        }
    }

    cout<<s<<endl;

    return 0;
}
