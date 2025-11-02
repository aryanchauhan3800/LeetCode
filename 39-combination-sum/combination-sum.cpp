class Solution {
public:
vector<vector<int>> result;

void solve(int i,vector<int>& candidates,vector<int> temp,int target){

if(target==0){
    result.push_back(temp);
return ;
}
 if (i >= candidates.size() || target < 0) return;
temp.push_back(candidates[i]);
solve(i,candidates,temp,target-candidates[i]);
temp.pop_back();
solve(i+1,candidates,temp,target);



}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(0,candidates,temp,target);
        return result;

        
    }
};