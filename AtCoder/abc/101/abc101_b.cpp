#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>
#include <string>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    string N; cin >> N;
    int sumN = 0;
    for (int i = 0; i < N.size(); ++i) sumN += N[i] - '0';
    if (stoi(N) % sumN == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

}


