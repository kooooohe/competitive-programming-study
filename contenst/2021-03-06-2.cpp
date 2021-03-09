#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> psl(N, vector<int>(2));
  vector<vector<int>> psr(N, vector<int>(2));
  for (int i = 0; i < N; ++i) {
    cin >> psr[i][0] >> psl[i][0];
    psr[i][1] = i;
    psl[i][1] = i;
    // cout << ps[i][0];
    // cout << ps[i][1];
    // cout << endl;
  }
  sort(psl.begin(), psl.end(),
       [](const vector<int> &alpha, const vector<int> &beta) {
         return alpha[0] < beta[0];
       });
  sort(psr.begin(), psr.end(),
       [](const vector<int> &alpha, const vector<int> &beta) {
         return alpha[0] < beta[0];
       });

    if (psr[0][1] == psl[0][1]) {
      if ((psr[0][0] + psl[0][0]) <= min(psr[1][0], psl[1][0])) {
        cout << psr[0][0] + psl[0][0] << endl;
      } else {
    	cout << min(max(psr[0][0],psl[1][0]), max(psr[1][0], psl[0][0]))  << endl;
      }
    } else {
    	cout << max(psr[0][0], psl[0][0])  << endl;
    }
}
