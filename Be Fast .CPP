#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t , a ,r,b,g;    
        cin>>a>>r>>b;
        if(a%b==0){
                g=r/b-a/b+1;
        cout<<abs((r-a)+1-g)<<endl;
        }
        else{
            g=r/b-a/b;
        cout<<(r-a)+1-g<<endl;
        }
    return 0;
}
