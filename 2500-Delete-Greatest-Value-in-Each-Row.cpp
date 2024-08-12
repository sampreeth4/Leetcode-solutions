class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int res = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            sort(grid[i].begin(), grid[i].end());
        }
        for(int j = 0; j < cols; j++){
            int maxi = 0;
            for(int i=0;i < rows; i++){
                maxi = max(maxi , grid[i].back());
                grid[i].pop_back();

            }
            res += maxi;
        }
        return res;

    }
};
