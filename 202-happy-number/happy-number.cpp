class Solution {
private:
    int checkSum(int n ) {
        int sum = 0;

        while(n > 0) {
            int lastDig = n % 10;
            sum = sum + (lastDig * lastDig);
            n = n / 10;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        unordered_set<int> check;
        while( n != 1) {
            if(check.count(n)) {
                return false;
            }

            check.insert(n);
            n=  checkSum(n);

        }
        return true;
    }
};