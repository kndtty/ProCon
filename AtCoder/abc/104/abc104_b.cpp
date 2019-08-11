#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>
#include <cctype>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    string S; cin >> S;
    int N = S.size();

    bool ok = S[0] == 'A';

    int countC = 0;
    for (int i = 2; i < N-1; ++i) {
        if (S[i] == 'C') countC += 1;
        else ok &= islower(S[i]) > 0;
    }
    ok &= countC == 1;

    ok &= islower(S[1]) > 0;
    ok &= islower(S[N-1]) > 0;

    if (ok) cout << "AC" << endl;
    else cout << "WA" << endl;
}
