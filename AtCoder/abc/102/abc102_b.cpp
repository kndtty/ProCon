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
    long long A[N]; for (int i = 0; i < N; ++i) cin >> A[i];
    sort(A, A+N);
    cout << (A[N-1] - A[0]) << endl;
}
