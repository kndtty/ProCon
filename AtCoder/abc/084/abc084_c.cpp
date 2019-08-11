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
    int C[N], S[N], F[N]; for (int i = 0; i < N - 1; ++i) cin >> C[i] >> S[i] >> F[i];

    int res[N];
    for (int i = 0; i < N-1; ++i) {
        res[i] = C[i] + S[i];
        for (int j = i+1; j < N - 1; ++j) {
            if (res[i] <= S[j]) res[i] = C[j] + S[j];
            else {
                if ((res[i] - S[j]) % F[j] > 0) res[i] += C[j] + F[j] - ((res[i] - S[j]) % F[j]);
                else res[i] += C[j];
            }

        }
    }
    res[N-1] = 0;
    for (int i = 0; i < N; ++i) cout << res[i] << endl;
}
