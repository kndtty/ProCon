#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

void printVector(vector<int> A) {
    for (int i = 0; i < A.size(); ++i) {
        if (i == 0) cout << A[i];
        else cout << " " << A[i];
    }
    cout << endl;
}

vector<int> insertionSort(vector<int> A) {
    int N = A.size();
    for (int i = 1; i < N; ++i) {
        int v = A[i];
        int j = i - 1;
        while(A[j] > v && j >= 0) {
            A[j+1] = A[j];
            --j;
        }
        A[j+1] = v;
        printVector(A);
    }
    return A;
}

int main() {
    int N; cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    insertionSort(A);
}
