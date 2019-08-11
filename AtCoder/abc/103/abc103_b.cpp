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
    string S, T; cin >> S >> T;
    int N = S.size();
    bool can = false;

    for (int i = 0; i < N; ++i) {
        string tmp = "";
        for (int j = 0; j < N; ++j) tmp += S[(i + j) % N];
        can |= T == tmp;
    }
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}
