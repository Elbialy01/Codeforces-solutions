#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#define ll long long
using namespace std;

typedef struct laptop {
	int p;
	int q;
}laptop;
int main()
{
	laptop arr[100000];
	int n;
	cin >> n;
	
	for (int i = 0;i < n;i ++) {
		cin >> arr[i].p >> arr[i].q;

}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (arr[i].p < arr[j].p) {
				laptop temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0;i < n ;i++) {
		if (arr[i].p<arr[i + 1].p && arr[i].q>arr[i + 1].q) {
			cout << "Happy Alex";
			return 0;

		}
	}
	
	cout << "Poor Alex";

}
