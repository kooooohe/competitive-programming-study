typedef long long ll;
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;


int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    ll count = 0;
    ll sum = 0;
    for (ll i=1;i<=n; i++) {
        sum+=i;
        if (sum > n+1) {
            break;
        }
        count++; 
    }
    ans = n+1 - count;

    cout << ans << endl;

}

    /*
    ll a[n]; for (ll i=0;i<n;i++){ 
         cin >> a[i];
        cout << a[i] << endl;
    }

    ll dp[n+1][t+1] = {};

    for (ll i=0;i<n;i++) {
        //cout << endl;
        for (ll j=0; j<=t; j++) {
            if (j < a[i]) {
                dp[i+1][j]=dp[i][j];
            } else {
                dp[i+1][j]=max(dp[i][j], dp[i][j-a[i]] + a[i]);
            }
            //cout << dp[i+1][j] << " ";           
        }
    }
    cout << "res" << endl;
    cout << dp[n][t] << endl;
    */
