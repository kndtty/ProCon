#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>
#include <iomanip>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    int N, K; cin >> N >> K;
    double shouritsus = 0;
    for (int i = 1; i <= N; ++i) {
        int sai = i;
        double shouritsu = 1;
        while(sai < K) {
            sai *= 2;
            shouritsu *= 0.5;
        }
        shouritsus += shouritsu/N;
    }
    cout << setprecision(12) << shouritsus << endl;
}
