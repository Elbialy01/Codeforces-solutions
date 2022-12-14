#include <iostream>
#include <math.h>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
int n,a,b;
cin>>n;
multimap<int,int>m;
set<int>s;
for(int i=0;i<n;i++){
  cin>>a>>b;
  m.insert({a,b});

}
int counter=0;
auto jt=m.begin();
//cout<<m.size()<<endl;
for(auto it=m.begin();it!=m.end();it++){
       if(jt->first==it->first&&jt->second==it->second)
        counter++;
       else{
        s.insert(counter);
        counter=1;
        jt=it;
       }

}
s.insert(counter);
auto it=s.end();
it--;
cout<<*it;

    return 0;
}
