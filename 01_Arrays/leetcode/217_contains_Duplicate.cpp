// LeetCode 217 - Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/
//
// Approach: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1) (ignoring sorting space)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};
