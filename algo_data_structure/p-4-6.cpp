#include <iostream>
#include <vector>
using namespace std;

vector<vector<bool > > memo;

bool func(int i, int w, const vector<int> &a) {
	if (i==0) {
		if (w==0) {
			return true;
		} else {
			return false;
		}
	}

	if (func(i-1,w,a)) {
		return true;
	}

	if (func(i-1,w-a[i-1],a)) {
		return true;
	}
	return false;
}

int main() {
	int N, W;
	cin >> N >> W;
	vector<int> a(N);
	memo.assign(N+1,vector<bool>(W+1, false));

	for (int i=0; i<N; ++i) {
		cin >> a[i];
	}


	memo[0][0] = true;
	for (int i=0; i < N; ++i) {
		for (int j=0; j <= W; ++j) {
			if (memo[i][j]) {
				memo[i+1][j] = memo[i][j];
			} else
			if (j >= a[i]) {
				memo[i+1][j] = memo[i][j-a[i]];
			} else {
				memo[i+1][j] = memo[i][j];
			}
		}
	}
	if (memo[N][W]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	for (int i=0; i <= N; ++i) {
		for (int j=0; j <= W; ++j) {
		   cout << memo[i][j] << " ";
		}
		   cout << endl;
	}

}
