#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> scores(N);
  for (int i = 0; i < N; ++i) {
    cin >> scores[i];
  }

  vector<vector<bool>> dp(N + 1, vector<bool>(10001, false));

  dp[0][0] = true;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= 10000; j++) {
      if (dp[i][j]) {
        dp[i + 1][j] = true;
        continue;
      }
      if (j >= scores[i]) {
        if (dp[i][j - scores[i]]) {
          dp[i + 1][j] = true;
        }
      }
    }
  }

  int res = 0;
  for (int i = 0; i <= 10000; ++i) {
    if (dp[N][i]) {
      res++;
    }
  }
  cout << res << endl;
}
