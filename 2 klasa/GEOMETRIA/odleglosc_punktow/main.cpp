#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,y1,x2,y2,d;
    cout<<"Podaj wspolrzedne 1 punktu ";
    cin>>x1>>y1;
    cout<<"Podaj wspolrzedne 2 punktu ";
    cin>>x2>>y2;
    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<d;
    return 0;
}
