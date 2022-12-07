#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;


int main()
{
	char arr[4][4];
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			char a = arr[i][j];
			int c = 0;
			int b = 0;
			for (int u = i;u < i + 2;u++) {
				for (int y = j;y < j + 2;y++) {
					if (arr[u][y] == a)
						c++;
					else b++;
				}
				
			}
			if (c >= 3||b==3) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}
