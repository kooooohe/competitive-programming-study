typedef long long ll;
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
ll n,k;
bool figith(char s1,char s2) {
    if (&s1 == &s2) {
        return true;
    }
    if (&s1 == "R") {
        if (&s2 == "S") {
            return true;
        }
    }
    if (&s1 == "P") {
        if (&s2 == "R") {
            return true;
        }
    }
    if (&s1 == "S") {
        if (&s2 == "P") {
            return true;
        }
    }
    return false;
}
int solve(ll k) {
    //int tmp = sizeof(array) / sizeof(array[0]);
    //if (tmp == 2) {
    //    return 1;
    //}
    //if (tmp == 1) {
    //}
    ll tmp=1;
    for (ll i=0;i<k;i++) {
       tmp*=2; 
    }

    for (ll i=0;i<tmp;i++) {
       
    }

    cout << tmp << endl;
    return 1;
}
int main() {
    cin >> n >> k;
    char s[n];
    for (ll i=0;i<n;i++) { 
         cin >> s[i];
         cout << s[i] << endl;
    }
    solve(k);

    //ll ans = 0;
    //ll count = 0;
    //ll sum = 0;
    //for (ll i=1;i<=n; i++) {
    //    sum+=i;
    //    if (sum > n+1) {
    //        break;
    //    }
    //    count++; 
    //}
    //ans = n+1 - count;

    //cout << ans << endl;

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
