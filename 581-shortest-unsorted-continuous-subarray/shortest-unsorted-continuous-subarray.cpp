class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n =  nums.size();
        int left =-1;
        int right = -1;
        int maxseen = INT_MIN, minseen = INT_MAX;


        for(int i=0 ;i< n;i++){
            if(nums[i]<maxseen){
                right = i;
            }else{
                maxseen = nums[i];
            }
        }

        for(int i=n-1;i>=0;i--){
            if(nums[i]>minseen){
                left= i;
            }else{
                minseen = nums[i];
            }
        }

        if(left==-1) return 0;
      return right - left + 1;
    }
};