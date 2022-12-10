#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#include <bits/stdc++.h>
#include <ctype.h>
#define ll long long

using namespace std;



int main()
{
string s,t;
getline(cin,s);
int n=s.length(),b;
for(int i=0;i<n;i++){
   if(isalpha(s[i])){
    t.push_back(s[i]);
    b=0;
   }
   else if(s[i]==' '&&b==0){
    t.push_back(s[i]);
    b=1;
   }
   else if(s[i]==','||s[i]=='.'||s[i]=='?'||s[i]=='!'||s[i]=='"'){
    if(b==1)
        t.pop_back();
    t.push_back(s[i]);
    t.push_back(' ');
    b=1;
   }
}
cout<<t;

}
