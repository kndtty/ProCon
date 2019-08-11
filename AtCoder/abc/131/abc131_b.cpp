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
    int N, L; cin >> N >> L;
    int sum = 0;
    for (int i = 1; i <= N; ++i){
        sum += L + i - 1;
    }

    int r = 1LL << 29;

    for (int i = 1; i <= N; ++i){
        int tmp = 0;
        for (int j = 1; j <= N; ++j) {
            if (i == j) continue;
            tmp +=  L + j - 1;
        }
        if (abs(sum - tmp) < abs(sum - r)) r = tmp;
    }
    cout << r << endl;
}
