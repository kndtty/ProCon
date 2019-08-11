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
    ll Y; cin >> Y;
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N - i; ++j) {
            int k = N - i - j;
            if (10000 * i + 5000 * j + 1000 * k == Y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}
