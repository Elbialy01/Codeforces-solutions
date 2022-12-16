#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int y=n*a;
    int sum=0;
    while(n>=m){
        sum+=b;
        n-=m;
    }
    if(b<a*n){
        sum+=b;
    }
    else
    {

        while(n>0){
            sum+=a;
            n--;
        }
    }
    if(sum>y){
        cout<<y;
    }
    else cout<<sum;


    return 0;
}
