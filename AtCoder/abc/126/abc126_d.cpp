#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}


vector<vector<pair<int, int>>> V;
vector<int> res;

void dfs(int t, int c, int p) {
    res[t] = c;
    for (auto x: V[t]) {
        if (x.first == p) continue;
        if (x.second%2 == 0) dfs(x.first, c, t);
        else dfs(x.first, 1-c, t);
    } 
}


int main() {
    int N; cin >> N;
    V.assign(N+1, vector<pair<int, int>>());
    res.assign(N+1, -1);
    for (int i = 0; i < N-1; ++i) { 
        int u, v;  cin >> u >> v;
        ll w; cin >> w;
        V[u].push_back(make_pair(v, w));
        V[v].push_back(make_pair(u, w));
    }
    for (int i = 0; i <= N; ++i) res[i] = -1;
    
    dfs(1, 1, -1);

    for (int i = 1; i <= N; ++i) cout << res[i] << endl;
}
