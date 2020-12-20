#include <cstdio>
#include<algorithm>
//const int MAX_N = 3;
const int N = 4;
int k = 13;
int a[N] = {1,2,4,7};
using namespace std;

bool dfs(int i, int sum) {
    if (i==N) {
        return sum == k;
    }

    if (dfs(i + 1, sum)) {
        return true;
    }

    if (dfs(i + 1, sum + a[i])) {
        return true;
    }
    return false;

}
void solve() {
    printf("%d\n", dfs(0,0));
}

int main() {
    int n = 4;
    int a[n] = {1,2,4,7};
    int k = 13;
    solve();
}
