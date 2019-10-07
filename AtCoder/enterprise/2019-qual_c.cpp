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
    vector<ll> A(N);
    vector<ll> B(N);
    repp(i,0,N) cin >> A[i] >> B[i];

    priority_queue<pair<ll, int>> pq;
    repp(i,0,N) pq.push(make_pair(A[i] + B[i], i));

    ll score_t = 0;
    ll score_a = 0;

    repp(i,0,N) {
        if (i%2 == 0) {score_t += A[pq.top().second]; pq.pop();}
        else {score_a += B[pq.top().second]; pq.pop();}
    }
    cout << score_t - score_a << endl;
}
