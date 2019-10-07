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
    vector<int> B(N-1);
    repp(i,0,N-1) cin >> B[i];

    ll ans = 0;
    repp(i,1,N-1) {
        ans += min(B[i], B[i-1]);
    }
    ans += B[0];
    ans += B[N-2];
    cout << ans << endl;
}
