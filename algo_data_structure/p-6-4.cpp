#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const long long INF = 1LL << 50;
int main() {
  int N, M;
  cin >> N >> M;
  vector<long long> a(N);
  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  long long left = 0;
  long long right = INF;

  while (right - left > 1) {
    long long mid = (left + right) / 2;

    long long cnt = 1;
    int pre = 0;
    for (int i = 1; i < N; ++i) {
      if (a[i] - a[pre] >= mid) {
        ++cnt;
        pre = i;
      }
    }

    if (cnt >= M) {
      left = mid;
    } else {
      right = mid;
    }
  }
  cout << left << endl;
}
