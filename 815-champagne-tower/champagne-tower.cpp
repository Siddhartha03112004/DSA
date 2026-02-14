class Solution {
    vector<vector<double>> champagne;
    void solve(int row,int col){
        if(row==99 || col==99) return;
        double rem=0;
        if(champagne[row][col]>1){
            rem=champagne[row][col]-1;
            champagne[row][col]=1;
        }
        champagne[row+1][col]+=rem/2;
        champagne[row+1][col+1]+=rem/2;
        if(row!=col) solve(row,col+1);
        else solve(row+1,0);
    }
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        champagne.assign(100,vector<double> (100,0.0));
        champagne[0][0]=poured;
        solve(0,0);
        return champagne[query_row][query_glass];
    }
};