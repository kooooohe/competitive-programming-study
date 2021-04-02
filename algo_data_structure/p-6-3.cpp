#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  int M;
  cin >> N >> M;
  vector<int> P(N + 1);

  vector<int> Q((N + 1) * (N + 1));
  for (int i = 1; i < N + 1; ++i) {
    cin >> P[i];
  }
  P[0] = 0;
  for (int i = 0; i < N + 1; ++i) {
    for (int j = 0; j < N + 1; ++j) {
      Q[i * (N + 1) + j] = P[i] + P[j];
    }
  }
  int ans = 0;
  sort(Q.begin(), Q.end());
  for (int i = 0; i < (N + 1) * (N + 1); ++i) {
    if (Q[i] > M) {
      break;
    }
    auto ite = upper_bound(Q.begin(), Q.end(), M - Q[i]);
    ans = max(ans, *(ite - 1) + Q[i]);
  }
  cout << ans << endl;
}
