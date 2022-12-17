#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
string n;
cin>>n;
int s=n.length();
for(int i=0;i<s;i++){
    if(n[i]=='0'){
        cout<<"YES"<<endl;
        cout<<0;
        return 0;
    }
    if(n[i]=='8')
    {
        cout<<"YES"<<endl;
        cout<<8;
        return 0;
    }
}
int arr[101];
for(int i=0;i<s;i++){
    int b=(int)(n[i]-'0');
    arr[i]=b;

}
for(int i=0;i<s;i++){
        int a=0;
        int y=arr[i];
        if(y%8==0){
            cout<<"YES"<<endl;
            cout<<y;
            return 0;
        }


        for(int j=i+1;j<s;j++){
            if(i!=j){
                    int b=arr[i]*10+arr[j];
            if(b%8==0){
                cout<<"YES"<<endl;
                cout<<b;
                return 0;
            }


            for(int k=j+1;k<s;k++){
                if(k!=i&&k!=j){
                   a=arr[i]*100+arr[j]*10+arr[k];
                    if(a%8==0){
                        cout<<"YES"<<endl;
                        cout<<a;
                        return 0;
                    }
                }

            }
        }

        }

}
cout<<"NO";

    return 0;
}
