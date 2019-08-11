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
    int D, N; cin >> D >> N;
    int n = 0;
    int d = (int)pow(100, D);
    for (int i = 1; i < 100000001; ++i) {
        if (i % d == 0 && (i / d) % 100 != 0) ++n;
        if (N == n) {
            cout << i << endl;
            break;
        }
    }
}
