#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void pokaz(int T[][4], int w, int k);
void wpisz(int T[][4], int w, int k);
void wpisz(int T[][4], int w, int k, int q);


int main()
{
    int A[2][4]={1,2,3,4,5,6,7,8};
    pokaz(A,2,4);
    wpisz(A,2,4,30);
    pokaz(A,2,4);

    return 0;
}

void pokaz(int T[][4], int w, int k)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
            cout<<T[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
}

void wpisz(int T[][4], int w, int k)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<"Podaj liczb ["<<i+1<<";"<<j+1<<"]: ";
            cin>>T[i][j];
        }
        cout<<endl;
    }
}

void wpisz(int T[][4], int w, int k, int q)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
            T[i][j]=rand()%(q+1);
        cout<<endl;
    }

}


