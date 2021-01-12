#include <iostream>

using namespace std;

int tFib(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}
	return tFib(n-1) + tFib(n-2) + tFib(n-3);
}

int main() {
	int N;
	cin >> N;
	cout << tFib(N) << endl;
}
