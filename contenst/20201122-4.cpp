typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

//double solve() {
//}

int main() {
    double a,b,c;
    cin >> a >> b >> c;

    double ans = 0;

    for (int i = 0; i <= (100-a);i++) {
        a++;
        for (int j = 0; j <= (100-b);j++) {
            b++;
            for (int k = 0; k <= (100-c);k++) {
                c++;
                ans += a/(a+b+c)*(100-a) + b/(a+b+c)*(100-b) + c/(a+b+c)*(100-c);
            }
        }
    }
        //ans += a/(a+b+c)*(100-a) + b/(a+b+c)*(100-b) + c/(a+b+c)*(100-c);
    //cout << x << endl;
    cout << fixed << setprecision(10);
    cout << ans << endl;
    //cout << (-by-ay) << endl;
    //cout << (bx-by) << endl;
    //cout << t << endl;
    //cout << c << endl;
}
