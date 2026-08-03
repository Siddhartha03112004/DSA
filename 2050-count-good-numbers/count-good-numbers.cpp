class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long x, long long n) {
        if (n == 0)
            return 1;

        if (n % 2 == 1)
            return (x * power(x, n - 1)) % MOD;

        return power((x * x) % MOD, n / 2);
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long evenWays = power(5, even);
        long long oddWays = power(4, odd);

        return (evenWays * oddWays) % MOD;
    }
};