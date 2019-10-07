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
    int N; cin >> N;
    ll F[N][10];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 10; ++j) cin >> F[i][j];
    } 
    ll P[N][11];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 11; ++j) cin >> P[i][j];
    } 

    ll res = -(1LL << 9);

    for (int i = 0; i < (1 << 10); ++i) {
        ll tmp_res = 0;
        for (int j = 0; j < N; ++j) {
            int count = 0;
            for (int k = 0; k < 10; ++k) if (i & k) ++count;
            tmp_res += P[j][count];
        }
        res = max(res, tmp_res);
    }
    cout << res << endl;
}
