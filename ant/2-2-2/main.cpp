#include <cstdio>
#include<algorithm>
using namespace std;
const int MAX_N = 100000;

int N=5;
int S[MAX_N] = {1,2,4,6,8};
int T[MAX_N] = {3,5,7,9,10};
pair<int, int> itv[MAX_N];

void solve() {
    for(int i=0;i<N;i++){
        itv[i].first=T[i];
        itv[i].second=S[i];
    }
    //sort(itv, itv+N);
    for(int i=0;i<N;i++){
        printf("%d", itv[i].first);
        printf(": %d\n", itv[i].second);
    }
    sort(itv, itv+N);

    printf("== \n");
    for(int i=0;i<N;i++){
        printf("%d", itv[i].first);
        printf(": %d\n", itv[i].second);
    }

    int ans=0, t=0;
    for(int i=0;i<N;i++){
        if (t<itv[i].second) {
            ans++;
            t=itv[i].first;
        }
    }
    printf("ans: %d\n",ans);
}

int main() {
    solve();
}
