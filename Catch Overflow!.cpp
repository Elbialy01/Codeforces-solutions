#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


int main()
{
	int l;
	string m;
	int y;
	deque<int>s;
	stack<unsigned long long int>q;
	unsigned long long int  x = 0,p=1;
	cin >> l;
	while (l--) {

		cin >> m ;
		if(m=="for"){
            cin>>y;
            if(q.size()){
                  unsigned  long long int  k=pow(2,32);
                q.push(min(y*q.top(),k));
            }
            else q.push(y);
           
		}
		else if (m == "add" && q.empty()) {
			x++;
		}
		else if (m == "add") {

			x+=q.top();
			 if(x>=pow(2,32)){
                    cout<<"OVERFLOW!!!";
                    return 0;
			 }
		}
		else if (m == "end") {
                q.pop();

		}
	}
	if(x>=pow(2,32)){
        cout<<"OVERFLOW!!!";
	}
	else cout<<x;

	}
