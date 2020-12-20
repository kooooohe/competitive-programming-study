typedef long long ll;
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;


int main() {
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int ans = 0;

    if (b > a) {
        if (2*x < y) {
            ans = (b-a) * (2*x) + x;
        } else {
            ans = (b-a) * y + x;
        }
    } else {
        if (2*x < y) {
            ans = (a-b) * 2*x - x;
        } else {
            ans = (a-b-1) * y + x;
        }
    }
    if (b == a) {
        ans = x;
    }
    cout << ans << endl;

}

    /*
    ll a[n]; for (ll i=0;i<n;i++){ cin >> a[i];
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
