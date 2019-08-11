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
    vector<int> A(N); 
    vector<int> B(N); 
    repp(i,0,N) {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B.begin(), B.end(), greater<int>());
    repp(i,0,N) {
        if (A[i] == B[0]) cout << B[1] << endl;
        else cout << B[0] << endl;
    }
}                 
