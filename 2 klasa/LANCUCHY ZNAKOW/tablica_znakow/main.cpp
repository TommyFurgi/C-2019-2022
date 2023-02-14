#include <iostream>
#include <cstring>


using namespace std;
void zmien(char *t, int a, int b);
void zmien(char *t, char a, char b);

int main()
{
    char tab[20]="informatyka";
    cout<<tab<<endl;
    int dlugosc = strlen(tab);
    cout<<dlugosc<<endl;
    cout<<tab[0]<<endl;
    zmien(tab,'a','x');
    cout<<tab<<endl;
    return 0;
}

void zmien(char *t, int a, int b)
{
    char pom = t[a];
    t[a]=t[b];
    t[b]=pom;
}
void zmien(char *t, char a, char b)
{
    for(int i=0;i<strlen(t);i++)
        if(t[i]==a)
            t[i]=b;
}
