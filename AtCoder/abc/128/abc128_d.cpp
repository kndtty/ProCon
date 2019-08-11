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

int main() {
    int N, K; cin >> N >> K;
    vector<ll> v(N); for (int i = 0; i < N; ++i) cin >> v[i];

    ll res = 0;

    for (int i = 0; i <= K; ++i) {
        for (int j = 0; i + j <= K; ++j) {
            if (i + j > N) continue;

            vector<ll> h;
            for (int k = 0; k < i; ++k) h.push_back(v[k]);
            for (int k = 0; k < j; ++k) h.push_back(v[N-k-1]);

            sort(h.begin(), h.end());

            int n = i + j;
            for (int k = 0; k < K - n && k < n; ++k) h[k] = max(0LL, h[k]);

            res = max(res, accumulate(h.begin(), h.end(), 0LL));
        }
    }

    cout << res << endl;
}
