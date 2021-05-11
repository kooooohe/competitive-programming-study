#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> a(N);
  vector<long long> b(N);
  for (int i = 0; i < N; ++i) {
    cin >> a[i] >> b[i];
  }
  long long sum = 0;
  for (int i = N - 1; i >= 0; --i) {
    a[i] += sum;
    long long r = a[i] % b[i];
    // cout << "amari: " << r << endl;
    if (r != 0) {
      sum += (b[i] - r);
    }
  }
  cout << sum << endl;
}
