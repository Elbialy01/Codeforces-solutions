#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#define ll long long
using namespace std;


int main()
{
	int n, b,days=0,y=1;
	multiset<int>m;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> b;
		m.insert(b);
	}
	for(auto it:m){
        if(it>=y){
            days++;
            y++;
        }
	}
	cout << days;
}
