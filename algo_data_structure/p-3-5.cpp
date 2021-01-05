#include <iostream>
#include <vector>
using namespace std;

int numbeOfDivideByTwo(int n) {
    int cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n/=2;
    }
    return cnt;
}

int main () {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; ++i) {
        cin >> A[i];
    }

    int res = 99999999;
    for (int i=0; i<N; ++i) {
        res = min(res, numbeOfDivideByTwo(A[i]));
    }
    cout << res;
}
