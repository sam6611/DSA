# DSA Repository

Structured learning of Data Structures & Algorithms with
topic-wise implementation and LeetCode practice.

---

## Language
- C++

## Practice Platform
- LeetCode

## Goal
- Build strong DSA fundamentals
- Prepare for technical interviews

---

## Repository Structure

DSA/
│
├── 01_Arrays/
│   ├── notes.md
│   ├── basics.cpp
│   └── leetcode/
│       ├── two_sum.cpp
│       ├── best_time_buy_sell_stock.cpp
│
├── 02_Hashing/
│   ├── notes.md
│   └── leetcode/
│
├── 03_Two_Pointers/
│   ├── notes.md
│   └── leetcode/
│
├── 04_Linked_List/
│   ├── notes.md
│   ├── basics.cpp
│   └── leetcode/
│
├── 05_Stack_Queue/
│   ├── notes.md
│   └── leetcode/
│
├── 06_Trees/
│   ├── notes.md
│   └── leetcode/
│
├── 07_Graph/
│   ├── notes.md
│   └── leetcode/
│
├── 08_DP/
│   ├── notes.md
│   └── leetcode/
│
└── README.md

---

## How I Add Solutions

- Problems are organized topic-wise
- LeetCode problems are stored inside each topic's `leetcode` folder
- Every solution includes:
  - Approach / Pattern
  - Time Complexity
  - Space Complexity

---

## Example Solution Format

```cpp
// LeetCode 206 - Reverse Linked List
// Pattern: Iterative pointer reversal
// Time Complexity: O(n)
// Space Complexity: O(1)

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
