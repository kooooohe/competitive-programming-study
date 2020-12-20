//typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int n = 3;
int k = 17;

int a[] = {3,5,8};
int m[] = {3,2,2};

int dp[4];

void solve() {
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++) {
            if (dp[j]>=0) {
                dp[j] = m[i];
            } else if (j<a[i] || dp[j-a[i]] <= 0) {
                dp[j] = -1;
            } else {
                dp[j] = dp[j-a[i]] -1;
            }
        }
    }
    
    if (dp[k] >= 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    solve();
}
