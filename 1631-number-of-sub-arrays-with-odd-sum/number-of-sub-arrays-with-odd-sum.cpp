class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod = 1e9 + 7;

        unordered_map<int, int> mpp;
        int sum  = 0;
        int count = 0;
        mpp[0]=1;
        for(int i = 0 ; i < arr.size() ; i++) {
            sum+= arr[i];
            int rem = (sum  % 2);
            if(mpp.find(1 - rem) != mpp.end()) {
                count = (count  + mpp[1 - rem]) % mod;
            }

            mpp[rem]++;
        }
        return count % mod;
    }
};