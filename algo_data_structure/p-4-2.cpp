#include <iostream>
#include <vector>

using namespace std;

vector<int> memo;

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
	if (memo[n] > -1) {
		return memo[n];
	}
	return memo[n] = tFib(n-1) + tFib(n-2) + tFib(n-3);
}

int main() {
	int N;
	cin >> N;
	memo.assign(N+1,-1);
	cout << tFib(N) << endl;
}
