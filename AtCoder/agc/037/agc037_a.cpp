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

    int res = 0;

    string back = "";
    int left = 0;
    int size = 1;
    while(left < S.size()) {
        if (back != S.substr(left, size)) {
            ++res;
            back = S.substr(left, size);
            left += size;
            size = 1;
        } else {
            ++size;
        }
    }
    cout << res << endl;
}
