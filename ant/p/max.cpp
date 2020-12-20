//typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>
#include <array>
#include <vector>


using namespace std;

int max(vector<int> list) {
    if (list.size() == 2) {
        if (list[0] > list[1]) {
            return list[0];
        }
        return list[1];
    }
    list.erase(list.begin());

    int tmp = max(list);
    if (list[0] > tmp) {
        return list[0];
    }
    return tmp;
}

int main() {
    vector<int> v = {1,5,3,4};
    printf("%d\n", max(v));
}
