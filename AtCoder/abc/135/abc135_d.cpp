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

ll MOD = 1000000007;

int main() {
    string S; cin >> S;
    int L = S.size();

    ll dp[L+1][13];
    repp(i,0,L+1) {
        repp(j,0,13) dp[i][j] = 0;
    }
    dp[0][0] = 1;
    

    ll x = 10;
    repp(i,0,L) {
        char c = S[L-i-1];
        if (c == '?') {
            repp(j,0,13) {
                repp(k,0,10) {
                    dp[i+1][(j*x+k)%13] += dp[i][j] % MOD;
                }
            }
        } else {
            repp(j,0,13) {
                dp[i+1][(j*x+(c-'0'))%13] += dp[i][j] % MOD;
            }
        }
        repp(j,0,13) dp[i+1][j] %= MOD;
    }

    cout << dp[L][5] << endl;
}
