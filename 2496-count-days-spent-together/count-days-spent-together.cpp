class Solution {
private:
    int dateToDays(string s) {
        vector<int> daysInMonth = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        int month = stoi(s.substr(0, 2));
        int day = stoi(s.substr(3, 2));

        int total = day;

        for (int i = 0; i < month - 1; i++) {
            total += daysInMonth[i];
        }

        return total;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int a1 = dateToDays(arriveAlice);
        int a2 = dateToDays(leaveAlice);
        int b1 = dateToDays(arriveBob);
        int b2 = dateToDays(leaveBob);

        int start = max(a1, b1);
        int end = min(a2, b2);

        int ans = max(0, end - start + 1);

        return ans;
    }
};