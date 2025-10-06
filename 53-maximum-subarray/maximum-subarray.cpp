class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxsub =nums[0];
        int maxi=nums[0];

        for(int i=1;i<n;i++){

            maxi =max(nums[i],maxi+nums[i]);
            maxsub= max(maxsub,maxi);

        }

        return maxsub;

        
    }
};