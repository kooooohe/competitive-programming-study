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

int dp[5][17];
const int INF = 99999;


void solve() {
    fill(dp[0], dp[0] + 17, INF);
    dp[0][0] = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<=16; j++) {
            if (j<v[i]) {
                dp[i+1][j]=dp[i][j];
            } else {
                dp[i+1][j]=min(dp[i][j],dp[i][j-v[i]]+w[i]);
            }
        }
    }
    int res=0;
    for (int i=0;i<=16;i++) {
        if (dp[n][i] <= W) {
            res = i;
            //printf("%d: ", dp[n][i]);
            //printf("%d\n", res);
        }
    }
    printf("%d\n", res);
}

int main() {
    solve();
}
