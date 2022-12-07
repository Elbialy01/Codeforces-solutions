// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int n, counta = 0, countb = 0;
	string s;
	cin >> n;
	cin >> s;
	counta++;
	string g,m;
	n--;
	while (n--) {
		cin >> g;
		if (g == s)
			counta++;
		else {
			m = g;
			countb++;
		}
	}
	if (counta > countb)
		cout << s;
	else cout << m;

	}
