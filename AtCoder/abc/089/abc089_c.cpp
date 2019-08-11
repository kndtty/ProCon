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
    map<char, ll> count;

    string MARCH = "MARCH";
    for (int i = 0; i < 5; ++i) count[MARCH[i]] = 0;

    for (int i = 0; i < N; ++i) {
        string S;  cin >> S;
        count[S[0]] += 1;
    }

    // conbinations
    int first[10]  = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
    int second[10] = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
    int third[10]  = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};

    long long res = 0;
    for (int i = 0; i < 10; ++i) res += count[MARCH[first[i]]] * count[MARCH[second[i]]] * count[MARCH[third[i]]];
    cout << res << endl;
}
