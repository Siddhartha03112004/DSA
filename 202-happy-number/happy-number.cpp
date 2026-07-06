class Solution {
    private:
    int sum(int n) {
        int summ = 0;
        while( n  > 0) {
            int lastDig = n % 10;
            summ = summ + (lastDig * lastDig);
            n = n /10;
        }
        return summ;
    }
    

public:
    bool isHappy(int n) {
        unordered_set<int> stt;
        while( n != 1) {
            if(stt.find(n) != stt.end()) {
            return false;
        }
            stt.insert(n);
             n = sum (n);
        }
        return true;
    }
};