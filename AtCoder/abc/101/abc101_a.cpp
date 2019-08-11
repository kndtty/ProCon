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
    int res = 0;
    string s; cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '+') ++res;
        else --res;
    }
    cout << res << endl;
}

