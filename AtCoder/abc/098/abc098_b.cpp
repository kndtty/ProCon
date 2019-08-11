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
    int N; cin >> N;
    string S; cin >> S;
    int res = 0;
    for (int i = 1; i < N; ++i) {
        set<char> set_a;
        set<char> set_b;
        for (int j = 0; j < i; ++j) set_a.insert(S[j]);
        for (int j = i; j < N; ++j) set_b.insert(S[j]);
        int tmp = 0;
        for (auto x: set_a) {
            if (set_b.count(x) > 0) ++tmp;
        }
        res = max(res, tmp);
    }
    cout << res << endl;
}

