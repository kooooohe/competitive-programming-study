#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const long long INF = 1LL << 60;
int main() {

  int N, M;
  cin >> N >> M;
  vector<long long> a(N);
  vector<long long> b(N);
  vector<long long> r(N * N);

  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < N; ++i) {
    cin >> b[i];
  }

  int ind = 0;
  // O(N)
  for (int i = 0; i < N; ++i) {
    // O(N)
    for (int j = 0; j < N; ++j) {
      r[ind] = a[i] * b[j];
      ind++;
    }
  }
  // O(logN^2)
  sort(r.begin(), r.end());
  cout << r[M-1] << endl;
}
