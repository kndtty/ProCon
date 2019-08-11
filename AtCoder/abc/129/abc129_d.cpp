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

struct Lamp {int top = -1; int bottom = -1; int right = -1; int left = -1;};
struct Node {int u;int v;ll w;};

int main() {
    int H, W; cin >> H >> W;
    char grid[H][W];
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) cin >> grid[i][j];
    }

    Lamp memo[H][W];

    for (int i = 0; i < H; ++i) {
        int lstone = -1;
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '#') {
                lstone = j; continue;
            }
            memo[i][j].left = j - lstone - 1;
        }
    }
    for (int i = 0; i < H; ++i) {
        int rstone = W;
        for (int j = W-1; j >= 0; --j) {
            if (grid[i][j] == '#') {
                rstone = j; continue;
            }
            memo[i][j].right = rstone - j - 1;
        }
    }
    for (int j = 0; j < W; ++j) {
        int tstone = -1;
        for (int i = 0; i < H; ++i) {
            if (grid[i][j] == '#') {
                tstone = i; continue;
            }
            memo[i][j].top = i - tstone - 1;
        }
    }
    for (int j = 0; j < W; ++j) {
        int bstone = H;
        for (int i = H-1; i >= 0; --i) {
            if (grid[i][j] == '#') {
                bstone = i; continue;
            }
            memo[i][j].bottom = bstone - i - 1;
        }
    }

    int res = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            Lamp x = memo[i][j];
            res = max(res, 1 + x.top + x.bottom + x.left + x.right);
        }
    }
    cout << res << endl;

}
