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
    int H, W, A, B; cin >> H >> W >> A >> B;


    vector<vector<int>> WH;
    repp(i,0,H) {
        vector<int> w(W);
        repp(j,0,W) w[j] = 0;
        WH.push_back(w);
    }

    // 詰める
    int c = 0;
    int k = 0;
    repp(i,0,H) {
        if (k == B) {
            k = 0;
            c += A;
        }
        repp(j,0,A) {
            if (j + c < W) WH[i][j + c] = 1;
        }
        ++k;
    }
    
    bool can = true;
    
    repp(i,0,H) {
        int count1 = 0;
        repp(j,0,W) {
            if(WH[i][j] == 1) ++count1;
        }
        can &= min(count1, W-count1) == A;
    }
    
    repp(i,0,W) {
        int count1 = 0;
        repp(j,0,H) {
            if(WH[j][i] == 1) ++count1;
        }
        can &= min(count1, H-count1) == B;
    }


    if (can) {
        repp(i,0,H) {
            repp(j,0,W) {
                cout << WH[i][j];
            }
            cout << endl;
        }
    } else cout << "No" << endl;
}

