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
    string S; cin >> S;
    bool x = true;
    for (int i = 1; i < S.size(); ++i) {
        x &= S[i-1] != S[i];
    }
    if (x) cout << "Good" << endl;
    else cout << "Bad" << endl;
}
