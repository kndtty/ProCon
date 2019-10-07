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
    int N; cin >> N;
    string S; cin >> S;
    map<string, ll> m;

    repp(i,0,N) m[S.substr(i,1)]+=1;
    int t = 0;
    bool b = true;
    int ans = 0;
    while (b) {
        b = false;
        map<string, ll> nm;
        for(auto x: m) {
            if ((int)x.first.size() < t + 1 || x.second < 2) continue;
            b = true;
            for(int i = 0; i < N; ++i) {
                if (S.substr(i,t+1) == x.first) {
                    nm[S.substr(i,t+1)]+=1;
                    i += t+1;
                }
            }
        }
        ++t;
        m = nm;
    }

    for(auto x: m) {
        if(x.second > 1) {
        ans = max(ans, (int)x.first.size());
        //cout << x.first << endl;
        }
    }
    cout << ans << endl;
}
