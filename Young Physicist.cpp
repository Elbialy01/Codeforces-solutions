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
	int n,arr[100][100];
	cin >> n;
	int sum;
	for (int i = 0;i < n;i++) {
		
		for (int j = 0;j < 3;j++) {
			cin >> arr[i][j];
		}
}
	for (int j = 0;j < 3;j++) {
		sum = 0;
		for (int i = 0;i < n;i++) {
			sum += arr[i][j];
		}
		if (sum != 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";


}
