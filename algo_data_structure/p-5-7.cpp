#include <iostream>
#include <vector>

using namespace std;

template <class T> void chmax(T &a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  string S;
  string T;
  cin >> S;
  cin >> T;

  vector<vector<long long>> dp(S.size() + 1, vector<long long>(T.size() + 1));
  dp[0][0] = 0;

  for (int i = 0; i < S.size(); ++i) {
    for (int j = 0; j < T.size(); ++j) {
      if (S[i] == T[j]) {
        chmax(dp[i + 1][j + 1], dp[i][j] + 1);
      }
      chmax(dp[i + 1][j + 1], dp[i + 1][j]);
      chmax(dp[i + 1][j + 1], dp[i][j + 1]);
    }
  }

  int i = S.size();
  int j = T.size();
  string res = "";
  while (i > 0 && j > 0) {
    if (dp[i][j] == dp[i][j - 1]) {
      --j;
      continue;
    }
    if (dp[i][j] == dp[i - 1][j]) {
      --i;
      continue;
    }
    res = S[i-1] + res;
    --j;
    --i;
  }
  cout << res << endl;
}
