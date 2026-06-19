class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size())
            return false;

        int n = s.size();

        for(int d = 0; d < n; d++) {

            string temp = s;

            reverse(temp.begin(), temp.begin() + d);
            reverse(temp.begin() + d, temp.end());
            reverse(temp.begin(), temp.end());

            if(temp == goal)
                return true;
        }

        return false;
    }
};