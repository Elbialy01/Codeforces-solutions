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
	string s;
	int zero = 0, one = 0, n;
	cin >>n>> s;
	
	for (int i = 0;i < n;i++) {
		if (s[i] == '0')
			zero++;
		else one++;
	}
	if (zero > one)
		cout << zero - one;
	else cout << one - zero;

	

}
