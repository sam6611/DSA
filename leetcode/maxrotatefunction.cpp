class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        
        long long sum = 0;
        long long f0 = 0;
        
        // Calculate total sum and F(0)
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            f0 += (long long)i * nums[i];
        }
        
        long long maxVal = f0;
        long long curr = f0;
        
        // Use recurrence relation:
        // F(k) = F(k-1) + sum - n * nums[n-k]
        for (int k = 1; k < n; k++) {
            curr = curr + sum - (long long)n * nums[n - k];
            maxVal = max(maxVal, curr);
        }
        
        return (int)maxVal;
    }
};
