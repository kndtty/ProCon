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
    map<string,int> m;

    repp(i,0,N) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        m[s] += 1;
    }

    ll count = 0;

    for (auto x: m) {
        ll c = 1;
        ll d = 2;
        repp(i,1,x.second+1) c *= i;
        repp(i,1,x.second+1-2) d *= i;
        count += c/d;
    }
    cout << count << endl;

}
