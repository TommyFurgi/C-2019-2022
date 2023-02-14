#include <iostream>

using namespace std;
int a(int n);
int e(int n);
double d(int n);
int j(int n);

int main()
{
    cout <<d(6)<< endl;
    cout <<j(6)<< endl;
    return 0;
}

int a(int n)
{
    if(n==1)
        return 4;
    else
        return a(n-1)+3;
}

int e(int n)
{
    if(n==1)
        return 3;
    else if(n==2)
        return 5;
    else
        return e(n-2)+1;
}

double d(int n)
{
    if(n==1)
        return -10;
    else
        return d(n-1)*(-0.5);
}

int j(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2==1)
        return j(n-2)-1;
    else if(n%2==0)
        return j(n-2)+1;
}
