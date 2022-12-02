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
	int n,b;
	multiset<int>s1;
	multiset<int>s2;
	multiset<int>s3;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> b;
		s1.insert(b);
	}
	for (int i = 0;i < n-1;i++) {
		cin >> b;
		s2.insert(b);
	}
	for (int i = 0;i < n-2;i++) {
		cin >> b;
		s3.insert(b);
	}
	int done = 0;
	auto v = s1.begin();
	for (auto it:s2) {
		if (it != *v) {
			cout << *v;
			done = 1;
			break;
		}
		else v++;
		
		
	}
	if (!done) {
		cout << *v;
	}
	done = 0;
	cout << endl;
	auto c = s2.begin();
	for (auto it : s3) {
		if (it != *c) {
			cout << *c;
			done = 1;
			break;
		}
		else c++;
	

	}
	if (!done) {
		cout << *c;
	}
}
