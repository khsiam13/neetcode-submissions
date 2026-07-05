class Solution {
public:
    int getArea(vector<vector<int>>& grid, int r, int c) {
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()) return 0;
        if(!grid[r][c]) return 0;
        
        grid[r][c] = 0;
        return  1 + getArea(grid, r + 1, c) + 
                getArea(grid, r - 1, c) +
                getArea(grid, r, c + 1) +
                getArea(grid, r, c - 1);

    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j]) {
                    area = max(area, getArea(grid, i, j));
                }
            }
        }
        return area;
    }
};
