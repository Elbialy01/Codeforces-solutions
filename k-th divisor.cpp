#include <iostream>
#include <set>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<long long>s;
long long n ,k,counter=0;
cin>>n>>k;
int j;
for(long long  i=1;i<=sqrt(n);i++){
    if(n%i==0){
        counter++;
        s.insert(i);
        s.insert(n/i);


    }
}
if(s.size()>=k)
    for(auto it:s){
        k--;
        if(k==0){
            cout<<it;
        }
    }
else cout<<-1;

}




