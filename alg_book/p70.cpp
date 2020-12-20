//typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

struct Card {char suit; int value;};

void trace(int array[], int n) {
    for (int i=0;i<n;i++) {
        if (i == n-1) {
            cout << array[i];
        } else {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

void traceCard(Card C[], int n) {
    for (int i=0;i<n;i++) {
        if (i == n-1) {
            cout << C[i].suit << C[i].value;
        } else {
            cout << C[i].suit << C[i].value << " ";
        }
    }
    cout << endl;
}

void bubble(Card C[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n-1; j > i; --j) {
            if (C[j-1].value > C[j].value) {
                swap(C[j-1], C[j]);
            }
        }
    }
    traceCard(C, n);
    cout << "Stable" << endl;
}
void select(Card C[], int n) {
    for (int i=0;i<n-1;i++) {
        int minj = i;
        for (int j=i+1 ;j<n;j++) {
            if (C[j].value < C[minj].value) {
                minj = j;
            }
        }
        if (i != minj) {
            swap(C[i],C[minj]);
        }
    }

    traceCard(C, n);
}

bool isStable(Card C1[], Card C2[], int n) {
    for (int i = 0; i < n; ++i) {
        if (C1[i].suit != C2[i].suit) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    Card C1[n];
    Card C2[n];
    int nums[n];
    for (int i=0;i<n;i++) {
        cin >> C1[i].suit >> C1[i].value;
        C2[i] = C1[i];
        // cout << C2[i].suit << endl;
        // cout << C2[i].value << endl;
    }

    bubble(C1,n);
    select(C2,n);
    if (isStable(C1, C2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    // cout << cnt << endl;

}

int main() {
    solve();
}
