#include <iostream>

using namespace std;

struct osoba
{
    string nazwisko;
    int wiek;
    int oceny[3];
};

int main()
{
    osoba T[5];
    T[0].nazwisko="Kowalski";
    T[0].wiek=12;
    T[0].oceny[0]=1;
    T[0].oceny[1]=4;

    T[1].nazwisko="Nowak";
    T[1].wiek=12;
    T[1].oceny[0]=5;
    T[1].oceny[1]=6;

    cout<<T[0].nazwisko<<", lat "<<T[0].wiek<<endl;
    cout<<"oceny: ";
    for(int i=0; i<3; i++)
        if(T[0].oceny[i]>=1 && T[0].oceny[i]<=6)
            cout<<T[0].oceny[i]<<" ";
    cout<<endl<<endl;
    cout<<T[1].nazwisko<<", lat "<<T[1].wiek<<endl;
    cout<<"oceny: ";
    for(int i=0; i<3; i++)
        if(T[1].oceny[i]>=1 && T[1].oceny[i]<=6)
            cout<<T[1].oceny[i]<<" ";


    return 0;
}

