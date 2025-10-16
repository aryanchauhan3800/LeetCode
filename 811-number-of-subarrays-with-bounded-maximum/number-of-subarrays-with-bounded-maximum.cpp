class Solution {
public:
int count(vector<int> nums,int b){
    int count =0, curr=0;
    for(int x : nums){
        if(x<=b){
            curr++;

        }else{
            curr=0;

        }
        count+=curr;

    }
    return count ;

}
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums,right) - count(nums,left-1);

    }
};