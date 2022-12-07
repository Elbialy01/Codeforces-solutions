// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string s, st,d;
	cin >> s >> st;
	int n = s.length(),m=0;
	stack<char>sta;
	for (int i = 0;i < n;i++) {
		if (s[i] != st[n - i - 1]) {
			cout << "NO";
			return 0;
		}
	}
		cout << "YES";
	}
