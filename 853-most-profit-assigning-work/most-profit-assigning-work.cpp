class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n= difficulty.size();
        vector<pair<int,int>> jobs;

        for(int i=0;i<n;i++){
            jobs.push_back({difficulty[i],profit[i]});

        }
        sort(jobs.begin(),jobs.end());
        sort(worker.begin(),worker.end());
int best =0;
int ans =0;
int i=0;

        for(int w : worker){

            while(i<n && jobs[i].first <= w){
best = max(best,jobs[i].second);
i++;

            }
            ans += best ;

        }

        return ans ;
        

        
    }
};