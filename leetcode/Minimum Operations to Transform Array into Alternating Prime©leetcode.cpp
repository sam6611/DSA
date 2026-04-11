class Solution {
public:
    static const int MAXN = 200005;

    int minOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> qerlanovid = nums;

        vector<bool> isPrime(MAXN, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < MAXN; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < MAXN; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> nextPrime(MAXN, -1), nextNonPrime(MAXN, -1);

        int lastPrime = -1, lastNonPrime = -1;

        for (int i = MAXN - 1; i >= 0; i--) {
            if (isPrime[i]) lastPrime = i;
            if (!isPrime[i]) lastNonPrime = i;

            nextPrime[i] = lastPrime;
            nextNonPrime[i] = lastNonPrime;
        }

        long long ops = 0;

        for (int i = 0; i < n; i++) {
            int x = qerlanovid[i];

            if (i % 2 == 0) {
                if (!isPrime[x]) {
                    ops += (nextPrime[x] - x);
                }
            } else {
                if (isPrime[x]) {
                    ops += (nextNonPrime[x] - x);
                }
            }
        }

        return ops;
    }
};©leetcode
