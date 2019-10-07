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
    long long N, M; cin >> N >> M;
    long long res;
    if (N == 1 && M == 1) res = 1;
    else if (N == 1 || M == 1) res = N * M - 2;
    else res = N * M - 2 * N - 2 *  M + 4;;
    cout << res << endl;
}
