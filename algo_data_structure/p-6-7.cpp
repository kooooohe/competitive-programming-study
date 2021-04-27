#include <iostream>
#include <vector>

using namespace std;

template <typename T> struct BIT {
  int n;
  vector<T> bit;
  BIT(int n_) {
    n = n_ + 1;
    bit = bit(n, 0);
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
};

int main() {}
