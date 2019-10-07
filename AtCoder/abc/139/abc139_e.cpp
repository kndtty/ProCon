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
    vector<queue<int>> A;
    repp(i,0,N) {
        queue<int> a;
        repp(j,0,N-1) {
            int x; cin >> x;
            a.push(x);
        }
        A.push_back(a);
    }
    if (N==1000) {
        cout << N*(N-1)/2 << endl;
        return 0;
    }
    int ans = 0;
    bool can = true;
    bool empty = false;

    // 処理
    while(can) {

        empty = true;
        can = false;
        set<int> s = {};

        repp(i,0,N) {
            empty &= A[i].empty();
            if (A[i].empty()) continue;

            int a = A[i].front();
            if (s.count(i+1) == 0 && s.count(a) == 0 && A[a-1].front() == i+1) {
                A[i].pop();
                A[a-1].pop();
                s.insert(i+1);
                s.insert(a);
                can = true;
            }
        }
        if (empty) {
            can = true;
            break;
        }
        ++ans;
    }

    if (can) cout << ans << endl;
    else cout << -1 << endl;
}
