#include<iostream>
#include<set>
#include <map>
#include <vector>
#define ll long long

using namespace std;



int main()
{
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		map<int, int>m;
		int a, max = 0;
		for (int i = 0;i < n;i++) {
			cin >> a;
			if (!m.empty() && ++m[a] > max)
				max = m[a];
			else m.insert({ a,1 });
		}
		if (max == 0)
			max = 1;
		int dif = n - max;
		long long op =n- max;
		//cout << op;
		int f = max;
		while (true) {
			if (dif <= 0)
				break;
			else {
				dif -=  f;
				f *= 2;
				op++;
			}
		}
		cout << op<<endl;
	}

}
