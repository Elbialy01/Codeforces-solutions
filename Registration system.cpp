#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <map>

#define ll long long
using namespace std;


int main()
{
	int n;
	string s;
	map<string, int>m;
	cin >> n;
	while (n--) {
		cin >> s;
		if (m.empty() || !m.count(s)) {
			cout << "OK" << endl;
			m.insert({ s,0 });
		}
		else {
			auto it = m.find(s);
			it->second++;
			string d = it->first;string f = to_string(it->second);
			
			cout << d<<f << endl;
		}
	}

	}
