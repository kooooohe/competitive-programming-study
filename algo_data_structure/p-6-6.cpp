#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  long double left = 0;
  long double right = 1000000;

  while ((right - left) > 0.0000000001) {
    long double mid = (right + left) / 2;

    long double res = A * mid + B * sin(C * mid * M_PI);

    if (res >= 100) {
      right = mid;
    } else {
      left = mid;
    }
  }
  cout << fixed << setprecision(15) << right << endl;
}
