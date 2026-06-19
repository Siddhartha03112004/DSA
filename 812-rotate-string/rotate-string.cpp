class Solution {
public:
    
    string rotateStringByD(string s, int d) {
        string temp = "";

        // characters from d to end
        for(int i = d; i < s.size(); i++) {
            temp += s[i];
        }

        // first d characters
        for(int i = 0; i < d; i++) {
            temp += s[i];
        }

        return temp;
    }

    bool rotateString(string s, string goal) {

        if(s.size() != goal.size()) {
            return false;
        }

        if(s == goal) {
            return true;
        }

        int n = s.size();

        for(int d = 1; d < n; d++) {

            string rotated = rotateStringByD(s, d);

            if(rotated == goal) {
                return true;
            }
        }

        return false;
    }
};