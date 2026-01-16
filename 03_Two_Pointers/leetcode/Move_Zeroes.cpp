// LeetCode 283 - Move Zeroes
// Two pointers

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int position = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[position]);
                position++;
            }
        }
    }
};
