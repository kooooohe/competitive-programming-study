//typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>


using namespace std;

int n = 3;
int W = 7;

int w[3] = {3,4,2};
int v[3] = {4,5,3};

int dp[4][8];


void solve() {
    for (int i=0;i<n;i++) {
        for (int j=0; j<=W; j++) {
            if (j < w[i]) {
                dp[i+1][j]=dp[i][j];
            } else {
                dp[i+1][j]=max(dp[i][j], dp[i+1][j-w[i]] + v[i]);
            }
        }
    }
    printf("%d\n", dp[n][W]);
}

int main() {
    solve();
}
