//
// Created by thoma on 1/12/2022.
//

#ifndef LEETCODE_Q1_TWOSUM_H
#define LEETCODE_Q1_TWOSUM_H
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};
#endif //LEETCODE_Q1_TWOSUM_H
