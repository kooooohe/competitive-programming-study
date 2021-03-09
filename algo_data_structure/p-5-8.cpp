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
  int M;
  cin >> N >> M;
  vector<long long> points(N);
  for (int i = 0; i < N; ++i) {
    cin >> points[i];
    // cout << points[i] << endl;
  }

  vector<vector<double>> c(N + 1, vector<double>(N + 1));

  for (int i = 0; i <= N; ++i) {
    for (int j = i + 1; j <= N; ++j) {
      double sum = 0;
      for (int k = i; k < j; ++k) {
        sum += points[k];
      }
      c[i][j] = sum / (j - i);
      cout << c[i][j] << " ";
    }
    cout << endl;
  }

  vector<vector<double>> dp(N + 1, vector<double>(M + 1));

  for (int i = 0; i <= N; ++i) {
    for (int j = 0; j < i; ++j) {
      for (int k = 1; k <= M; ++k) {
        if (k > i) {
          break;
        }
        chmax(dp[i][k], dp[j][k - 1] + c[j][i]);
      }
    }
  }

      cout << endl;
  for (int i = 0; i <= N; ++i) {
    for (int j = 0; j <= M; ++j) {
      cout << dp[i][j] << " ";
    }
      cout << endl;
  }
      cout << endl;
  double res = -1;
  for (int i = 0; i <= M; ++i) {
    chmax(res, dp[N][i]);
  }
  cout << res << endl;
}
