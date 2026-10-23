class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};
        // Step 1: double the array by pushing all elements at back
        vector<int> doubled(2 * n);
        for (int i = 0; i < n; i++) {
            doubled[i] = arr[i];
            doubled[i + n] = arr[i];
        }
        int m = 2 * n;
        vector<int> ansDoubled(m, -1);
        stack<int> st; // monotonic decreasing stack storing values
        // Step 2: traverse from right to left
        for (int i = m - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= doubled[i]) {
                st.pop();
            }
            if (!st.empty()) ansDoubled[i] = st.top();
            else ansDoubled[i] = -1;
            st.push(doubled[i]);
        }
        // Step 3: first n elements are answer for original array
        vector<int> ans(n);
        for (int i = 0; i < n; i++) ans[i] = ansDoubled[i];
        return ans;
    }
};