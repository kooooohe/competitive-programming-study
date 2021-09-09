#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> R(N);
  vector<pair<int, int>> B(N);

  for (int i = 0; i < N; ++i) {
    cin >> R[i].first >> R[i].second;
  }
  for (int i = 0; i < N; ++i) {
    cin >> B[i].first >> B[i].second;
  }
  sort(R.begin(), R.end());
  sort(B.begin(), B.end());

  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    int t = -1;
    int tv = -1;
    for (int j = 0; j < N; ++j) {
      if (R[j].first < B[i].first) {
        if (R[j].second < B[i].second) {
          if (R[j].second > tv) {
            tv = R[j].second;
            t = j;
          }
        }
      }
    }
    if (t > -1) {
      ++cnt;
      R[t].first = 500;
    }
  }
  cout << cnt << endl;
}
