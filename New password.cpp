#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#define ll long long

using namespace std;



int main()
{
	int n, k;
	cin >> n >> k;
	int b = 0;
	char a = 'a';
	while (n--) {
		b++;
		cout << a++;
		if (b == k) {
			a = 'a';
			b = 0;
		}
	
}

}
