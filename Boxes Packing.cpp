#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#define ll long long
using namespace std;


int main()
{
	int n, a;
	multiset<int>m;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a;
		m.insert(a);
	} 
	int max = 0;
	for (auto it = m.begin();it != m.end();it++) {
		int counter = 0;
		for (auto b = it;b != m.end();b++) {
			if (*b == *it)
				counter++;
			else break;
		}
		if (max < counter)
			max = counter;
	}
	cout << max;	
}
