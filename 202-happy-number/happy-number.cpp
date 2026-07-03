class Solution {

private:
    int squareSum(int n) {
        int sum  = 0;
        while(n) {
            int lastDig = n % 10;
            sum = sum + (lastDig * lastDig);
            n = n / 10;
        }

        return sum;
    }

public:
    bool isHappy(int n) {
        unordered_set<int> visited;

        while( n != 1) {
            if(visited.count(n)) {
                return false;
            }

            visited.insert(n);
             n = squareSum(n);
        }
        
        return true;
    }
};