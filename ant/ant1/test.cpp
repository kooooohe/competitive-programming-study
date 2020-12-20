#include <cstdio>
#include<algorithm>
const int MAX_N = 3;
using namespace std;


void solve() {
    int L,n;
    L = 10;
    n = 3;
    int x[MAX_N] = {2,6,7};
    
    int minT = 0;
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L-x[i]));
    }
    int maxT = 0;
    for (int i = 0; i < n; i++)  {
        maxT = max(maxT, max(x[i], L-x[i]));
    }
    
    printf("%d %d\n", minT,maxT);
}

int main() {
    printf("hello\n");
    solve();
}
