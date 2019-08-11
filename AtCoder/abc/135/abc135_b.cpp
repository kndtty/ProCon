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
    vector<int> p(N); repp(i,0,N) cin >> p[i];
    int count = 0;
    repp(i,0,N-1) {
        if (p[i] > p[i+1]) {
            int m = i + 1;
            repp(j,i+1,N) {
                if (p[j] < p[m]) m = j;
            }
            swap(p[i], p[m]);
            ++count;
        }
    } 
    if (count < 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
