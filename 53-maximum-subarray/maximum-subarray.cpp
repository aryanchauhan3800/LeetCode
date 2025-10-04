class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  n = nums.size();
        int maxsub = nums[0];
        int sum = nums[0];

        for(int i=1 ;i<n ; i++){
            sum = max(nums[i],sum+ nums[i]);
            maxsub = max(maxsub,sum);

        }
        return maxsub;

    }
};