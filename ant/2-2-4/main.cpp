#include <cstdio>
#include<algorithm>
#include <iostream>

using namespace std;

int N = 6;
const int R = 10;
int X[R] = {1,7,15,20,30,50};

void solve() {
    //cout << X+N << endl;
    sort(X, X+N);

    int i=0,ans=0;
    while(i<N){
        int s=X[i++];
        while(i<N && X[i] <= s+R) i++;
        
        int p=X[i-1];

        while(i<N && X[i] <= p+R) i++;

        ans++;
    }

    printf("%d\n", ans);
}

int main() {
    solve();
}
