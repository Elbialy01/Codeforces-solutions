#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int n = s.length();
	stack<char>x;
	x.push(s[0]);
	for (int i = 1;i < n;i++) {
		if (!x.empty()&&x.top() == s[i]) {
			x.pop();
		}
		else x.push(s[i]);	
	}
	if (x.size() == 0)
		cout << "Yes";
	else cout << "No";
}
