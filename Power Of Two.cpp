#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <list>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;


int main()
{

	set<long long>s;
	long long  n = 2;
	s.insert(1);
	s.insert(2);
	while (true) {
		n *= 2;
		if (n > pow(10, 18))
			break;
		else s.insert(n);
	}
	ll a;
	cin>>a;
	if(s.count(a))
        cout<<"YES";
    else cout<<"NO";




}
