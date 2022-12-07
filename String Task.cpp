#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int n = s.length();
	vector<char>v;
	for (int i = 0;i < n;i++) {
		s[i] = tolower(s[i]);
		if (s[i] == 'a' || s[i] == 'y' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i'||s[i]=='e') {

		}
		else {
			v.push_back('.');
			v.push_back(s[i]);
		}
	}
	for (auto it : v) {
		cout << it;
	}

   
}
