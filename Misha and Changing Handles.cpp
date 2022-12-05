#include <iostream>
#include <iterator>
#include <map>
#include <string>
#define ll long long
using namespace std;


int main()
{
	int q;
	string s,a;
	map<string, string>m;
	cin >> q;
	while (q--) {
		cin >> s >> a;
		if (m.empty()||!m.count(s)) {
         m.insert(pair<string, string>(a, s));
		}
		else {
			auto it = m.find(s);
			 m.insert(pair<string, string>(a, it->second));
			 m.erase(it);

		}

	}
	cout<<m.size()<<endl;
	for (auto it = m.begin();it != m.end();it++)
		cout << it->second << " " << it->first << endl;
	}





