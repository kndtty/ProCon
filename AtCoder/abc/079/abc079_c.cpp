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
    int A = S[0] - '0';
    int B = S[1] - '0';
    int C = S[2] - '0';
    int D = S[3] - '0';
    if     (A + B + C + D == 7) cout << A << '+' << B << '+' << C << '+' << D << '=' << 7 << endl;
    else if(A + B + C - D == 7) cout << A << '+' << B << '+' << C << '-' << D << '=' << 7 << endl;
    else if(A + B - C + D == 7) cout << A << '+' << B << '-' << C << '+' << D << '=' << 7 << endl;
    else if(A + B - C - D == 7) cout << A << '+' << B << '-' << C << '-' << D << '=' << 7 << endl;
    else if(A - B + C + D == 7) cout << A << '-' << B << '+' << C << '+' << D << '=' << 7 << endl;
    else if(A - B + C - D == 7) cout << A << '-' << B << '+' << C << '-' << D << '=' << 7 << endl;
    else if(A - B - C + D == 7) cout << A << '-' << B << '-' << C << '+' << D << '=' << 7 << endl;
    else if(A - B - C - D == 7) cout << A << '-' << B << '-' << C << '-' << D << '=' << 7 << endl;
}
