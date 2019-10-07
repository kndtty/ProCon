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
    string s; cin >> s;

    string S = "";
    repp(i, 0, (int)s.size()) {
        if (s[i] == 'A') S += "A";
        else if (i < (int)s.size() - 1 && s[i] == 'B' && s[i+1] == 'C') {
            S += "D";
            ++i;
        }
        else S += s[i];
    }

    ll res = 0;
    ll countA = 0;
    repp(i, 0, (int)S.size()) {
        if (S[i] == 'B' || S[i] == 'C') {
            countA = 0;
        } else if (S[i] == 'A') {
            ++countA;
        } else if (S[i] == 'D'){
            res += countA;
        }
    }
    cout << res << endl;
}
