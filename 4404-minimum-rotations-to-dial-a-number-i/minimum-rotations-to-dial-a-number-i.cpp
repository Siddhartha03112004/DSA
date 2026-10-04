class Solution {
public:
    int minRotations(string s) {

        int current = 0;
        int answer = 0;

        for(int i = 0; i < s.size(); i++) {

            int target = s[i] - '0';

            // LEFT
            int leftPos = current;
            int left = 0;

            while(leftPos != target) {

                leftPos--;

                if(leftPos == -1)
                    leftPos = 9;

                left++;
            }

            // RIGHT
            int rightPos = current;
            int right = 0;

            while(rightPos != target) {

                rightPos++;

                if(rightPos == 10)
                    rightPos = 0;

                right++;
            }

            answer += min(left, right);

            current = target;
        }

        return answer;
    }
};