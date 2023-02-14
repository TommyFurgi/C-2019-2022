#include <iostream>

using namespace std;
void min_max_1(int *t, int n, int &minEl, int &maxEl);
void min_max_2(int *t, int n, int &minEL, int &maxEL);
void min_max_3(int *t, int lewy, int prawy, int &minEL, int &maxEL);

int main()
{
    int tab[]={5,-1,5,8,3,44,13,53,23,54,21};//11
    int a,b;
    //min_max_2(tab,11,a,b);
    min_max_3(tab,0,10,a,b);
    cout<<"min= "<<a<<endl;
    cout<<"max= "<<b<<endl;
    return 0;
}
void min_max_3(int *t, int lewy, int prawy, int &minEL, int &maxEL)
{
    if(lewy==prawy)
    {
        minEL=t[lewy];
        maxEL=t[lewy];
        return ;
    }
    if(prawy-1==lewy)
    {
        minEL = t[lewy]<=t[prawy] ? t[lewy]:t[prawy];
        maxEL = t[lewy]>t[prawy] ? t[lewy]:t[prawy];
        return ;
    }
    int srodek=(lewy+prawy)/2;
    int minEL1, minEL2, maxEL1, maxEL2;
    min_max_3(t,lewy,srodek,minEL1,maxEL1);
    min_max_3(t,srodek+1,prawy,minEL1,maxEL2);
    minEL= minEL1<minEL2 ? minEL1:minEL2;
    maxEL= maxEL1>maxEL2 ? maxEL1:maxEL2;
}


void min_max_2(int *t, int n, int &minEL, int &maxEL)
{
    int dl = n&2==1 ? n-1:n;
    if(t[0]<t[1])
    {
        minEL = t[0];
        maxEL = t[1];
    }
    else
    {
        minEL = t[1];
        maxEL = t[0];
    }
    for(int i=2;i<dl;i+=2)
    {
        if(t[i]<t[i+1])
        {
            if(t[i]<minEL) minEL = t[i];
            if(t[i+1]>maxEL) maxEL = t[i+1];
        }
        else
        {
            if(t[i]>maxEL) maxEL = t[i];
            if(t[i+1]<minEL) minEL = t[i+1];
        }
    }
    if(n%2==1)
    {
        if(t[n-1]<minEL) minEL = t[n-1];
        if(t[n-1]>maxEL) maxEL = t[n-1];
    }
}


void min_max_1(int *t, int n, int &minEl, int &maxEl)
{
    minEl=t[0];
    maxEl=t[0];

    for(int i=0;i<n;i++)
    {
        if(t[i]<minEl)
            minEl=t[i];
        if(t[i]>maxEl)
            maxEl=t[i];
    }

}

