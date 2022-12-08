#include<iostream>
#include<set>

using namespace std;



int main()
{
	int a,b;
	set<char>s;
	char h,arr[100][100];
	cin >> a >> b>> h;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			if (arr[i][j] == h) {
				if (i > 0 && arr[i - 1][j] != '.' && arr[i - 1][j] != h)
					s.insert(arr[i - 1][j]);
				if (j > 0 && arr[i][j - 1] != '.' && arr[i][j - 1] != h)
					s.insert(arr[i][j - 1]);
				if (j < b - 1 && arr[i][j + 1] != '.' && arr[i][j + 1] != h)
					s.insert(arr[i][j + 1]);
				if (i < a - 1 && arr[i + 1][j] != '.' && arr[i + 1][j] != h)
					s.insert(arr[i + 1][j]);

			}
		}
	}
	cout << s.size();
}
