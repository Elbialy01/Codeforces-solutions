#include <iostream>
#include <set>
#include <string>
using namespace std;


int main()
{
	string a, b;
	cin >> a >> b;
	int n = a.length();
	for (int i = 0;i < n;i++) {
		a[i]=tolower(a[i]);
	b[i]=tolower(b[i]);
	}
	if (a > b) {
		cout << 1;
	}
	else if (b > a) {
		cout << -1;
	}
	else cout << 0;
   
}
