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
string str[3]={"Grapes","Carrots","Kiwis"};
    int n, h, w, t;
    ci(n);ci(h); ci(w); ci(t);
    s sti;
    loop(w){
        int a,b;
        ci(a);ci(b);
        sti.in((a-1)*h+b);
    }
    loop(t){
        int a,b;
        ci(a);ci(b);
        int y=(a-1)*h+b;

        if(sti.count(y))cout<<"Waste"<<endl;
        else{
                int a=y;
                aloop(sti){
                    if(it<y)a--;
                }
                co(str[a%3]);
                co(endl);
        }
    }

    return 0;
}
