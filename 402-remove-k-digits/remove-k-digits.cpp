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

        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        string result = "";
        for (int j = i; j < ans.size(); j++) {
            result += ans[j];
        }

        if (result.empty()) {
            return "0";
        }

        return result;
    }
};