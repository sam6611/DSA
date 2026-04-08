class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int MOD = 1e9 + 7;
        int B = sqrt(n) + 1;

        // Store queries for small k
        vector<vector<vector<int>>> smallK(B);

        for (auto &q : queries) {
            int l = q[0], r = q[1], k = q[2], v = q[3];

            if (k >= B) {
                // Direct simulate
                for (int i = l; i <= r; i += k) {
                    nums[i] = (1LL * nums[i] * v) % MOD;
                }
            } else {
                smallK[k].push_back(q);
            }
        }

        // Handle small k
        for (int k = 1; k < B; k++) {
            if (smallK[k].empty()) continue;

            for (int start = 0; start < k; start++) {
                // Collect indices with same remainder
                vector<int> idxs;
                for (int i = start; i < n; i += k) {
                    idxs.push_back(i);
                }

                int m = idxs.size();
                vector<long long> mul(m + 1, 1);

                for (auto &q : smallK[k]) {
                    int l = q[0], r = q[1], v = q[3];

                    if (l % k != start) continue;

                    // find positions in idxs
                    int L = (l - start) / k;
                    int R = (r - start) / k;

                    mul[L] = (mul[L] * v) % MOD;
                    if (R + 1 < m)
                        mul[R + 1] = (mul[R + 1] * modInverse(v, MOD)) % MOD;
                }

                // Prefix multiply
                long long cur = 1;
                for (int i = 0; i < m; i++) {
                    cur = (cur * mul[i]) % MOD;
                    nums[idxs[i]] = (nums[idxs[i]] * cur) % MOD;
                }
            }
        }

        int ans = 0;
        for (int x : nums) ans ^= x;
        return ans;
    }

    long long modInverse(long long a, int MOD) {
        return power(a, MOD - 2, MOD);
    }

    long long power(long long a, long long b, int MOD) {
        long long res = 1;
        while (b) {
            if (b & 1) res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }
};
