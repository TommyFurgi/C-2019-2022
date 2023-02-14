#include <iostream>

using namespace std;

int main()
{
    int i=1;
    while(i<=18)
    {
        if(i%3==1)
        {
            cout<<"*";
        }
        else
        {
            if(i%3==2)
            {
                cout<<"-";
            }
            else
            {
                cout<<"/";
            }
        }
        i++;
    }
    return 0;
}
