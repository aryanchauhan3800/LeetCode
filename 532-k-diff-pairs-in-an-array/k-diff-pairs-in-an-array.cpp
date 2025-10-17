class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int count =0;
        int i=0;
        int j=1;
        while(j<n){
            if(i==j || nums[j]-nums[i]<k){
                j++;

            }else if(nums[j]-nums[i]>k){
                i++;

            }else{
                count++;
                i++;
                j++;
                while(j<n && nums[j]==nums[j-1])j++;

            }
        }
        return count ;
        
    }
};