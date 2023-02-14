#include <iostream>
#include <cmath>

using namespace std;
string DEC2SYS(int d, int p);
int SYS2DEC(string s, int p);

string BIN2OH(string s, int p);
string OH2BIN(string s, int p);



int main()
{
    /*
    //kod ascii
    int a=68;
    char z='A';
    cout << a <<" "<<(char)a<< endl;
    cout << z <<" "<<(int)z<< endl;


    //'A' - 10
    //'B' - 11
    //'3' - 3
    z='B';
    cout<<z-'A'+10<<endl;
    a=10;
    cout<<char(a+'A'-10)<<endl;

    int d,p;
    string s;
    cout<<"Liczba: "<<endl;
    cin>>d;
    cout<<"podstawa: "<<endl;
    cin>>p;
    s=DEC2SYS(d,p);
    cout<<d<<" w systemie "<<p<<" to: "<<s;


    int d,p;
    string s;

    d=36;

    for(int i=2;i<36;i++)
        cout<<d<<" (10) = "<<DEC2SYS(d,i)<<"("<<i<<")"<<endl;

        */

        //cout<<BIN2OH("101001101111001",8)<<endl;
        //cout<<BIN2OH("101001101111001",16)<<endl;
        cout<<OH2BIN("157302",8)<<endl;

    return 0;
}

string OH2BIN(string s, int p)
{
    int k;
    if(p==8)
        k=3;
    else
        k=4;
    int d=0;
    for(int i=0;i<s.size();i++)
        if(s[i]<='9')
            d=d*p+s[i]-'0';
        else
            d=d*p+s[i]-'A'+10;
    string m="";
    int reszta;
    while(d>0)
    {
        reszta=d%2;
        if(reszta<=9)
            m=char(reszta+'0')+m;
        else
            m=char(reszta+'A'-10)+m;
        d=d/2;
    }
    return m;

}

string BIN2OH(string s, int p)
{
    //return DEC2SYS(SYS2DEC(s,2),p);
    int k;
    if(p==8)
        k=3;
    else
        k=4;
    string d="";
    int a=0, i=1;
    while(i<=s.size())
    {
        for(int l=0;l<k;l++)
        {
            if(s[s.size()-i]=='1')
            {
                a=pow(2,l)+a;
            }
            i++;
        }
        if(a<=9)
            d=char(a+'0')+d;
        else
            d=char(a+'A'-10)+d;
        a=0;
    }
    return d;
}



int SYS2DEC(string s, int p)
{
    int d=0;
    for(int i=0;i<s.size();i++)
        if(s[i]<='9')
            d=d*p+s[i]-'0'; //jest liczba
        else
            d=d*p+s[i]-'A'+10; // jest litera
    return d;
}


string DEC2SYS(int d, int p)
{
    string s="";
    int reszta;
    while(d>0)
    {
        reszta=d%p;
        if(reszta<=9)
            s=char(reszta+'0')+s;
        else
            s=char(reszta+'A'-10)+s;
        d=d/p;
    }
    return s;
}
