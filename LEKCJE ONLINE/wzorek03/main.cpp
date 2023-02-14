#include <iostream>

using namespace std;

int main()
{   int j=6, i=1, n=1;

    while(i<=j)
    {
        cout<<"*";
        if(i%2==1)
        {
            while(n<=i)
            {
                cout<<"/";
                n++;
            }
        }
        else
        {
            while(n<=i)
            {
                cout<<"-";
                n++;
            }
        }

        i++;
        n=1;
    }





    return 0;
}
