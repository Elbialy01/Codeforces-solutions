#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#define ll long long

using namespace std;



int main()
{
	int n,v[1000];
	
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> v[i];
		}
	int sum = 0,equal=0;
	int lastsum=0;
	set<int>s;
	for (int i = 0;i < n;i++) {
		sum = 0;
		equal = 0;
		for (int j = i+1;j < n;j++) {
			if (v[j]<=v[j-1]) {
				sum++;
			}
			else break;
		}
		//cout << sum;
		int y = 0;
		int q = 0;
		for (int j = i-1;j >=0;j--) {
			if (v[j]<=v[j+1]) {
				sum++;
			}
			else break;
		}
		sum++;
		s.insert(sum);
		
	}
	auto it = s.end();
	it--;
	cout << *it;


	
			



}
