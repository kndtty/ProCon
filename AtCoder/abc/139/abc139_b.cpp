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
    int A, B; cin >> A >> B;
    if (B == 1) {
        cout << 0 << endl;
        return 0;
    }
    int count = 1;
    int xx = B - A;
    while (xx > 0) {
        ++count;
        xx -= A-1;
    }
    cout << count << endl;
    
}
