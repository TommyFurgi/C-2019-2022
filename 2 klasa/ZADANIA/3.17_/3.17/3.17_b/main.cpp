#include <iostream>
#include <cmath>

using namespace std;
double funkcja_B(int n);

int main()
{
    int n;
    cin>>n;
    cout<<"Suma ciagu wynosi: "<<funkcja_B(n)<<endl;

    return 0;
}

double funkcja_B(int n)
{
    double suma=0;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            double mianownik=pow(3,i-1);
            suma+=(-5.0)/(mianownik*1.0);
        }
        return suma;
    }
    return 0;
}
