#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   if(a==1&&b==1){
    cout<<2;
    return 0;
   }
   int hours=a;
   while(a>=b){


    a-=b;
    a++;
    hours++;


   }
   cout<<hours;
    return 0;
}
