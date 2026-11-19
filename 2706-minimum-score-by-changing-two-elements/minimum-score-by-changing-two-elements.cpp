
class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = INT_MAX;
        vector<int> temp = nums;

        // Case 1: Change smallest and largest
        temp[0] = temp[1];
        temp[n-1] = temp[1];

        int mini = *min_element(temp.begin(), temp.end());
        int maxi = *max_element(temp.begin(), temp.end());

        ans = min(ans, maxi - mini);

        // Case 2: Change two smallest
        temp = nums;

        temp[0] = temp[n-1];
        temp[1] = temp[n-1];

        mini = *min_element(temp.begin(), temp.end());
        maxi = *max_element(temp.begin(), temp.end());

        ans = min(ans, maxi - mini);

        // Case 3: Change two largest
        temp = nums;

        temp[n-1] = temp[0];
        temp[n-2] = temp[0];

        mini = *min_element(temp.begin(), temp.end());
        maxi = *max_element(temp.begin(), temp.end());

        ans = min(ans, maxi - mini);

        return ans;
    }
};
