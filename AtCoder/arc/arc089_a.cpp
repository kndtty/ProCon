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
    int t[N], x[N], y[N];
    for (int i = 0; i < N; ++i) cin >> t[i] >> x[i] >> y[i];

    bool can = t[0] >= x[0] + y[0] && (t[0] - x[0] - y[0]) % 2 == 0;
    for (int i = 1; i < N; ++i) {
        int dt = t[i] - t[i-1];
        int dx = abs(x[i] - x[i-1]);
        int dy = abs(y[i] - y[i-1]);
        can = dt >= dx + dy && (dt - dx - dy) % 2 == 0;
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}
