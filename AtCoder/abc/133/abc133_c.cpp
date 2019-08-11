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
    ll L, R; cin >> L >> R;

    ll res = 2018;

    for (ll i = L; i <= L + 5000LL && i <= R; ++i) {
        for (ll j = i+1; j <= L + 5000LL && j <= R; ++j) {
            res = min(res, (i%2019)*(j%2019)%2019);
        }
    }
    cout << res << endl;
}
