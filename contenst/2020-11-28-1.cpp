//typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>


using namespace std;


int main() {
    double ax,ay,bx,by,t;
    cin >> ax >> ay >> bx >> by;
    t = (-by-ay) / (bx-ax);
    // y = ax + c 
    // c = y - ax
    //cout << t << endl;
    double c;
    c = ay - t * ax;
    //cout << c << endl;

    //x = (y - c)a
    double r;
    r = -c/t;

    cout << fixed << setprecision(10);
    cout << r << endl;
    //cout << (-by-ay) << endl;
    //cout << (bx-by) << endl;
    //cout << t << endl;
    //cout << c << endl;
}
