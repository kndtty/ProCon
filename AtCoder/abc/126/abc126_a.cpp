#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    int N, K; cin >> N >> K;
    string S; cin >> S;
    if (S[K-1] == 'A') S[K-1] = 'a';
    if (S[K-1] == 'B') S[K-1] = 'b';
    if (S[K-1] == 'C') S[K-1] = 'c';
    cout << S << endl;

}
