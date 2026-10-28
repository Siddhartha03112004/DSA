class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans = "";

        for (char ch : num) {
            while (!st.empty() && st.top() > ch && k > 0) {
                st.pop();
                k--;
            }
            st.push(ch);
        }

        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        for (int i = 0; i < ans.size();) {
            if (ans[i] == '0') {
                ans.erase(ans.begin() + i);
            } else {
                break;
            }
        }

        return ans.empty() ? "0" : ans;
    }
};