#include <iostream>

using namespace std;

struct Node {int parent, left, right;};
Node T[100010];
int D[100010];

int NIL = -1;

int getDepth(int u) {
    int d = 0;
    while(T[u].parent != NIL) {
        u = T[u].parent;
        ++d;
    }
    return d;
}


int main() {
    int l;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) T[i].parent = T[i].left  = T[i].right = NIL;
    for (int i = 0; i < n; ++i)  {
        int id, k; cin >> id >> k;
        for (int j = 0; j < k; ++j) {
            int c; cin >> c;
            if (j == 0) T[id].left = c;
            else T[l].right = c;
            l = c;
            T[c].parent = id;
        }
    }
    for (int i = 0; i < n; i++) {
        string type;
        if (T[i].parent == NIL) type = "root";
        else if (T[i].left == NIL) type = "leaf";
        else type = "internal node";

        cout << "node " << i;
        cout << ": parent = " << T[i].parent;
        cout << ", depth = " << getDepth(i);
        cout << ", " << type << ", [";
        for (int i = 0; i )
    }
}
