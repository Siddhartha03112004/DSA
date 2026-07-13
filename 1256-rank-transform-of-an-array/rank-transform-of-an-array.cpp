class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> temp = arr;

        sort(temp.begin(), temp.end());

        unordered_map<int,int> mpp;

        int r = 1;

        for(int i = 0; i < temp.size(); i++) {

            if(mpp.find(temp[i]) == mpp.end()) {

                mpp[temp[i]] = r;

                r++;

            }

        }

        vector<int> ans;

        for(int i = 0; i < arr.size(); i++) {

            ans.push_back(mpp[arr[i]]);

        }

        return ans;
    }
};