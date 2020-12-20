//typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int nums[n];
    for (int i=0;i<n;i++) {
        cin >> nums[i];
        //cout << nums[i];
    }

    int res = nums[1] - nums[0];
    int minBuy = nums[0];
    for (int i=1;i<n ;i++) {
       int tmp = nums[i] - minBuy;
       if (tmp > res) {
           res = tmp;
       }
       minBuy = min(nums[i], minBuy);
    }

    cout << res << endl;
}

int main() {
    solve();
}
