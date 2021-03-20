#include <iomanip>
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
  }

  vector<vector<double>> c(N + 1, vector<double>(N + 1));

  for (int i = 0; i <= N; ++i) {
    for (int j = i + 1; j <= N; ++j) {
      double sum = 0;
      for (int k = i; k < j; ++k) {
        sum += points[k];
      }
      c[i][j] = sum / (j - i);
    }
  }

  const long long INF = 1LL << 60;
  vector<vector<double>> dp(N + 1, vector<double>(M + 1, -INF));
  dp[0][0] = 0;

  for (int i = 0; i <= N; ++i) {
    for (int k = 1; k <= M; ++k) {
      if (k > i) {
        break;
      }
      for (int j = 0; j < i; ++j) {
        chmax(dp[i][k], dp[j][k - 1] + c[j][i]);
      }
    }
  }

  for (int i = 0; i <= N; ++i) {
    for (int j = 0; j <= M; ++j) {
    }
  }
  double res = -1;
  for (int i = 0; i <= M; ++i) {
    chmax(res, dp[N][i]);
  }
  cout << fixed << setprecision(10) << res << endl;
}
