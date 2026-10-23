class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;

        for (int i = 0; i < n; i++) {
            int curr = asteroids[i];

            if (curr > 0) {
                st.push(curr);
            } 
            else {
                while (!st.empty() && st.top() > 0 &&
                       st.top() < abs(curr)) {
                    st.pop();
                }

                if (!st.empty() && st.top() == abs(curr)) {
                    st.pop();
                }
                else if (st.empty() || st.top() < 0) {
                    st.push(curr);
                }
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};