#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;
int isprime(int n){

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[3000];
    arr[0]=2;
    int p=1;
    for(int i=3;i<=3000;i+=2){
        if(isprime(i)){
            arr[p]=i;
            p++;
        }
    }

    int n;
    int counter=0,c=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        for(int j=0;j<p;j++){
            if(i%arr[j]==0){
                counter++;

            }
        }
        if(counter==2){
            c++;
        }
        counter=0;
    }

cout<<c;
    return 0;
}
