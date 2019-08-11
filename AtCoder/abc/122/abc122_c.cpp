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

    int N, Q; cin >> N >> Q;
    string S; cin >> S;

    // 累積和
    int sum[100010];
    sum[0] = 0;
    for (int i = 0; i < N - 1; ++i) {
        if (S[i] == 'A' && S[i+1] == 'C') sum[i+1] = sum[i] + 1;
        else sum[i+1] = sum[i];
    }

    for (int i = 0; i  < Q; ++i) {
        int l, r; cin >> l >> r;
        int res = sum[r-1] - sum[l-1];
        cout << res << endl;
    }
}
