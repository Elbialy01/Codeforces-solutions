#include <iostream>

using namespace std;

int main()
{

int n,b,aa[100];
cin>>n;
for(int i=0;i<n;i++){
    cin>>b;
    aa[b-1]=i+1;
}
for(int i=0;i<n;i++)
{


    cout<<aa[i];
if(i!=n-1)
    cout<<" ";
}
}
