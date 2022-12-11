#include <iostream>

using namespace std;

int main()
{
int a,b,c,counter=0;
cin>>c;
while(c--){
    cin>>a>>b;
    if(b-a>=2){
        counter++;
    }
}
cout<<counter;
}
