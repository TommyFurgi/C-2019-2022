#include <iostream>

using namespace std;
void hanoi(int n, char X, char Y, char Z);

int main()
{
    hanoi(3,'A','C','B');
    return 0;
}

//n-liczba krazkow
//pierszy znak- znak wieza zrodlwa
//drugi - wieza docelowa
//trzeci - wieza pomocnicza
//hanoi(3,'A','C','B')- orzenies 3 krazki z wiezy a na wieze c wykorzystujac wieze b
void hanoi(int n, char X, char Y, char Z)
{
    if(n>0)
    {
        hanoi(n-1,X,Z,Y);
        cout<<"przenis krazek z "<<X<<" na "<<Y<<endl;
        hanoi(n-1,Z,Y,X);

    }
}

