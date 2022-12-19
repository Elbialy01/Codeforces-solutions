#include <iostream>
#include <set>
#include <math.h>
#include <map>
#include <bits/stdc++.h>
#include <vector>

using namespace std;


int main()
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long l,r;
  cin>>l>>r;
  long long p=0;
  cout<<"YES"<<endl;
  for(int i=0;i<((r-l+1)/2);i++){
    cout<<l+p<<" "<<l+p+1<<endl;
    p+=2;
  }



    return 0;
}
