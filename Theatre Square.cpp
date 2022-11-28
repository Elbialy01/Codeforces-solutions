//// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <math.h>
//#include <algorithm>
#define ll long long
using namespace std;




int main()
{
	ll n, m, a;
	cin >> n >> m >> a;
	if (n % a == 0) {
		n /= a;
	}
	else {
		n /= a;
		n++;
	}
	if (m % a == 0) {
		m/= a;
	}
	else {
		m /= a;
		m++;
	}

	cout<<m*n;

}
