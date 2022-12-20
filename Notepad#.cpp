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
  string s;
  int n;
  int t;
  cin>>t;
  while(t--){
        int done=0;
  cin>>n>>s;
for(int i=n-1;i>=0;i--){
        if(done)
        break;
    for(int j=0;j<i-2;j++){
        if(s[i-1]==s[j]&&s[i]==s[j+1])
        {
            done=1;
            break;
        }
    }
}
  if(!done)
  cout<<"NO";
else cout<<"YES";
  cout<<endl;
  }
    return 0;
}
