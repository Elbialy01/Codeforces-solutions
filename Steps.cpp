#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <unordered_map>
#include <math.h>
#include <algorithm>
#include <string>
#include <ctype.h>
#define um undordered_map<int,int>
#define vc vector<int>
#define ma map<int,int>
#define ml multimap<long long ,long long >
#define ms multiset<long long>
#define s set<int>
#define qu queue<int>
#define dq deque<int>
#define st stack<int>
#define ll long long
#define f float
#define lli long long int
#define svcl(k) sort((k).begin(),(k).end())
#define svcg(g) sort((g).begin(),(g).end(),greater<int>())
#define rloop(n) for(int i=(n)-1;i>=0;i--)
#define ci(a)  cin>>(a)
#define co(b)  cout<<(b)
#define loop(l)   for(int i=0;i<(l);i++)
#define endl '\n'
#define in insert
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define endit return 0
#define aloop(v) for(auto it:(v))

/*يَا أَيُّهَا النَّبِيُّ قُل لِّمَن فِي أَيْدِيكُم مِّنَ الْأَسْرَىٰ إِن يَعْلَمِ اللَّهُ فِي قُلُوبِكُمْ خَيْرًا يُؤْتِكُمْ خَيْرًا مِّمَّا أُخِذَ مِنكُمْ وَيَغْفِرْ لَكُمْ ۗ وَاللَّهُ غَفُورٌ رَّحِيمٌ */

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, x, y,k;
    ci(n);ci(m);ci(x);ci(y);ci(k);
    ll res = 0;
    vector<pair<int, int>>v;
    loop(k) {
        int a, b;
        ci(a);ci(b);
        v.push_back(make_pair(a, b));
    }
    for (int i = 0; i < k; i++)
    {
        int l=0, u=0;
        if (v[i].second <= 0 && v[i].first>=0&&y>0) {


             l = n - x;
            u =1-y;
        }
        else  if (v[i].second >= 0 && v[i].first<=0&&x>0) {


            l = 1-x ;
            u = m-y;
        }
        else  if (v[i].second <= 0 && v[i].first <= 0&&x>0&&y>0) {


            l = 1-x;
            u = 1-y;
        }
        else if(v[i].second > 0 && v[i].first > 0) {
            l = n - x;
            u = m - y;
        }
        

        
        if (v[i].second != 0 && v[i].first != 0) {


            int r = min(l / v[i].first, u / v[i].second);
            if (x + v[i].first * r <= n && x + v[i].first * r > 0 && y + v[i].second * r <= m && y + v[i].second * r > 0) {
                res += r;
                x += v[i].first * r;
                y += v[i].second * r;
            }
        }
        else if (v[i].second == 0 && v[i].first !=0) {
            int r = l / v[i].first;
            if (x + r * v[i].first <= n && x + r * v[i].first > 0) {
                res += r;
                x += r * v[i].first;
            }
        }
        else if (v[i].second != 0 && v[i].first == 0) {
            int r = u / v[i].second;
            if(y + r * v[i].second<=m&& y + r * v[i].second>0)
            res += r;
            y += r * v[i].second;
        }


    }
    cout << res;



    return 0;
}
