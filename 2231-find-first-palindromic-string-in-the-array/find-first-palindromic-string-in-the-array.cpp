class Solution {
private:
    bool isPalindrome(string words) {
        int left = 0;
        int right = words.size() - 1;

        while (left <= right) {
            if (words[left] != words[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();

        for (int i = 0; i < n; i++) {
            if (isPalindrome(words[i])) {
                return words[i];
            }
        }

        return "";
    }
};
