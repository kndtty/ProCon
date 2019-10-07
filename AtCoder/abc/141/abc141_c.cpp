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
    ll K; cin >> K;
    int Q; cin >> Q;
    vector<int> A(Q);
    repp(i,0,Q) cin >> A[i];

    vector<ll> point(N+1);
    repp(i,0,Q) point[A[i]] += 1;

    repp(i,1,N+1) {
        if (K-(Q - point[i]) > 0)  cout << "Yes"  << endl;
        else cout << "No" << endl;
    }
}
