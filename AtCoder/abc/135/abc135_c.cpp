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
    vector<ll> B(N+1); repp(i,0,N+1) cin >> B[i];
    vector<ll> A(N); repp(i,0,N) cin >> A[i];
    ll res = 0;
    repp(i,0,N) {
        res += min(B[i], A[i]);
        if (B[i] < A[i]) {
            res += min(B[i+1], A[i] - B[i]);
            B[i+1] -= min(B[i+1], A[i] - B[i]);
        }
    }
    cout << res << endl;
}
