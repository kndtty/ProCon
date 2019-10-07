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
    long long X, Y; cin >> X >> Y;
    int res = 0;
    while (X <= Y) X *= 2, ++res;
    cout << res << endl;
}

