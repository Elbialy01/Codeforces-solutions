#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <list>
#include <vector>
#define ll long long
using namespace std;


int main()
{
	int n, a;
	cin >> n;
	multiset<int>m;	
	for (int i = 0;i < n;i++) {
		cin >> a;
		m.insert(a);
	}
	int counter = 0;
	for (int i = 1;i <= n;i++) {
		if (!m.count(i))
			counter++;	
	}
	cout << counter;	
}
