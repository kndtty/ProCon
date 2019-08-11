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

    int N, M; cin >> N >> M;
    vector<int> A(N); for (int i = 0; i < N; ++i) cin >> A[i];
    map<long long, int, greater<long long>> D;
    for (int i = 0; i < M; ++i) {
        int b, c; cin >> b >> c;
        D[c] += b;
    }


    sort(A.begin(), A.end());

    long long res = 0;
    int change_sum = 0;

    for (auto x : D) {
        int j = lower_bound(A.begin(), A.end(), x.first) - A.begin();
        int change_count = min(x.second,  max(0, j - change_sum));
        res += x.first * change_count;
        change_sum += change_count;
    }

    for (int i = change_sum; i < N; ++i) res += A[i];
    cout << res << endl;
}
