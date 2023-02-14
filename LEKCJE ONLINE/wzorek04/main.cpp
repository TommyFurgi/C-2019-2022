#include <iostream>

using namespace std;

int main()
{
    int n=1, i=1, a=3,m;

    do
    {
        do
        {
            i++;
            cout<<"*";
        }while(i<=n);


        do
        {
           a--;
           cout<<"/";
        }while(a>=n);

        i=1;

        if(n%2==0)
        {
            m=4;
        }
        else
        {
            m=2;
        }


        do
        {
           cout<<"$";
           i++;
        }while(i<=m);

        a=3;
        i=1;
        n++;
    }while(n<=3);


    return 0;
}
