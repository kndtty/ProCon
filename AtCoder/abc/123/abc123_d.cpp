#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>

using namespace std;
#define repp(i,a,b) for(int i = (int)(a); i < (int)(b); ++i)

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    int X, Y, Z, K; cin >> X >> Y >> Z >> K;
    vector<long long> A(X); repp(i,0,X) cin >> A[i];
    vector<long long> B(Y); repp(i,0,Y) cin >> B[i];
    vector<long long> C(Z); repp(i,0,Z) cin >> C[i];
    sort(A.begin(), A.end(), greater<long long>());
    sort(B.begin(), B.end(), greater<long long>());
    sort(C.begin(), C.end(), greater<long long>());

    vector<long long> re_xy;
    repp(i,0,X){
        repp(j,0,Y) {
            re_xy.push_back(A[i] + B[j]);
        }
    }
    sort(re_xy.begin(), re_xy.end(), greater<long long>());
    vector<long long> result;
    repp(i,0,Z) {
        repp(j,0,min(K, X*Y)) result.push_back(C[i] + re_xy[j]);
    }

    sort(result.begin(), result.end(), greater<long long>());
    repp(i,0,K) cout << result[i] << endl;
    return 0;

}
