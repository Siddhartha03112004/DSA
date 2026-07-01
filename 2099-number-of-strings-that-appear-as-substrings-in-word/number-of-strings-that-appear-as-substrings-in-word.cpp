class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
         set<string> st;
        for(int i = 0 ; i < word.size(); i++) {
            string w = "";
            for(int  j = i ; j < word.size(); j++) {
               w = w + word[j];
                st.insert(w);
            }
        }
        int count = 0;
     for(int i = 0 ; i< patterns.size(); i++) {
        if(st.count(patterns[i])){
            count++;
        }
     }

     return count;
    }
};