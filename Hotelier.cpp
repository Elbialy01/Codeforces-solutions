#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    string str ;
    int arr[10]={0,0,0,0,0,0,0,0,0,0},rooms;
    cin>>rooms>>str;

    for(int i=0;i<rooms;i++){
        if(str[i]=='L'){
            for(int j=0;j<10;j++){
                if(arr[j]==0){
                    arr[j]=1;
                    break;
                }
            }
        }
            else if(str[i]=='R'){
                for(int y=9;y>=0;y--){
                    if(arr[y]==0){
                        arr[y]=1;
                        break;
                    }
                }
            }
            else {
                int g =(int) str[i]-'0';
                arr[g]=0;
            }

    }
for(int i=0;i<10;i++){
    cout<<arr[i];
}

    return 0;
}
