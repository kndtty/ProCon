#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>

using namespace std;
#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    string s, t; cin >> s >> t;
    int ts = s.size();
    int tn = t.size();
    map<char, vector<int>> m;
    repp(i,0,ts) m[s[i]].push_back(i);

    bool can = true;
    ll count = 0;
    ll back = 0;
    repp(i,0,tn) {
        if (!m.count(t[i])) {
            can = false;
            continue;
        }
        bool find = false;
        for (auto j:m[t[i]]) {
            if (j > count%ts) {
                find = true;
                count += j - back;
                back = j;
            }
            if (! find) count += m[t[i]][0];
        }
    }

    if (can) cout << count << endl;
    else cout << -1 << endl;
}

