class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int k = requests.size();
        int time = 0;
        int curr = 0;

        for (int i = 0; i < k; i++) {
            time += abs(requests[i] - curr);
            curr = requests[i];
        }

        return time;
    }
};