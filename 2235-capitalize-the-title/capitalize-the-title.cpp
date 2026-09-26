class Solution {
public:
    string capitalizeTitle(string title) {
        string ans = "";
        string word = "";

        for(char c : title) {
            if(c != ' ') {
                word += c;
            } else {
                if(!word.empty()) {

                    if(word.size() <= 2) {
                        for(char &ch : word)
                            ch = tolower(ch);
                    } else {
                        word[0] = toupper(word[0]);

                        for(int i = 1; i < word.size(); i++)
                            word[i] = tolower(word[i]);
                    }

                    ans += word;
                    ans += ' ';
                    word = "";
                }
            }
        }

        if(!word.empty()) {

            if(word.size() <= 2) {
                for(char &ch : word)
                    ch = tolower(ch);
            } else {
                word[0] = toupper(word[0]);

                for(int i = 1; i < word.size(); i++)
                    word[i] = tolower(word[i]);
            }

            ans += word;
        }

        return ans;
    }
};
