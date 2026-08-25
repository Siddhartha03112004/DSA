class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st;

        for (int x : nums) {
            st.insert(x);
        }

        int ans = k;

        while (st.find(ans) != st.end()) {
            ans += k;
        }

        return ans;
    }
};
