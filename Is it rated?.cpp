// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int n,a,b;
	vector<int>v;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a > b || b > a) {
			cout << "rated";
			return 0;
		}
		else v.push_back(a);
	}
	for (auto it = v.begin();it != v.end() - 1;it++) {
		if (*it < *(it + 1)) {

			cout << "unrated";
			return 0;
		}
	}
		cout << "maybe";
		return 0;

}
