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
    string S[N];
    int P[N];
    vector<pair<string, int>> SP;
    for (int i = 0; i < N; ++i) {
        string s; cin >> s;
        int p; cin >> p;
        SP.push_back(make_pair(s, p));
    }

}
