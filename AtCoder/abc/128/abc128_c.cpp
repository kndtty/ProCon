#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>
#include <bitset>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int N, M; 
vector<vector<int>> S(20);
vector<int> P;
vector<int> K;
int res = 0;

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int k; cin >> k;
        K.push_back(k);
        for (int j = 0; j < k; ++j) {
            int s; cin >> s;
            S[i].push_back(s);
        }
    }

    for (int i = 0; i < M; ++i) {
        int p; cin >> p;
        P.push_back(p);
    }

    for (int i = 0; i < pow(2, N); ++i) {
        bool ok = true;
        for (int j = 0; j < M; ++j) {
            int temp_i = 0;
            for (int k = 0; k < K[j]; ++k) {
                temp_i |= (1<<S[j][k]-1);
            }
            ok &= __builtin_popcount(i & temp_i) % 2 == P[j];
        }
        if (ok) ++res;
    }
    cout << res << endl;
}
