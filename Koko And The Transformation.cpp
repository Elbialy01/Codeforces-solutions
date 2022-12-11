#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sum1=0,sum2=0;
    cin>>a>>b;
    while(a--){
        cin>>c;
        sum1+=c;
    }
        while(b--){
        cin>>c;
        sum2+=c;
    }
    if(sum1==sum2)
        cout<<"Yes";
        else cout<<"No";
    return 0;
}
