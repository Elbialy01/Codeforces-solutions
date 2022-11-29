//// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	int n, a,arr[101];
	multiset<int>s;
	cin >> n;
	int sum = 0;
	
	for (int i = 0;i < n;i++) {
		cin >> a;
		s.insert(a);
		sum += a;

	}
	auto it = s.end();it--;
	int su = 0,coins=0;
	for (int i = n - 1;i >= 0;i--) {
		
		if (su > sum) {
			break;
		}
		else {
			su += *it;
			sum -= *it;
			coins++;
			it--;
		}

	}
	cout << coins;
}







 
