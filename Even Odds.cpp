#include <iostream>
#include <set>
#include <string>
#include <vector>
#define ll long long
using namespace std;


int main()
{
	ll n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		if (k > n / 2)
		{
			k -= n / 2;
			k--;
			cout << 2 + 2 * k;
		}
		else {
			k--;
			cout << 1 + k * 2;
		}
	}
	else {
		n++;
		if (k > n / 2) {
			k -= n / 2;
			k--;
			cout << 2 + 2 * k;
		}
		else
		{
			k--;
			cout << 1 + 2 * k;
		}
	}

}
