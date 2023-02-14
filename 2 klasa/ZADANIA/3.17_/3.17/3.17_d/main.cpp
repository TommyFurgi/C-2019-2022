#include <iostream>

using namespace std;
double funkcja_D(int n);

int main()
{
    int n;
    cin>>n;
    cout<<funkcja_D(n);
    return 0;
}

double funkcja_D(int n)
{
    double w=0;
    if(n>0)
    {
        w=0.3;
        for(int i=1;i<n;i++)
            w*=(-2);
    }

    return w;
}
