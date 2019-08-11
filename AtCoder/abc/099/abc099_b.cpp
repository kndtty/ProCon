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
    int a, b; cin >> a >> b;
    int sum = 0;
    for (int i = 1; i < b - a; ++i) sum += i;
    cout << (sum - a) << endl;
}
