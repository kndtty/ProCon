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
    ll A, B, C, D; cin >> A >> B >> C >> D;
    ll E = C * D / GCD(C, D);
    ll x = B / C;
    ll y = B / D;
    ll z = B / E;
    ll xx = (A - 1) / C;
    ll yy = (A - 1) / D;
    ll zz = (A - 1) / E;
    cout << ((B - A + 1) - (x + y - z)) + (xx + yy - zz) << endl;
}
