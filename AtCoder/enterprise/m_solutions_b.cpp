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
    int k = 0;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'o') ++k;
    }                        
    cout << k << endl;;
    if (k + 15-S.size() >= 8) cout << "YES" << endl;
    else cout << "NO" << endl;
}
