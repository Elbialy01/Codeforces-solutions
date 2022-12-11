#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#include <math.h>
#define ll long long

using namespace std;



int main()
{
	ll a, b;
	cin >> a;
	b = sqrt(a);
	if (a == 1)
	{
		cout << "NO";
		return 0;
}
	
	for (ll i = 2;i <=b;i++) {
		if (a%i == 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";




}
