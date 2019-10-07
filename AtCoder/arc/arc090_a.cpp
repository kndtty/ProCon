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
    int N; cin >> N;
    int A[N]; for (int i = 0; i < N; ++i) cin >> A[i];
    int B[N]; for (int i = 0; i < N; ++i) cin >> B[i];

    int sumA[N]; sumA[0] = A[0];
    for (int i = 1; i < N; ++i) sumA[i] = sumA[i-1] + A[i];

    int sumB[N]; sumB[0] = B[0];
    for (int i = 1; i < N; ++i) sumB[i] = sumB[i-1] + B[i];

    int res = 0;
    for (int i = 0; i < N; ++i) {
        if (i == 0) res = max(res, sumA[i] + sumB[N-1]);
        else res = max(res, sumA[i] + (sumB[N-1] - sumB[i-1]));
    }

    cout << res << endl;
}
