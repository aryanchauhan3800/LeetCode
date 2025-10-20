class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector <int> ans ;

        for(int size=n;size>1 ; size--){
            int maxIdx  = max_element(arr.begin(),arr.begin()+size)- arr.begin();

            if(maxIdx!=size-1){
                if(maxIdx!=0){
                     reverse(arr.begin(), arr.begin() + maxIdx + 1);
                    ans.push_back(maxIdx + 1);
                }
                 reverse(arr.begin(), arr.begin() + size);
                ans.push_back(size);
            }
        }

        return ans ;



        
    }
};