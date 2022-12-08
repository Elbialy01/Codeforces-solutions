#include <iostream>
using namespace std;

int main()
{
	long long m, p,counter=0;
	cin >> m >> p;
	for (int i = 1;i <= p;i++) {
		counter += ((m + i) / 5 - i/ 5);
	}
	cout << counter;

}
