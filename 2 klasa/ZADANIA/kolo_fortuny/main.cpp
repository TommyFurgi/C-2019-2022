#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;
int stawka(int n);
void generuj_poczatkowe_haslo(char wyraz[]);
int warunek(char haslo[], char wyraz[]);
int zamien(char wyraz[], char litera, char haslo[]);

int main()
{
    int odp_poprwna=0,odp_bledna=0,ilosc_prob=0;
    int stawka1=0;
    int konto=0;
    char haslo[20]="ALA MA KOTA";
    char wyraz[20]="ALA MA KOTA";
    generuj_poczatkowe_haslo(wyraz);
    char litera;
    for(int i=0;i<100;i++)
    {
        int trafiona_liczba=0;
        stawka1=0;
        if(warunek(haslo,wyraz)==1)
        {
            cout<<"TWOJE KONTO: "<<konto<<endl;
            cout<<"HASLO: "<<endl;
            cout<<wyraz<<endl;
            cout<<"STAWKA O KTORA GRASZ TO: "<<endl;
            if(stawka(0)==0)
            {
                cout<<"BANKRUT TRACISZ WSZYSTKIE PUNKTY"<<endl;
                konto=0;
            }
            else
                stawka1=stawka(0);
                cout<<stawka1<<endl;
                cout<<"PODAJ LITERE: "<<endl;
                cin>>litera;
                ilosc_prob++;
                trafiona_liczba=zamien(wyraz,litera,haslo);
                if(trafiona_liczba>0)
                {
                    cout<<"TRAFILES "<<trafiona_liczba<<" LITERY"<<endl;
                    odp_poprwna++;
                }
                else
                {
                    cout<<"TEJ LITERY NIE MA W HASLE"<<endl;
                    odp_bledna++;
                }
                konto+=(trafiona_liczba*stawka1);
                cout<<'+'<<endl<<'+'<<endl<<'+'<<endl<<'+'<<endl;
        }
    }
    cout<<"BRAWO ZGADLES HASLO: "<<endl<<haslo<<endl<<"TWOJ STAN KONRTA WYNOSI: "<<konto<<endl;
    cout<<"MIALES "<<ilosc_prob<<" PROB W TYM "<<odp_poprwna<<" POPRAWNYCH ODP i "<<odp_bledna<<" BLEDNYCH ODP";
    return 0;
}

int warunek(char haslo[], char wyraz[])
{
    for(int i=0;i<strlen(haslo);i++)
        if(wyraz[i]=='*')
            return 1;

    return 0;
}

int stawka(int n)
{
    srand(time(NULL));
    int stawka1;
    stawka1=rand()%11;
    return stawka1*10;
}

void generuj_poczatkowe_haslo(char wyraz[])
{
    for(int i=0;i<strlen(wyraz);i++)
        if(wyraz[i]!=' ')
            wyraz[i]='*';
}

int zamien(char wyraz[], char litera, char haslo[])
{
    int trafiona_liczba=0;
    for(int i=0;i<strlen(wyraz);i++)
        if(haslo[i]==litera)
        {
            wyraz[i]=litera;
            trafiona_liczba++;
        }

    return trafiona_liczba;
}
