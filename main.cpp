#include <iostream>
#include <vector>
#include "Q2_addTwoNumbers.h"
using namespace std;

int main() {
//    Solution obj;
//    vector<int> v;
//    v.push_back(2);
//    v.push_back(7);
//    v.push_back(11);
//    v.push_back(15);
//
//    vector<int> result = obj.twoSum(v, 9);
//    cout << result[0];
//    cout << result[1];

    Solution obj;
    ListNode* l1 = new ListNode(9, new ListNode(9, new ListNode(9)));
    ListNode* l2 = new ListNode(9, new ListNode(9));
    ListNode* result = obj.addTwoNumbers(l1, l2);

    return 0;
}
