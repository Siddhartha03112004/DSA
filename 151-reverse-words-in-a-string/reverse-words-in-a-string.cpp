class Solution {
public:
    string reverseWords(string s) {

        // Store all words
        vector<string> words;

        // Store one word at a time
        string word = "";

        // Traverse the string character by character
        for (char c : s) {

            // If the character is not a space,
            // keep adding it to the current word
            if (c != ' ') {
                word += c;
            }
            else {
                // If we reached a space and the word is not empty,
                // save the word and clear it
                if (word != "") {
                    words.push_back(word);
                    word = "";
                }
            }
        }

        // Save the last word (because there may not be a space after it)
        if (word != "") {
            words.push_back(word);
        }

        // Reverse the order of the words
        reverse(words.begin(), words.end());

        // Create the final answer
        string ans = "";

        // Join all words with one space
        for (int i = 0; i < words.size(); i++) {

            ans += words[i];

            // Add a space only if this is not the last word
            if (i != words.size() - 1) {
                ans += " ";
            }
        }

        return ans;
    }
};
