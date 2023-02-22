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
int n,k;
cin>>n>>k;
vector<ll>v1(n),v2(n);
for(int i=0;i<n;i++){
  ci(v1[i]);
}
for(int i=0;i<n;i++){
  ci(v2[i]);
}
ll l =0,hi=2000000000;
ll m;
  ll  mag;

while(hi>=l){
  mag=0;
  m=(l+hi)/2;
  for(int i=0;i<n;i++){
  ll g=m*v1[i];
    if(g>v2[i])
    mag+=(g-v2[i]);
    if(mag>k)break;
  }

  if(mag==k){
    break;
  }
  else if(mag>k)hi=m-1;
  else l=m+1;
}

if(mag>k){
  while(m--){
            mag=0;
      for(int i=0;i<n;i++){
  ll g=m*v1[i];
    if(g>v2[i])
    mag+=(g-v2[i]);
    if(mag>k)break;
  }
  if(mag<=k)break;

  }

}
cout<<m;
  }

