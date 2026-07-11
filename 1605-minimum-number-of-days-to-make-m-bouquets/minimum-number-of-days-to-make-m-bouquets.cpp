class Solution {
    bool canBeMade(vector<int>& nums, int days, int m, int k){
        int made = 0;
        int bloomed = 0;
        for(int it: nums){
            if(it <= days){
                bloomed++;
            }
            else{
                bloomed = 0;
            }

            if(bloomed >= k){
                made++;
                bloomed = 0;
            }
        }

        return made >= m;
    }
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        if((long)m*k > n) return -1;
        int l = *min_element(nums.begin(),nums.end());
        int r = *max_element(nums.begin(),nums.end()); 
        int ans;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(canBeMade(nums,mid,m,k)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }   
        return ans;
    }
};