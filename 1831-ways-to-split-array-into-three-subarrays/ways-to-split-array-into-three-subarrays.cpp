class Solution {
public:
    int waysToSplit(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefix(n);
        prefix[0] = nums[0];

        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + nums[i];

        long long mod = 1e9 + 7;
        long long ans = 0;
        int jMin = 0, jMax = 0;

        for (int i = 0; i < n - 2; i++) {
            long long left = prefix[i];


            jMin = max(jMin, i + 1);
            while (jMin < n - 1 && prefix[jMin] - prefix[i] < left)
                jMin++;


            jMax = max(jMax, jMin);
            while (jMax < n - 1 && prefix[jMax] - prefix[i] <= prefix[n - 1] - prefix[jMax])
                jMax++;

            ans = (ans + (jMax - jMin)) % mod;
        }

        return ans;
    }
};
