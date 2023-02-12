#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define ci(n) cin>>n
#define endl '\n'
int freq[1000001]={};
using namespace std ;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m,x;
  cin>>n>>m>>x;
  vector<string>v(n);
  vector<pair<float,float>>s;
  for(int i=0;i<n;i++){
    ci(v[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(v[i][j]=='S')s.push_back({i,j});
    }
  }
  unordered_map<char,int>freq;
  map<char,float>positions;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      freq[v[i][j]]++;
      if(v[i][j]!='S'){
        for(int k=0;k<s.size();k++){
                      float h=pow(s[k].first-i,2)+pow(s[k].second-j,2);

          if(positions[v[i][j]]){
            if(positions[v[i][j]]>h)positions[v[i][j]]=h;
          }
          else positions[v[i][j]]=h;
        }
      }

    }
  }
  string str;
  int g;
  cin>>g;
  ci(str);
  int res=0;
  for(int i=0;i<g;i++){
if(freq[tolower(str[i])]==0){
  cout<<-1;
  return 0;
}
    if(isupper(str[i])){
//cout<<positions[tolower(str[i])]<<endl;
if(positions[tolower(str[i])]==0){
  cout<<-1;
  return 0;
}
      if(positions[tolower(str[i])]>pow(x,2))res++;
    }
  }
 
cout<<res;



}

 
