#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	cin >> S;
	int N = S.size();

	long long sum = 0;
	for (int bit=0; bit < (1<<(N-1));++bit) {
		long long tmp = 0;
		for (int i=0;i<N-1;++i) {
			tmp *= 10;
			tmp += S[i] - '0';
			if (bit & (1 << i)) {
				sum += tmp;
				tmp = 0;
			}
		}
		tmp *= 10;
		tmp += S[N-1] - '0';
		sum += tmp;
	}
	cout << sum << endl;
}
