#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#define ll long long

using namespace std;



int main()
{
	string a;
	cin >> a;
	int n = a.length();
	for (int i = 0;i < n;i++) {
		if (a[i] >= '5') {
			a[i] = '9' - a[i]+'0';

		}
	}
	if (a[0] == '0')
		a[0] = '9';
	cout << a;

	


}
