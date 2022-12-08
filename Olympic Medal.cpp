#include<iostream>
#include<set>
#include <map>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;



int main()
{
	double a, b,n,m,k,c;
	set<int>sr1;
	set<int>sp1;
	set<int>sp2;
	cin >> n;
	while (n--)
	{
		cin >> c;
		sr1.insert(c);
	}
	auto it = sr1.end();
	it--;
	double r1 = *it;
	cin >> m;
	while (m--)
	{
		cin >> c;
		sp1.insert(c);
	}
	it = sp1.end();
	it--;
	double p1 = *it;
	cin >> k;
	while (k--)
	{
		cin >> c;
		sp2.insert(c);
	}
	double p2 = *sp2.begin();
	cin >> a >> b;
	double answer = (b * p1 * r1 * r1) / (p2 * a + b * p1);
	double ans = sqrt(answer);
	cout << fixed << setprecision(12) << ans;




}
