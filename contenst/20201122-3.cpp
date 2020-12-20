typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;


int main() {
    ll r1,c1,r2,c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;


    ll count = 0;
    while (1) {
        if ((r1+c1) == (r2+c2)) {
            break;
        }
        if ((r1-c1) == (r2-c2)) {
            break;
        }
        ll tmp1 = abs(r1-c1);
        ll tmp2 = abs(r2-c2);
        if (tmp1+tmp2) <=3 {
            break;
        }

        ll p = (r1+c1) - (r2+c2);
        ll p2 = (r1-c1) - (r2-c2);

        ll p3 = (r2+c2)/(r1+c1);
        if (p3*

        count++;
    }

    //for (ll i=0;i<n;i++) {
    //    if (st[i] == 'x') {
    //        if (x > 0) {
    //            x--;
    //        }
    //    } else {
    //        x++;
    //    }
    //}
    cout << ar1 << endl;
    //cout << fixed << setprecision(10);
    //cout << (-by-ay) << endl;
    //cout << (bx-by) << endl;
    //cout << t << endl;
    //cout << c << endl;
}
