#include <iostream>
#include <set>
#include <math.h>
#include <map>
#include <bits/stdc++.h>
#include <vector>
#include <string.h>

using namespace std;


int main()
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
int t;
cin>>t;

while(t--){
int n;
cin>>n;
vector<string>v;
map<string,int>m;
string s;
for(int i=0;i<n;i++){
    cin>>s;
    v.push_back(s);
    m.insert({s,1});
}
for(int i=0;i<n;i++){
        int found;
string x,y;
        for(int j=0;j<v[i].length();j++){
                x=v[i].substr(0,j);
        y=v[i].substr(j,v[i].length());

            if(m[x]&&m[y])
                break;
        }
if(m[x]&&m[y])
    cout<<1;
else cout<<0;
    }
cout<<endl;
}


    return 0;
}
