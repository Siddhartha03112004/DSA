class Solution {
public:

    static bool compare(pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mpp;
        int n = nums.size();

     
        for(int i = 0 ;i< n ; i++) {
            mpp[nums[i]]++;
        }

      // Store {number, frequency}
        vector<pair<int,int>> v;

        for(auto it : mpp) {
            v.push_back(it);
        }

    
        sort(v.begin(), v.end(), compare);

        vector<int> ans;
        
      
        // Take first k elements
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};