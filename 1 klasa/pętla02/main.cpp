#include <iostream>

using namespace std;

int main()
{

    int i=1;
    while(i<=10)
    {
        if(i%2==0 && i!=4)
        {
            cout<<"*";
        }
        else
        {
           if(i==4)
           {
               cout<<"4";
           }
           else
           {
                cout<<"@";
           }
        }
        i++;
    }

    return 0;
}
