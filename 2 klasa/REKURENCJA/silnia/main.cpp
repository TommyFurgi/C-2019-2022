#include <iostream>

using namespace std;
int silnia(int n);
int silniaR(int n);


int main()
{

    cout<<silniaR(3);
    return 0;
}

int silnia(int n)
{
    int w=1;
    for(int i=1;i<=n;i++)
        w*=i;
    return w;
}

int silniaR(int n)
{
    if(n==0)
        return 1;
    else
        return silniaR(n-1)*n;
}

