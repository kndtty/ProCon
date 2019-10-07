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
    int n; cin >> n;
    vector<ll> a(n); repp(i,0,n) cin >> a[i];

    deque<ll> res;
    repp(i,0,n) {
        if (i%2) res.push_back(a[i]);
        else res.push_front(a[i]);
    }
    if (n%2) {
        repp(i,0,n) {
            if (i > 0) cout << " ";
            cout << res.front(); res.pop_front();
        }
    } else {
        repp(i,0,n) {
            if (i > 0) cout << " ";
            cout << res.back(); res.pop_back();
        }
    }
    cout << endl;
}
