// LeetCode 11 - Container With Most Water
// Two pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            ans = max(ans, h * w);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};

/*
Test Cases:

Input: [1,8,6,2,5,4,8,3,7]
Output: 49

Input: [1,1]
Output: 1

Input: [4,3,2,1,4]
Output: 16

Input: [1,2,1]
Output: 2
*/
