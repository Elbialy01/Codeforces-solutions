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
string s;
ci(s);
stack<char>st;
int res=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='(')st.push(s[i]);
    else if(!st.empty())st.pop(),res+=2;
}
cout<<res;
}

 
