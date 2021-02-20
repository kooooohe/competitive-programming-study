#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> data;
int rec(int n, int use) {
  if (n < 0) {
    return 0;
  }
  int a1 = -1;
  int a2 = -1;
  int a3 = -1;

  if (use != 0b001) {
    a1 = data[n][0] + rec(n - 1, 0b001);
  }
  if (use != 0b010) {
    a2 = data[n][1] + rec(n - 1, 0b010);
  }
  if (use != 0b100) {
    a3 = data[n][2] + rec(n - 1, 0b100);
  }

  return max(a1, max(a2, a3));
}

int main() {
  int N;
  cin >> N;
  // vector<vector<long long>> data(N, vector<long long>(3));
  data.assign(N, vector<long long>(3));
  for (int i = 0; i < N; ++i) {
    cin >> data[i][0] >> data[i][1] >> data[i][2];
  }
  cout << rec(N - 1, 0) << endl;
}
