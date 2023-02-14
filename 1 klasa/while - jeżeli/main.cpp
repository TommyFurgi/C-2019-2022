#include <iostream>

using namespace std;

int main()
{   int n=10;
    while(n<=100)
    {
        cout<<n<<" "<<endl;
        n=n+10;
    }
   int a=1;
   while(a<=200)
   {
       if(a%3==0) /*reszta z dzielenia przez 3 wyniesie 0*/
       {
           cout<<a<<" "<<endl;
       }
        a=a+1;
   }


    return 0;
}
