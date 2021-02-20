#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> scores;
vector<vector<long long>> memo;
int rec(int n, int use) {
  if (n < 0) {
    return 0;
  }
  int a1 = -1;
  int a2 = -1;
  int a3 = -1;
  if (memo[n][use] > -1) {
	return memo[n][use];
  }

  if (use != 0) {
      a1 = scores[n][0] + rec(n - 1, 0);
  }
  if (use != 1) {
      a2 = scores[n][1] + rec(n - 1, 1);
  }
  if (use != 2) {
      a3 = scores[n][2] + rec(n - 1, 2);
  }

  return memo[n][use] = max(a1, max(a2, a3));
}

int main() {
  int N;
  cin >> N;
  // vector<vector<long long>> scores(N, vector<long long>(3));
  scores.assign(N, vector<long long>(3));
  memo.assign(N, vector<long long>(4, -1));
  for (int i = 0; i < N; ++i) {
    cin >> scores[i][0] >> scores[i][1] >> scores[i][2];
  }
  cout << rec(N - 1, 3) << endl;
}
