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
    int N, M; cin >> N >> M;
    //vector<ll> A(N); repp(i,0,N) cin >> A[i];
    priority_queue<ll> q;
    repp(i,0,N) {
        ll a; cin >> a;
        q.push(a);
    }
    repp(i,0,M) {
        ll p = q.top() / 2; q.pop();
        q.push(p);
    }
    ll sum = 0;
    repp(i,0,N) {
        sum += q.top(); q.pop();
    }
    cout << sum << endl;

}
