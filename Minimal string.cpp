#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    string s;
    int arr[26];
    stack<char>st;
    queue<char>q;
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    cin>>s;
    int j=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        arr[(s[i]-'a')]++;
    }

    for(int i=0;i<26;i++){
        if(arr[i]>0){
            char b=(char)(i+'a');
            while(!st.empty()){
                if(st.top()<=b){
                    q.push(st.top());
                   st.pop();

                }
                else break;
            }
            for( j;j<n;){
            if(arr[i]==0){
                    break;
            }
                if(s[j]!=b&&arr[i]>0){
                    st.push(s[j]);
                    arr[(s[j]-'a')]--;
                    j++;
                }
                else if(b==s[j]) {
                    q.push(b);
                    arr[i]--;
                    j++;
                }

        }
    }
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}
