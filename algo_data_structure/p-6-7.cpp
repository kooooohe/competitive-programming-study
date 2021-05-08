#include <iostream>
#include <vector>

using namespace std;


template <typename T> struct BIT {
  int n;
  vector<T> bit;
  BIT(int n_) {
    n = n_ + 1;
    bit.assign(n, 0);
  };

  void add(int a, T x) {
    for (int i = a; i < n; i += (i & -i)) {
      bit[i] += x;
    }
  }

  T sum(int a) {
    T s(0);
    for (int i = a; i > 0; i -= (i & -i)) {
      s += bit[i];
    }
    return s;
  }

  void debug() {
    for (int i = 1; i < n; i++) {
      cout << bit[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }
  int low = 0;
  int high = 1 << 30;
  const int geta = N + 1;
  while (high - low > 1) {
    int mid = (high + low) / 2;
    BIT<long long> bit((N + 1) * 2);
    bit.add(geta, 1);
    int sum = 0;
    long long num = 0;
    for (int i = 0; i < N; ++i) {
      if (a[i] <= mid) {
        sum += 1;
      } else {
        sum -= 1;
      }
      bit.debug();
      num += bit.sum(sum + geta -1);
      bit.add(sum + geta, 1);
    }
    cout  << endl;

    if (num >= N*(N+1)/(2*2)) {
        high = mid;
    } else {
        low = mid;
    }
  }
  cout << high << endl;
}
