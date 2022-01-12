#include <iostream>
#include <vector>
#include "Q1_twoSum.h"

using namespace std;

int main() {
    Solution obj;
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);

    vector<int> result = obj.twoSum(v, 9);
    cout << result[0];
    cout << result[1];
    return 0;
}
