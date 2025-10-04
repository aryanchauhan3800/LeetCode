class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map <int , int > m;
        int a = target ;

        for( int i =0 ;i<n;i++){
            int more  = a -  nums[i];
            if(m.find(more)!= m.end()){
                return {m[more],i};

            }
            m[nums[i]]= i;
            
        }

        return {-1,-1};

        
    }
};