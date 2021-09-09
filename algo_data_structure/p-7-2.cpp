#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;
/*
bool compare_by_b(pair<int, int> a, pair<int, int> b) {
  if (a.second != b.second) {
    return a.second < b.second;
  } else {
    return a.first < b.first;
  }
}
*/

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> fp(N);
  vector<pair<int, int>> lp(N);
  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(N);
  vector<int> d(N);

  for (int i = 0; i < N; ++i) {
    cin >> fp[i].first >> fp[i].second;
  }

  for (int i = 0; i < N; ++i) {
    cin >> lp[i].first >> lp[i].second;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0; i < N; ++i) {
    a[i] = fp[i].first;
    b[i] = fp[i].second;

    c[i] = lp[i].first;
    d[i] = lp[i].first;
  }

  int res = 0;
  for (int i = 0; i < N; ++i) {
    // int t = upper_bound(a.begin(), a.end(), c[i] - 1) - a.begin();
    for (int j = 0; j < fp.size(); ++j) {
      if (fp[j].first >= lp[i].first) {
        break;
      }
    }
  }
}
