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
    int A[3]; for (int i = 0; i < 3; ++i) cin >> A[i];
    sort(A, A+3, greater<int>());
    cout << (A[0] - A[1] + A[1] - A[2]) << endl;
}
