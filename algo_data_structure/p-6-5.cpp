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

  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < N; ++i) {
    cin >> b[i];
  }
  sort(b.begin(), b.end());

  long long left = 0;
  long long right = INF;

  while (right - left > 1) {
    long long mid = (right + left) / 2;
    long long cnt = 0;
    for (int i = 0; i < N; ++i) {
      cnt += upper_bound(b.begin(), b.end(), mid / a[i]) - b.begin();
    }
    if (cnt >= M) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << right << endl;
}
