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
  long long W;
  cin >> N >> W;
  vector<long long> weight(N);
  vector<long long> value(N);

  for (int i = 0; i < N; ++i) {
    cin >> value[i] >> weight[i];
  }

  // DP
  vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= W; ++j) {
      if (j >= weight[i]) {
        chmax(dp[i + 1][j], dp[i][j - weight[i]] + value[i]);
      }
      chmax(dp[i + 1][j], dp[i][j]);
      cout << dp[i+1][j] << " ";
    }
      cout <<  endl;
  }

  cout << dp[N][W] << endl;
}
