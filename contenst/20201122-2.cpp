typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int main() {
    ll n,x;
    cin >> n >> x;

    char st[n];
    cin >> st;

    for (ll i=0;i<n;i++) {
        if (st[i] == 'x') {
            if (x > 0) {
                x--;
            }
        } else {
            x++;
        }
    }
    cout << x << endl;
    //cout << fixed << setprecision(10);
    //cout << (-by-ay) << endl;
    //cout << (bx-by) << endl;
    //cout << t << endl;
    //cout << c << endl;
}
