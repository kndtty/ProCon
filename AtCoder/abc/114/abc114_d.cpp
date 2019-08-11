#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>
#include <string>
#include <bitset>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}
vector<int> era(int n) {vector<bool> is_prime(n+1, true);vector<int> res;for (int i = 2; i <= n; ++i) {if (!is_prime[2]) continue;for (int j = 2; i * j <= n; ++j) is_prime[i*j] = false;}for (int i = 2; i <= n; ++i) {if (is_prime[i]) res.push_back(i);}return res;}
map<int, int> divisor_map(int n) {vector<int> primes = era(n);map<int, int> res;for (auto i: primes) {while (n % i == 0) {n /= i;++res[i];}}return res;}

int main() {
    int N; cin >> N;
    map<int, int> divisor_count;
    for (int i = N; i > 0; --i) {
        for (auto x: divisor_map(i)) divisor_count[x.first] += x.second;
    }

    int count1 = 0;
    int count3 = 0;
    int count5 = 0;
    int count15 = 0;
    int count25 = 0;
    int count75 = 0;
    for (auto x: divisor_count) {
        ++count1;
        if (x.second >= 2) ++count3;
        if (x.second >= 4) ++count5;
        if (x.second >= 14) ++count15;
        if (x.second >= 24) ++count25;
        if (x.second >= 74) ++count75;
    }
    int res = 0;
    res += (count3-2) * (((count5) * (count5-1)) / 2);
    res += (count5-1) * count15;
    res += (count3-1) * count25;
    res += count75;
    cout << res << endl;
}
