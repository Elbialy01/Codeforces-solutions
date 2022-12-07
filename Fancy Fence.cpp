#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n, a;
	cin >> n;
	while (n--) {
		cin >> a;
		if (360%(180 - a)  == 0)
			cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	   
}
