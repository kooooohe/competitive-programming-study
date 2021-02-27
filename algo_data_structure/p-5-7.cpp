#include <iostream>
#include <vector>

using namespace std;

int main() {
  string S;
  string T;
  cin >> S;
  cin >> T;

  cout << S;
  cout << T;

  vector<vector<long long>> dp(S.size() + 1, vector<long long>(T.size() + 1));
}
