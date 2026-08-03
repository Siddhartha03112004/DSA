class Solution {
private:
    double power(double x, long long n) {
        if (n == 0)
            return 1.0;

        if (n % 2 == 1)
            return x * power(x, n - 1);

        return power(x * x, n / 2);
    }

public:
    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }

        return power(x, N);
    }
};