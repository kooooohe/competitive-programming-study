#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

vector<long long> inputs;

// vector<vector<double>> c(N + 1, vector<double>(N + 1));
// vector<vector<double>> c;

double rec(int n,  int cnt) {
  if (n < 0) {
    return 0;
  }
  /*
  double t;
  for (int i = 0; i < cnt; ++i) {
          t += inputs[n];
  }
  */
  double r1 = rec(n - 1,  cnt);
  double r2 = rec(n - 1,  cnt + 1);

  return r1 + r2;
}

int main() {
  int N, M;
  cin >> N >> M;
  inputs.assign(N, 0);
  // c.assign(N + 1, vector<double>(N + 1));
  for (int i = 0; i < N; ++i) {
    cin >> inputs[i];
  }

  for (int bit=0; bit<(1<<(N+2)); ++bit) {

  }

  /*
  for (int i = 0; i <= N; ++i) {
    for (int j = i + 1; j <= N; ++j) {
      double sum = 0;
      for (int k = i; k < j; ++k) {
        sum += inputs[k];
      }
      c[i][j] = sum / (j - i);
    }
  }
  */

  cout << rec(N, 0);
}
