//typedef long long ll;

#include <cstdio>
#include<algorithm>
#include <iostream>


using namespace std;

int n = 4;
int W = 5;
int w[4] = {2,1,3,2};
int v[4] = {3,2,4,2};

int rec(int i,int j) {
    int res;
    if (i == n) {
        res = 0;
    } else if (j < w[i]) {
        res = rec(i+1,j);
    } else {
        res = max(rec(i+1,j), rec(i+1,j-w[i])+v[i]);
    }
    return res;
}

void solve() {
    printf("%d\n", rec(0, W));
}

int main() {
    solve();
}
