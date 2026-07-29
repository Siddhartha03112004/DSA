class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long temp = n;

        if (temp < 0) {
            x = 1 / x;
            temp = -temp;
        }

        while (temp > 0) {
            if (temp % 2 == 1) {
                ans *= x;
                temp--;
            } else {
                x *= x;
                temp /= 2;
            }
        }

        return ans;
    }
};