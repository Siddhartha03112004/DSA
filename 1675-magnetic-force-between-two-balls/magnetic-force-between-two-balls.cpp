class Solution {
private:
    bool canplace(const vector<int>& position, int a, int balls) {
        int n = position.size();
        int lastPos = position[0];
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (position[i] - lastPos >= a) {
                count++;
                lastPos = position[i];
            }

            if (count >= balls)
                return true;
        }

        return false;
    }

public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int low = 1;
        int high = position.back() - position.front();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canplace(position, mid, m))
                low = mid + 1;
            else
                high = mid - 1;
        }

        return high;
    }
};