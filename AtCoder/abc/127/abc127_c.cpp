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
    int left = 0;
    int right = N-1;
    for (int i = 0; i < M; ++i){
        int l, r; cin >> l >> r;
        --l, --r;
        left = max(left, l);
        right = min(right, r);
    }
    int res = max(0, 1 + right - left);
    cout << res << endl;
}
