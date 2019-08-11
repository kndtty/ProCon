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

    ll dp[L+10][13];
    repp(i,0,L+10) repp(j,0,13) dp[i][j] = 0;
    dp[0][0] = 1;

    ll p[L]; p[0] = 1;
    repp(i,1,L) p[i] = p[i-1] * 10;

    repp(i,0,L) {
        if (S[i] == '?') {
            repp(j,0,10) {
                repp(k,0,13) {
                    int l = ((j * p[i] % 13) + k) % 13;
                    dp[i+1][l] += dp[i][k] % MOD;
                }
            }
        } else {
            repp(j,0,10) {
                if (S[i]-'0' != j) continue;
                repp(k,0,13) {
                    int l = ((j * p[i] % 13) + k) % 13;
                    dp[i+1][l] += dp[i][k] % MOD;
                }
            }
        }
    }

    cout << dp[L][5] << endl;

}
