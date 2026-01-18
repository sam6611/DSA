// LeetCode 26 - Remove Duplicates from Sorted Array
// Two pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int ss = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[ss] = nums[i];
                ss++;
            }
        }
        return ss;
    }
};
