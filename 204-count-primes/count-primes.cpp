class Solution {
public:
    int countPrimes(int n) {
        vector<int> primes;

        for (int i = 2; i < n; i++) {
            bool prime = true;

            for (int p : primes) {
                if (p * p > i) break;

                if (i % p == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime)
                primes.push_back(i);
        }

        return primes.size();
    }
};