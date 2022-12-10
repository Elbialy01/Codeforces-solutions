#include<iostream>
#include<set>
#include <map>
#include <vector>
#include <deque>
#define ll long long

using namespace std;



int main()
{
	int n;
	vector<int>v;
	cin >> n;
	int g = n;
	set<int>f;
	for (int i = 0;i < n;i++) {
		int a;cin >> a;v.push_back(a);
	}
		
	for (int i = 0;i < n;i++) {
		if (v[i] == g) {
	
			cout << v[i];
			g--;
			if (!f.empty()) {
				while (true) {
					if (f.count(g)) {
						cout << " ";
						auto it = f.find(g);
						cout << *it;
						f.erase(it);
						g--;

					}
					else break;
				}

			}
			cout << endl;

		}
		else {
			cout << endl;
			f.insert(v[i]);
		}
	}


}
