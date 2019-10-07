#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> R(n); for(int i = 0; i < n; ++i) cin >> R[i];

    long long m = R[0];
    long long ans = -(1LL<<32);
    for (int i = 1; i < n; ++i) {
        ans = max(ans, R[i] - m);
        m = min(m, R[i]);
    }
    cout << ans << endl;
}
