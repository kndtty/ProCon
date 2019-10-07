#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>

using namespace std;
using Graph = vector<vector<int>>;

#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}
vector<ll> res; 
Graph G;
map<int, ll> m;

void dfs(int p, int x, int pa) {
    if (p != pa && m.count(p)) {
        x += m[p];
        m.erase(p);
    }
    res[p] += x;
    for(auto z: G[p]) {
        dfs(z, x, pa);
    }
}

int main() {
    int N, Q; cin >> N >> Q;
    G.resize(N+1);
    res.resize(N+1);

    repp(i,0,N-1) {
        int a, b; cin >> a >> b;
        G[a].push_back(b);
    }

    /*
    repp(i,0,Q) {
        int p, x; cin >> p >> x;
        dfs(p, x);
    }
    */
    repp(i,0,Q) {
        int p, x; cin >> p >> x;
        if (!m.count(p)) {
            m[p] = x;
        } else {
            m[p] += x;
        }
    }
    for (auto x: m) {
        dfs(x.first, x.second, x.first);
    }
    
    repp(i,1,N+1) {
        if (i > 1) cout << " ";
        cout << res[i];
    }
    cout << endl;
}

