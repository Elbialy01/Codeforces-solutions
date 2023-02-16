#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define ci(n) cin>>n
#define endl '\n'
#define ll long long
int freq[1000001]={};
using namespace std ;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
ll n;
ci(n);
ll x,y;
map<pair<ll,ll>,ll>m;
unordered_map<ll,ll>m1,m2;
for(int i=0;i<n;i++){
    cin>>x>>y;
    m1[x]++;
    m2[y]++;
    pair<ll,ll>p={x,y};
    m[p]++;
}
ll res=0;
/*if(m.size()==1){
    cout<<(n-1)*n/2;
    return 0;
}*/
for(auto it:m1){
    ll i=(it.second-1)*(it.second)/2;
    res+=i;
}
for(auto it:m2){
    ll i=(it.second-1)*(it.second)/2;
    res+=i;
}
for(auto it:m){
  ll i=(it.second-1)*(it.second)/2;    res-=i;
}
cout<<res;

  }



 
