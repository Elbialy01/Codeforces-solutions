#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#define ll long long

using namespace std;



int main()
{
	int n,a;
	multiset<int>s;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		s.insert(i);
	}
	int q;
	cin >> q;
	for (int i = 0;i < q;i++) {
		cin >> a;
		auto it = s.find(a);
		if (s.count(a)) {
			s.erase(it);
		}
	}
	int d;
	cin >> d;
	while (d--) {
		cin >> a;
		auto it = s.find(a);
		if (s.count(a)) {
			s.erase(it);
		}
	}
	if (s.empty())
		cout << "I become the guy.";
	else cout << "Oh, my keyboard!";

	


}
