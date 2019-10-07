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

#define repp(i,a,b) for(int i = (int)(a); i < (int)(b); ++i)

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    int N; cin >> N;
    vector<pair<int,int>> R;
    repp(i,0,N) {
        int x, y; cin >> x >> y;
        R.emplace_back(x, y);
    }
    vector<pair<int,int>> B;
    repp(i,0,N) {
        int x, y; cin >> x >> y;
        B.emplace_back(x, y);
    }
    sort(B.begin(), B.end());
    int res = 0;

    vector<bool> used(N); repp(i,0,N) used[i] = false;
    repp(i, 0, N) {
        pair<int, int> b = B[i];
        int max_y = -1;
        int tmp_i = -1;
        repp(j, 0, N) {
            if (used[j]) continue;
            if (R[j].first >= b.first) continue;
            if (R[j].second >= b.second) continue;
            if (R[j].second > max_y) {
                tmp_i = j;
                max_y = R[j].second;
            } 
        }
        if (tmp_i < 0) continue;
        ++res;
        used[tmp_i] = true;
    }
    cout << res << endl;

}
