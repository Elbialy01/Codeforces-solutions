#include<iostream>
#include<set>
#include <map>
#include <vector>
#define ll long long

using namespace std;



int main()
{
	int n,q,a;
	vector<int>s;
	map<int, int>ma;
	map<int, int>mz;

	ll forward = 0, back = 0;
	cin >> n;
	int g = n;
	for (int i = 0;i < n;i++) {
		cin >> a;
		ma.insert({ a,i + 1 });
		mz.insert({ a,g });
		g--;
		
	}
	cin >> q;
	for (int i = 0;i < q;i++) {
		cin >> a;
		s.push_back(a);
	}
	for (auto it : s) {
		forward += ma[it];
		back += mz[it];
	}
	cout << forward << " " << back;
}
