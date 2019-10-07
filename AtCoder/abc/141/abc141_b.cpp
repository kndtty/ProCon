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
    string S; cin >> S;
    bool b = true;
    repp(i,0,S.size()) {
        if (i%2==0) {
            b &= S[i] == 'R' || S[i] == 'U' || S[i] == 'D';
        } else {
            b &= S[i] == 'L' || S[i] == 'U' || S[i] == 'D';
        }
    }
    if (b) cout << "Yes" << endl;
    else cout << "No" << endl;

}
