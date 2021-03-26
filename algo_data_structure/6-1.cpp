#include <iostream>
#include <vector>

using namespace std;

const int N = 8;
const vector<int> a = {3, 5, 8, 10, 14, 17, 21, 39};

int binary_search(int key) {
  int left = 0;
  int right = a.size() - 1;
  while (right >= left) {
    int mid = (left + right / 2);
    if (a[mid] == key) {
      return mid;
    }
    if (a[mid] > key) {
      right = mid - 1;
    }
    if (a[mid] < key) {
      left = mid + 1;
    }
  }
  return -1;
}

int main() {
	cout << binary_search(10) << endl;
}
