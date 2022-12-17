#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
int n;
cin>>n;
int m=n;
int counter=0;
while(m%2==0){
    counter++;
    m/=2;
}
if(counter){
    cout<<2<<" "<<counter<<endl;
    counter=0;
}
for(int i=3;i<=n;i+=2){
    while(m%i==0){
    counter++;
    m/=i;
}
if(counter){
    cout<<i<<" "<<counter<<endl;
    counter=0;
}

}

    return 0;
}
