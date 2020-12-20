//typedef long long ll;
#include <cstdio>
#include<algorithm>
#include <iostream>
#include <string.h>
#include <array>
#include <vector>


using namespace std;

//int t[4] = {1,2,3,4};

int sum(vector<int> list) {
    if (list.size() == 0) {
        return 0;
    }
    //printf("%ld\n", list.size());
    int tmp = list[0];
    list.erase(list.begin());

    //printf("%ld\n", list.size());
    //return 1;
    return tmp + sum(list);
}

int main() {
    vector<int> v = {1,2,3,4};
    printf("%d\n", sum(v));
}
