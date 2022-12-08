#include<iostream>
#include<set>
#include <map>
#include <vector>
#define ll long long

using namespace std;



int main()
{
	long long t, n,counter=0,test;
	cin >> test;
	while (test--) {
		counter = 0;
		cin >> t >> n;
		while (t) {
			if (t % n == 0) {
				t /= n;
				counter++;
			}
			else {
				counter += t % n;
				t -= t % n;
			}
		}
		cout << counter<<endl;
	}

}
