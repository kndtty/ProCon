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

ll MOD = 1000000007;

int main() {
    int N, M;  cin >> N >> M;
    set<int> A; for (int i = 0; i < M; ++i) {
        int a; cin >> a;
        A.insert(a);
    }
    vector<int> dp(N+100);
    for (int i = 0; i < N+1; ++i) dp[i] = 0;

    dp[1] = 1;
    dp[2] = 1;
    for (int i = 0; i < N; ++i) {
        if (A.count(i) > 0) continue;
        if (A.count(i+1) == 0) dp[i+1] = (dp[i+1] + dp[i]) % MOD;
        if (A.count(i+2) == 0) dp[i+2] = (dp[i+2] + dp[i]) % MOD;
    }
    cout << dp[N] << endl;
}
