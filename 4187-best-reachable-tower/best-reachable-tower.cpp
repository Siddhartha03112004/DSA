class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans;
        int n = towers.size();
        vector<pair<int, pair<int, int>>> v;
        for(int i = 0; i < n; i++){
            int x = towers[i][0], y = towers[i][1], q = towers[i][2];
            int dx = abs(x-center[0]), dy = abs(y-center[1]);
            if(dx+dy <= radius) v.push_back({q, {x, y}});
        }
        sort(v.begin(), v.end(), [](const pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b){
            if(a.first == b.first) return a.second > b.second;
            return a < b;
        });
        if(v.size() == 0) return {-1, -1};
        return {v.back().second.first, v.back().second.second};
    }
};