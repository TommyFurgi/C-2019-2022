#include <iostream>

using namespace std;

int main()
{
   for(int n=1; n<=5; n++)
   {
       for(int i=1; i<=n; i++)
       {
           cout<<"#";
       }

       for(int a=1; a<=n; a++)
       {
           cout<<"*";
       }

       if(n%2==0)
       {
           cout<<"/";
       }
       else
       {
           cout<<"^";
       }
   }



    return 0;
}
