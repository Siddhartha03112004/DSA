class Solution {
    bool canEatAllBananas(vector<int>& piles, int speed, int hours){
        long long timeReqd = 0;
        for(int it: piles){
            timeReqd += it/speed;
            timeReqd += (it%speed > 0);
        }
        return timeReqd <= hours;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(),piles.end());
        int ans;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(canEatAllBananas(piles,mid,h)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};