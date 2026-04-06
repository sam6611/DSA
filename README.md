# DSA Repository – My Data Structures & Algorithms Practice (C++)

This repository contains my DSA and LeetCode solutions written in C++. I am maintaining this repo to improve my problem-solving skills, revise concepts, and prepare for technical interviews.
Each folder contains:
- `notes.md` - Key concepts and patterns
- `basics.cpp` - Basic implementations
- `leetcode/` - LeetCode problem solutions

## Solution Format
```cpp
// LeetCode 206 - Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list/
// Pattern: Iterative pointer reversal
// Time: O(n) | Space: O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while (head) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
};
```
