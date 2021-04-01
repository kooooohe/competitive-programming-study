#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> a(N);
  vector<long long> b(N);
  vector<long long> c(N);
  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < N; ++i) {
    cin >> b[i];
  }
  for (int i = 0; i < N; ++i) {
    cin >> c[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  long long res = 0;
  for (int i = 0; i < N; ++i) {
    long long la = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    long long uc = N - (upper_bound(c.begin(), c.end(), b[i]) - c.begin());
    res += la * uc;
  }
  cout << res << endl;
}
