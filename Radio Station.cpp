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
	string a, b;
	int n, m;
	cin >> n >> m;
	map<string, string >l;
	while (n--) {
		cin >> a >> b;
		b += ';';
		l.insert(pair<string, string>(b,a));
	}
	while(m--) {
		cin >> a>> b;
		cout << a << " " << b<<" ";
		auto it = l.find(b);
		cout << "#";
		cout << it->second << endl;
	}

	}
