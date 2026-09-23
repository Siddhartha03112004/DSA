class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count = 0;
        int pos = 0;
        int neg = 0;
        int blank = 0;

        for(char c : moves) {
            if(c == 'R') {
                count++;
                pos++;
            }
            else if(c == 'L') {
                count--;
                neg++;
            }
            else {
                blank++;
            }
        }

        if(pos > neg) {
            count += blank;
        }
        else {
            count -= blank;
        }

        return abs(count);
    }
};