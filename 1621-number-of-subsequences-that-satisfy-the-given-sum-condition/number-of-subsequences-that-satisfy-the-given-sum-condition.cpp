class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
int mod =1e9+7;
long long  count =0;

       vector<int> powe(n,1);
       int left =0;
       int right =n-1;
       for(int i=1;i<n;i++) powe[i]=(powe[i-1]*2)%mod;
       while(left <= right){
        if(nums[left]+nums[right]<= target){
            count = (count + powe[right - left])%mod;
            left++;


        }else{
            right--;

        }
       }
       return count;

    }
};
