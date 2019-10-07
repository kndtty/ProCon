#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <bitset>
#include <cmath>
#include <string>
#include <stdlib.h>

#define ll long long
#define repp(i,a,b) for(int i=(int)a;i<(int)b;++i)

using namespace std;
template<typename A, size_t N, typename T>
void Fill(A(&array)[N],const T&val){std::fill((T*)array,(T*)(array+N),val);}

long long dp[1010][1<<12];
int main() {
    int N, M; cin >> N >> M;
    vector<long long> A(M);
    vector<vector<int>> C(M);
    repp(i,0,M) {
        int b; cin >> A[i] >> b;
        repp(j,0,b) {
            int c; cin >> c;
            C[i].push_back(c);
        }
    }

    const long long INF = 1LL << 32;

    Fill(dp, INF);
    dp[0][0] = 0;
    
    repp(i,0,M) {
        int bit = 0;
        repp(j,0,(int)C[i].size()) bit |= (1<<(C[i][j]-1));
        repp(j,0,1<<N) dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        repp(j,0,1<<N) dp[i+1][bit|j] = min(dp[i+1][bit|j], dp[i][j] + A[i]);
        
    }

    long long result = dp[M][(1<<N)-1] == INF ? -1:dp[M][(1<<N)-1];
    cout << result << endl;
}

