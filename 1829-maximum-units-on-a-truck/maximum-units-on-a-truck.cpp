
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        int k = truckSize;

        sort(boxTypes.begin(), boxTypes.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] > b[1];
             });

        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (k > 0) {
                int boxes = min(boxTypes[i][0], k);
                sum += boxes * boxTypes[i][1];
                k -= boxes;
            } else {
                break;
            }
        }

        return sum;
    }
};
