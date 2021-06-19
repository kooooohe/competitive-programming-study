#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> a(N);
  vector<pair<int, int>> b(N);

  for (int i = 0; i < N; ++i) {
    cin >> a[i].first >> a[i].second;
  }

  for (int i = 0; i < N; ++i) {
    cin >> b[i].first >> b[i].second;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (int i = 0; i < N; ++i) {
  }
}
