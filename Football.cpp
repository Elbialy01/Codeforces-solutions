#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int a=0,b=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
            if(a==7||b==7){
                break;
            }
        if(str[i]=='0'){
                b=0;
                a++;


        }
        else {
            b++;
            a=0;
        }
    }
    if(a>=7||b>=7){
        cout<<"YES";
    }
    else cout<<"NO";

        return 0;
}
