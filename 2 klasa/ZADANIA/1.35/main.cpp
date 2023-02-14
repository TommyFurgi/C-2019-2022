#include <iostream>

using namespace std;
double funkcja(int n);
double funkcja1(int n);
double b(int n);
double c(int n);
double d(int n);

int main()
{
    cout<<funkcja(4)<<endl;
    cout <<funkcja1(5)<< endl;
    return 0;
}

double funkcja(int n)
{
    if(n==1)
        return 2;
    else
        return (3*funkcja(n-1)+0.5);

}

double funkcja1(int n)
{
    if(n>3)
        return funkcja1(n-3)+2*funkcja1(n-1);
    else if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 3;

}

double b(int n)
{
    if(n==1)
        return 0.5;
    else if(n==2)
        return 1;
    else
        return 3*b(n-2)+b(n-1);
}

double c(int n)
{
    if(n==1)
        return 2;
    else if(n==2)
        return -4;
    else
        return c(n-2)+2*c(n-1)+0.5;

}

double d(int n)
{
    if(n==1)
        return -1.5;
    else if(n==2)
        return 0;
    else if(n==3)
        return 1.5;
    else
        return 2*d(n-3)+d(n-2)-d(n-1);
}
