#include <iostream>
#include <vector>

using namespace std;

template <class T> void chmax(T &a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int N;
  cin >> N;
  vector<vector<long long>> scores(N, vector<long long>(3));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> scores[i][j];
    }
  }
  vector<vector<long long>> dp(N, vector<long long>(3));
  dp[0][0] = scores[0][0];
  dp[0][1] = scores[0][1];
  dp[0][2] = scores[0][2];

  for (int i = 1; i < N; ++i) {
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < 3; ++k) {
        if (k != j) {
          chmax(dp[i][j], dp[i - 1][k] + scores[i][j]);
        }
      }
    }
  }

  cout << max(max(dp[N-1][0], dp[N-1][1]), dp[N-1][2]) << endl;
  // cout << dp[N-1][0] << endl;
  // cout << dp[N-1][1] << endl;
  // cout << dp[N-1][2] << endl;
}
