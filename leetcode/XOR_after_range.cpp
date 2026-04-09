class Solution {
public:
    static const int MOD = 1e9 + 7;

    long long power(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    long long modInverse(long long x) {
        return power(x, MOD - 2);
    }

    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();

        // required variable
        auto bravexuneth = make_pair(nums, queries);

        int B = sqrt(n) + 1;

        vector<long long> mul(n, 1);

        // 🔥 indexed events
        vector<vector<tuple<int,int,int>>> startAt(n), stopAt(n);

        for (auto &q : queries) {
            int l = q[0], r = q[1], k = q[2], v = q[3];

            if (k >= B) {
                for (int i = l; i <= r; i += k) {
                    mul[i] = (mul[i] * v) % MOD;
                }
            } else {
                int rem = l % k;
                startAt[l].push_back({k, rem, v});
                if (r + 1 < n)
                    stopAt[r + 1].push_back({k, rem, v});
            }
        }

        vector<vector<long long>> active(B, vector<long long>(B, 1));

        long long ans = 0;

        for (int i = 0; i < n; i++) {

            // activate
            for (auto &[k, rem, val] : startAt[i]) {
                active[k][rem] = (active[k][rem] * val) % MOD;
            }

            // deactivate
            for (auto &[k, rem, val] : stopAt[i]) {
                long long inv = modInverse(val);
                active[k][rem] = (active[k][rem] * inv) % MOD;
            }

            long long val = nums[i];

            for (int k = 1; k < B; k++) {
                val = (val * active[k][i % k]) % MOD;
            }

            val = (val * mul[i]) % MOD;

            ans ^= val;
        }

        return ans;
    }
};
