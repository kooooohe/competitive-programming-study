//typedef long long ll;

#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>


using namespace std;

int n = 4;
int m = 4;
char s[5] = "abcd";
char t[5] = "becd";

int dp[5][5];


void solve() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i] == t[j]) {
                dp[i+1][j+1] = dp[i][j] + 1;
            } else {
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    //memset(dp, -1, sizeof(dp));
    printf("%d\n", dp[n][m]);
}

int main() {
    solve();
}
