#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    int N, D; cin >> N >> D;
    vector<vector<int>> v(N);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < D; ++j){
            int x; cin >> x;
            v[i].push_back(x);
        }
    }
    int res = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i+1; j < N; ++j) {
            if (i ==j) continue;
            float R = 0;
            for (int k = 0; k < D; ++k) R += abs(v[i][k]-v[j][k]) * abs(v[i][k]-v[j][k]);
            if (floor(sqrt(R)) == sqrt(R)) ++res;
        }
    }
    cout << res << endl;
}
