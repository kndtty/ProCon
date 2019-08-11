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
    int r, D, x; cin >> r >> D >> x;
    for (int i = 1; i < 11; ++i) {
        int x1 = r * x - D;
        cout << x1 << endl;
        x = x1;
    }
}
