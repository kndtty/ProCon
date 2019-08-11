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
    int C[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> C[i][j];
    }

    int a[3], b[3];
    a[0] = 0;
    b[0] = C[0][0] - a[0];
    b[1] = C[0][1] - a[0];
    b[2] = C[0][2] - a[0];
    a[1] = C[1][0] - b[0];
    a[2] = C[2][0] - b[0];

    bool is_correct = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) is_correct &= C[i][j] == a[i] + b[j];
    }
    if (is_correct) cout << "Yes" << endl;
    else cout << "No" << endl;

}
