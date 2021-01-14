#include<iostream>

using namespace std;

int getNumberOfDigits(int t) {
	if (t==0) {
		return 1;
	}
	int cnt = 0;
	while (t!=0) {
		t/=10;
		cnt++;
	}
	return cnt;
}
bool hasSpecNumber(int t, int n) {
	while (t!=0) {
		int tmp = t%10;
		if (tmp==n) {
			return true;
		}
		t/=10;
	}
	return false;
}

bool is753(int t) {
	if (!hasSpecNumber(t, 3) ){
		return false;
	}
	if (!hasSpecNumber(t, 5) ){
		return false;
	}
	if (!hasSpecNumber(t, 7) ){
		return false;
	}
	return true;
}

int N;
int rec(int n,int  x) {
	if (n == 0) {
		return 0;
	}
	int cnt = 0;
	int r1 = x*10+3;
	int r2 = x*10+5;
	int r3 = x*10+7;

	if (r1 <= N)  {
		if (is753(r1)) {
			cnt++;
		}
	}
	if (r2 <= N)  {
		if (is753(r2)) {
			cnt++;
		}
	}
	if (r3 <= N)  {
		if (is753(r3)) {
			cnt++;
		}
	}
	return cnt + rec(n-1, r1) + rec(n-1,r2) + rec(n-1,r3);
}

int main() {
	cin >> N;
	cout << rec(getNumberOfDigits(N),0) << endl;
}
