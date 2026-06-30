class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for( string patt : patterns) {
            if(word.find(patt) != string::npos) {
                count++;
            }
        }
        return count;
    }
};