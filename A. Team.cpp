#include <iostream>
#include <set>
#include <string>
using namespace std;


int main()
{
	int n,a,b=0;
	cin >> n;
	while (n--) {
		int co = 0;
		for (int i = 0;i < 3;i++) {
			cin >> a;
			if (a == 1)
				co++;
		}
		if (co >= 2)
			b++;

	}
	cout << b;
   
}
