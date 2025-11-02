class Solution {
public:
vector<vector<int>> result;
void solve(int i,vector<int>& candidates,int target,vector<int>temp){
    if(target== 0){
        result.push_back(temp);

    }
   if (i >= candidates.size() || target < 0) return;
   for(int j=i;j<candidates.size();j++){

if(j>i && candidates[j]==candidates[j-1]) continue;
 if (candidates[j] > target) break;
   
   temp.push_back(candidates[j]);
   solve(j+1,candidates,target-candidates[j],temp);
   temp.pop_back();
   }

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
           sort(candidates.begin(), candidates.end());
vector<int> temp;
solve(0,candidates,target,temp);
return result;

        
    }
};