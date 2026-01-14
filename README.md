# DSA Repository

Structured learning of Data Structures & Algorithms with topic-wise implementation and LeetCode practice.

## Tech Stack
- **Language:** C++
- **Practice Platform:** LeetCode

## Goals
- Build strong DSA fundamentals
- Prepare for technical interviews
- Solve 200+ LeetCode problems

## Repository Structure
```
DSA/
│
├── 01_Arrays/
│   ├── notes.md
│   ├── basics.cpp
│   └── leetcode/
│       ├── two_sum.cpp
│       └── best_time_buy_sell_stock.cpp
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
```

## Solution Format

Each solution includes:
- Problem link
- Approach/Pattern used
- Time & Space Complexity
- Clean, commented code

**Example:**
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

## Progress Tracker

| Topic | Problems Solved | Status |
|-------|----------------|--------|
| Arrays | 2 | In Progress |
| Hashing | 0 | Not Started |
| Two Pointers | 0 | Not Started |
| Linked List | 0 | Not Started |
| Stack & Queue | 0 | Not Started |
| Trees | 0 | Not Started |
| Graphs | 0 | Not Started |
| Dynamic Programming | 0 | Not Started |

## Contributing

Feel free to suggest improvements or report issues!
