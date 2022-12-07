// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	int n,a,b,c;
	cin >> n >> a;
	while (n--) {
		cin >> b >> c;
		if (a == 1 || a == 6) {
			if (b == 1 || b == 6 || c == 1 || c == 6) {
				cout << "NO";
				return 0;
			}
		}
		else if (a == 4 || a == 3) {
			if (b == 4 || b == 3 || c == 4 || c == 3) {
				cout << "NO";
				return 0;
			}
		}
		else if (a == 5 || a == 2) {
			if (b == 5 || b == 2 || c == 5 || c == 2) {
				cout << "NO";
				return 0;
			}
		}



		}
	cout << "YES";

	}
