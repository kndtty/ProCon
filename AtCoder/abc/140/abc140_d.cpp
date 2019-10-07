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
    int N, K; cin >> N >> K;
    string l; cin >> l;

    int left = 0;
    int count = 0;
    int ans1 = 0;

    char L = l[0];
    char R = L == 'L' ? 'R' : 'L';

    repp(right, 1, N) {
        if (l[right] == R && l[right-1] == L) ++count;
        if (count > K) {
            ans1 = max(ans1, right-left);
            --count;
            ++left;
            while(!(l[left]==L && l[left-1]==R)) {
                ++left;
            }
        }
        if (right == N-1 && count <= K) ans1 = max(ans1, right-left);
    }

    count = 1;
    left = 0;
    int ans2 = 0;
    repp(right, 1, N) {
        if (l[right] == L && l[right-1] == R) ++count;
        if (count > K) {
            ans2 = max(ans2, right-left-1);
            --count;
            ++left;
            while(left < N && !(l[left]==R && l[left-1]==L)) {
                ++left;
            }
        }
        if (right == N-1 && count <= K) ans2 = max(ans2, right-left);
    }
    int ans = max(ans1, ans2);
    if (ans == 0) ans = N-1;

    cout << ans << endl;
}

