#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
int n,x;
cin>>n>>x;
set<int>s;

for(int i=2;i<=n;i++){
    if(x%i==0&&x/i<=n)
        s.insert(i);
}
if(n>=x)
cout<<s.size()+1;
else
cout<<s.size();



    return 0;
}
