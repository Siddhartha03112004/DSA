class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        // if only one element exists
        if (n == 1)
            return nums[0];

        // check first element
        if (nums[0] != nums[1])
            return nums[0];

        // check last element
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];

        int low = 1;
        int high = n - 2;

        while (low <= high) {

            int mid = (low + high) / 2;

            // element found
            if ((nums[mid - 1] != nums[mid]) &&
                (nums[mid] != nums[mid + 1])) {

                return nums[mid];
            }
            // checking using index  (odd, even )
            // we are on left side   checking left first   
            if ((mid % 2 == 1 && nums[mid - 1] == nums[mid]) ||
                (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {

                low = low + 1;
            }

            // we are on right side
            else {

                high = high - 1;
            }
        }

        return -1;
    }
};