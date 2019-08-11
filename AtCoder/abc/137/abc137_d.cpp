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
    int N, M; cin >> N >> M;
    map<int, priority_queue<int>> m;
    set<int> s;

    repp(i,0,N) {
        int A, B; cin >> A >> B;
        m[A].push(B);
        s.insert(A);
    }

    ll res = 0;
    pair<int,int> tar; 
    repm(i,M-1,-1) {
        tar.first = -1; tar.second = -1;
        for(auto x:s) {
            if (x + i > M) break;
            if (m[x].empty() || tar.second > m[x].top()) continue;
            tar.first = x;
            tar.second = m[x].top();
        }
        if (tar.first == -1) continue;
        res += m[tar.first].top(); m[tar.first].pop();
    }
    cout << res << endl;
}
