#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t,a,n;
    queue<int>q;
    cin>>t;
    while(t--){
        cin>>a>>n;
        if(a==1){
            q.push(n);
        }
        else if(q.empty()){
            cout<<"no"<<endl;
        }
        else if(a==2&&!q.empty()&&n==q.front()){
            cout<<"yes"<<endl;
            q.pop();
        }
        else {
            cout<<"no"<<endl;
            q.pop();
        }
    }

    return 0;
}
