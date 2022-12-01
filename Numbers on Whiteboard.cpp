#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
using namespace std;


int main()
{
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << 2 << endl;
		cout << n << " " << n - 1 << endl;
		int y = n;int u = n-1;
		for (int i = 0;i < n-2;i++) {
			cout << y - i <<" "<< u - i - 1 << endl;
		}
		}
	}
