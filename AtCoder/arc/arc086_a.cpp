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
    int N, K; cin >> N >> K;
    int MAX = 200010;

    int bucket[MAX]; for (int i = 0; i < MAX; ++i) bucket[i] = 0;

    int pt = 0;
    for (int i = 0; i < N; ++i) {
        int a; cin >> a;
        if (bucket[a] == 0) ++pt;
        ++bucket[a];
    }

    sort(bucket, bucket + MAX);

    int res = 0;
    for (int i = 0; i < pt - K; ++i)  res += bucket[i+MAX-pt];

    cout << res << endl;

}
