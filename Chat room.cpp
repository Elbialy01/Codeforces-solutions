#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
   cin>>s;
    int n=s.length();
   vector<char>v;
   for(int i=0;i<n;i++)
    v.push_back(s[i]);
    string st="hello";
   int c=0;
   auto it=v.begin();
    for(int i=0;i<5;i++){
            if(!v.empty()){
        for(;it!=v.end();){
            if(*it!=st[i]){

it++;

            }
            else {
                c++;
                it++;
                break;
            }
        }
            }
    }
  if(c==5)
    cout<<"YES";
  else cout<<"NO";



    return 0;
}
