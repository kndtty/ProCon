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
    int A, B; cin >> A >> B;

    if (A < 6) cout << 0 << endl;
    else if (A < 13) cout << (B/2) << endl;
    else cout << B << endl;
}
