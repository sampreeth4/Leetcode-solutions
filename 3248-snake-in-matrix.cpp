class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> grid(n, vector<int>(n));
        int el = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                grid[i][j] = el++;
            }
        }

        int f = 0, s = 0;

        for(const string& c : commands) {
            if(c == "RIGHT") {
                if(s + 1 < n) s++;
            } else if(c == "DOWN") {
                if(f + 1 < n) f++;
            } else if(c == "UP") {
                if(f - 1 >= 0) f--;
            } else if(c == "LEFT") {
                if(s - 1 >= 0) s--;
            }
        }

        return grid[f][s];
    }
};
