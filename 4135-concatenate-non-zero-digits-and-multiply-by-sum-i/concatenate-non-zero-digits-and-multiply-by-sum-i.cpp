class Solution {
public:
    long long sumAndMultiply(int n) {
        if ( n == 0) return 0;
        vector<int> ans;
        while(n > 0) {
            int lastDig = n % 10;
            if( lastDig != 0) {
                ans.push_back(lastDig);
            }
            n = n / 10;
        }
        reverse(ans.begin(), ans.end());
        int sum = 0;
        long long x = 0;
        for( auto a : ans) {
            sum  = sum + a;
            x = (x * 10) + a;
        }

        return 1LL* sum * x;
    }
};