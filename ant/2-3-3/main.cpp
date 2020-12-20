//typedef long long ll;

#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>


using namespace std;

int n = 4;
int W = 5;
int w[4] = {2,1,3,2};
int v[4] = {3,2,4,2};

int dp[5][5];

void rec() {
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j <= W; j++) {
            if (j < w[i]) {
                dp[i][j] = dp[i+1][j];
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
            }
        }
    }
    printf("%d\n", dp[0][W]);
}

void solve() {
    rec();
    //memset(dp, -1, sizeof(dp));
    //printf("%d\n", rec(0, W));
}

int main() {
    solve();
}
