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
    int R; cin >> R;
    if (R < 1200) cout << "ABC" << endl;
    else if (R < 2800) cout << "ARC" << endl;
    else cout << "AGC" << endl;
}
