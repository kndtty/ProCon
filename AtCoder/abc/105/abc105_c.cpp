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
    long long N; cin >> N;

    string res = "";

    while (N != 0) {
        if (N % -2 == 0) res = "0" + res, N /= -2;
        else res = "1" + res, N = (N-1) / -2;
    }

    if (res == "") cout << 0 << endl;
    else cout << res << endl;
}
