#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num;     //过桥总人数
    vector<int> vec;
    cin >> num;
    int temp;
    for (auto i = 0; i != num; ++i) {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());

    int sum = 0;
    if (num == 1) {
        cout << vec[0];
    }
    if (num == 2) {
        cout << vec[1];
    }
    



}



















