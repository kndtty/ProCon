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
    vector<int> W(N); for(int i = 0; i < N; ++i) cin >> W[i];
    int res = 1 << 29;
    for (int i = 1; i < N; ++i) {
        int ga = 0;
        int gb = 0;
        for (int j = 0; j < i; ++j) ga += W[j];
        for (int j = i; j < N; ++j) gb += W[j];
        res = min(res, abs(ga - gb));
    }
    cout << res << endl;

}
