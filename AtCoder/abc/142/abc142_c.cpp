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
    int N; cin >> N;
    vector<int> A(N+1); repp(i,0,N) cin >> A[i];
    vector<int> O(N+1);

    repp(i,0,N) {
        O[A[i] - 1] = i; 
    }
    repp(i,0,N) {
        if (i > 0) cout << ' ';
        cout << O[i] + 1;
    }
    cout << endl;

}