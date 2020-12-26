#include <iostream>
#include <ostream>
using namespace std;

int main() {
    int K,S;
    cin >> K >> S;
    int cnt = 0;
    for (int x = 0; x <= min(K,S); ++x) {
        for (int y = 0; y <= min(K,S); ++y) {
            int z = S - x - y;
            if (z >= 0 && z <= K) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
