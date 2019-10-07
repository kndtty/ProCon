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
    priority_queue<float, vector<float>, greater<float> > q;
    repp(i,0,N) {
        float x; cin >> x;
        q.push(x);
    }

    while(q.size() > 1) {
        float a, b;
        a = q.top(); q.pop();
        b = q.top(); q.pop();
        float c = (a+b)/2;
        q.push(c);
    }
    cout << q.top() << endl;
}
