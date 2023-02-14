#include <iostream>

using namespace std;
int szukaj(int *t, int lewy, int prawy, int szukana);


int main()
{
    int sz=10;
    int tab[]={0,1,3,4,5,6,7,8,10,11};//10
    int w=szukaj(tab,0,9,sz);
    if(w==-1)
        cout<<"nie znalezono liczby w tablicy"<<endl;
    else
        cout<<"znaleziono miejsce w tablicy na pozycji "<<w<<endl;
    return 0;
}

int szukaj(int *t, int lewy, int prawy, int szukana)
{
    if(lewy<=prawy)
    {

        int srodek=(lewy+prawy)/2;
        if(t[srodek]==szukana)
            return srodek;
        if(t[srodek]>szukana)
            return szukaj(t,lewy,srodek,szukana);
        else
            return szukaj(t,srodek,prawy,szukana);
    }
    else
        return -1;
}
