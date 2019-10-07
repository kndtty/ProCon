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
    ll k; cin >> k;
    int countDiff = 0;
    repp(i, 0, (int)s.size()) {
        int countSame = 1;
        while(i < (int)s.size() - 1 && s[i] == s[i+1]) {
            ++countSame;
            ++i;
        }
        countDiff += countSame / 2;
    }
    int last = 1;
    repm(i,(int)s.size()-2,-1) {
        if(s[i] == s[(int)s.size()-1]) ++last;
        else break;
    }
    int first = 1;
    repp(i, 1, (int)s.size()) {
        if(s[i] == s[0])  ++first;
        else break;
    }

    if (first == (int)s.size()) cout << (int)s.size() * k / 2  << endl;
    else if (s[0] == s[(int)s.size() - 1]) {
        if (first == 1 && last == 1) cout << countDiff * k + k - 1 << endl;
        else if ((first + last) %2 == 0) cout << countDiff * k + k - 1  << endl;
        else  cout << countDiff * k  << endl;
    } else cout << countDiff * k << endl;
}

