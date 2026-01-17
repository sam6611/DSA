// LeetCode 125 - Valid Palindrome
// Two pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            } 
            else if (!isalnum(s[right])) {
                right--;
            } 
            else {
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};
