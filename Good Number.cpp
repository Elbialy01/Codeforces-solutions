#include <iostream>
#include <set>
#include <string>
using namespace std;


int main()
{
	int n, k,co=0,a;
	cin >> n >> k;
	for (int i = 0;i < n;i++) {
		cin >> a;
		int c=0;
		string s = to_string(a);
		int n = s.length();
		for (int i = 0;i <= k;i++) {
			for (int j = 0;j < n;j++) {
				int p = s[j] - '0';
				if (p == i) {
					c++;
					break;
				}
			}

		}
		
		if (c-1 == k)
			co++;


	}
	cout << co;
   
}
