class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int boat =0;
        int n = nums.size();
        int i=0;
        int j=n-1;


        while(i<=j){
            if(nums[i]+ nums[j]<= limit){
                i++;

            }
            j--;

            boat++;

        }
        return boat  ;

    }
};