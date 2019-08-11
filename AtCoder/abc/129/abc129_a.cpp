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
    vector<int> pqr(3);for (int i = 0; i < 3; ++i) cin >> pqr[i];
    sort(pqr.begin(), pqr.end());
    cout << (pqr[0] + pqr[1]) << endl;
}
