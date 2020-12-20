typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

vector<int> G;
ll cnt;
void insertionSort(int A[], int n, int g) {
    for ( int i = g; i < n; i++ ) {
        int v = A[i];
        int j = i - g;
        while (j >= 0 && A[j] > v) {
            A[j+g] = A[j];
            j-=g;
            cnt++;
        }
        A[j+g] = v;
    }
}

void shellSort(int A[], int n) {
    for(int h=1;;) {
        if (h>n) break;
        G.push_back(h);
        h=3*h+1;
    }

    for(int i=G.size()-1;i>=0;--i){
        insertionSort(A, n, G[i]);
    }
}



void solve() {
    int n;
    cin >> n;
    int nums[n];
    for (int i=0;i<n;i++) {
        cin >> nums[i];
        // cout << C2[i].suit << endl;
    }
    cnt = 0;
    shellSort(nums, n);

    cout << G.size() << endl;
    for (int i=G.size() -1; i>=0; --i) {
        cout << G[i];
        if (i >= 1) {
            cout << " ";
        }
    }
    cout << endl;
    cout << cnt << endl;
    for (int i = 0; i<n; ++i) {
      cout << nums[i] << endl;
    }

    // cout << cnt << endl;

}

int main() {
    solve();
}
