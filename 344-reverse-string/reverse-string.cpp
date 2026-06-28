class Solution {

private:

void reverse( vector<char> &s, int left, int right) {
    if(left >= right) {
        return;
    }
    swap(s[left], s[right]);

    return reverse(s, left + 1, right - 1);

}

public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() -1;

       return reverse(s , left, right);
        
    }
};