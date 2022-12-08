#include<iostream>
#include<set>
#include <map>

using namespace std;



int main()
{
    int n, m, a, b;
	multiset<pair<int, int>>ma;
	cin >> n >> m;
	while (m--) {
		cin >> a >> b;
		ma.insert({ b,a });
	}
	auto it = ma.end();
	it--;
	auto r = ma.begin();
	r--;
	unsigned long long int  sum = 0;
	 int  l;
	while (n&&it!=r) {
		if (n > it->second) {
			l = it->second;
			n = n - it->second;
		}
		else {
			l = n; n = 0;
		}
		 int u = it->first;
		sum =sum+ l * u;
		it--;

	}
	cout << sum;




}
