// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <stack>
using namespace std;

int main()
{
	char s;
	set<char>sn;
	while(cin>>s&&s!='}') {
		if (s != '{' && s != '}' && s != ','&&s!=' ') {
			sn.insert(s);
		}
	}
	cout << sn.size();

	}
