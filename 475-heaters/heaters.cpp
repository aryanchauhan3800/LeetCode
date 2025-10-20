class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int ans =0;
        int n= heaters.size();
        int i=0;
        sort(heaters.begin(),heaters.end());
        sort(houses.begin(),houses.end());
for(int house : houses){
        while(i<n-1 && abs(heaters[i+1]- house) <= abs(heaters[i]-house))
        i++;

        ans = max(ans , abs(heaters[i]-house));

}
         return  ans ;

    }
   
};