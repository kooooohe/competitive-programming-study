//typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>
#include <array>
#include <vector>


using namespace std;

int count(vector<int> list) {
    if (list.size() == 0) {
        return 0;
    }
    list.erase(list.begin());

    return 1 + count(list);
}

int main() {
    vector<int> v = {1,2,3,4};
    printf("%d\n", count(v));
}
