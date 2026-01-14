# DSA Repository – My Data Structures & Algorithms Practice (C++)

This repository contains my DSA and LeetCode solutions written in C++. I am maintaining this repo to improve my problem-solving skills, revise concepts, and prepare for technical interviews.

## Contents:
* [__Arrays__](01_Arrays/)
* [__Hashing__](02_Hashing/)
* [__Two Pointers__](03_Two_Pointers/)
* [__Linked List__](04_Linked_List/)
* [__Stack & Queue__](05_Stack_Queue/)
* [__Trees__](06_Trees/)
* [__Graph__](07_Graph/)
* [__Dynamic Programming__](08_DP/)

## Repository Structure
```
DSA/
├── 01_Arrays/
├── 02_Hashing/
├── 03_Two_Pointers/
├── 04_Linked_List/
├── 05_Stack_Queue/
├── 06_Trees/
├── 07_Graph/
└── 08_DP/
```

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
