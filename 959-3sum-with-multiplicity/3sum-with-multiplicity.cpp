class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n= arr.size();
        long long  ans =0;
      const int mod = 1e9 + 7;

      for(int i=0;i<n;i++){
        unordered_map<int,int> m;
        for(int j=i+1;j<n;j++){
            int k= target- arr[i]- arr[j];
            if(m.find(k)!=m.end()) ans +=m[k];
            m[arr[j]]++;

        }
      }

        return ans % mod;

    }
};