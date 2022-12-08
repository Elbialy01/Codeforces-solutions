// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int ways(int i, int n,int co) {
	n -= co+2;

	return n * i;
}

int main()
{
	string s;
	cin >> s;
	int counter = 0;
	long long p=0;
	int n = s.length();
	for (int i = 0;i <= n - 4;i++) {
		if (s.substr(i, 4) == "bear") {
			p += ways(i+ 1-counter, n,i+1);
			counter=i+1;
		}
	}
	cout << p;


}
