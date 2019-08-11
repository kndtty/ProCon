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
typedef pair<ll, ll> P;
 
bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second < secondElof.second;
}
int main() {
    ll N; cin >> N;
    vector<pair<ll,ll>> v;
    for (int i = 0; i < N; ++i) {
        ll a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), pairCompare);
    ll sum = 0;
    bool y = true;
    for (auto x: v) {
        // cout << x.first << ":" << x.second << endl;
        sum += x.first;
        y &= sum <= x.second;
    }
    if (y) cout << "Yes" << endl;
    else cout << "No" << endl;
}
