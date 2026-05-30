class Solution {
public:
    void reverseString(vector<char>& s) {
        int n  = s.size();
        int st = 0, end = s.size() - 1;
        while (st < n/2) {
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
};
