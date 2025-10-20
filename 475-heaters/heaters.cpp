class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());

        int ans =0;
        int n= heaters.size();
int i=0;

        for(int house : houses){

            while(i < n-1 && abs(heaters[i+1]-house) <= abs(heaters[i]- house))
            i++;
            ans = max(ans , abs(heaters[i]-house));

        }
        return ans ;

        
    
    }
};