#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#define ll long long

using namespace std;



int main()
{
	string str = "qwertyuiopasdfghjkl;zxcvbnm,./",s;
	char a;
	int n = str.length();
	int g;
	cin >> a >> s;
	g = s.length();
	if (a == 'R') {
		for (int i = 0;i < g;i++) {
			for (int j = 0;j < n;j++) {
				if (s[i] == str[j]) {
					cout << str[j - 1];
					break;
				}

			}
		}
	}
	else {
		for (int i = 0;i < g;i++) {
			for (int j = 0;j < n;j++) {
				if (s[i] == str[j]) {
					cout << str[j + 1];
					break;
				}


			}
		}
	}
	
	


}
