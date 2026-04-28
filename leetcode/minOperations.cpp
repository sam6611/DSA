class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        
        // Flatten the grid into a 1D array
        for (auto& row : grid) {
            for (int val : row) {
                nums.push_back(val);
            }
        }

        // Check if all elements can be converted
        int rem = nums[0] % x;
        for (int num : nums) {
            if (num % x != rem) return -1;
        }

        // Sort to find median
        sort(nums.begin(), nums.end());

        // Median minimizes total operations
        int median = nums[nums.size() / 2];

        int operations = 0;
        for (int num : nums) {
            operations += abs(num - median) / x;
        }

        return operations;
    }
};
