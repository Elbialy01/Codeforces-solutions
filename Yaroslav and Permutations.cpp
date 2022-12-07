// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n,arr[100],max=0,c;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	for (int i = 0;i < n;i++) {
		c = 0;
		for (int j = 0;j < n;j++) {
			if (arr[i] == arr[j])
				c++;
		}
		if (c > max)
			max = c;
	}
	n -= max;
	if (max == n || max - 1 == n||n>max)
		cout << "YES";
	else cout << "NO";
}

