#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>

using namespace std;
#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    int N; cin >> N;
    vector<int> a(N+1); repp(i,1,N+1) cin >> a[i];

    vector<int> ans(N+1); repp(i,1,N+1) ans[i] = -1;
    ans[0] = 0;
    bool can = true;
    repm(i,N,0) {

        vector<int> v;
        int I = i;
        while(I <= N) {
            v.push_back(I);
            I += i;
        }
        sort(v.begin(), v.end(), greater<int>());

        int count = 0;
        for(auto x: v) {
            if (ans[x] == -1) {
                if (count % 2 == a[x]) ans[x] = 0;
                else ans[x] = 1;
            } else {
                count += ans[x];
            }
        }
    }
    if (can) {
        int count = 0; for(auto x: ans) count += x;
        cout << count << endl;
        bool f = true;
        repp(i,1,N+1) {
            if (ans[i] != 0) {
                if (!f) cout << " " << i;
                else {
                    cout << i;
                    f = false;
                }
            }
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}
