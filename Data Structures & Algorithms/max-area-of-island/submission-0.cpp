class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int ROWS = grid.size();
     int COLS = grid[0].size();
     int area = 0;
     int mArea = 0;
     for(int r =0;r<ROWS;r++){
        for(int c = 0;c< COLS; c++){
            if(grid[r][c] == 1){
                dfs(grid,r,c,area, ROWS, COLS);
                mArea = max(mArea, area);
                area = 0;
            }
        }
     }

     return mArea;
    }

    void dfs(vector<vector<int>>& grid, int r, int c, int& area, int ROWS, int COLS){
        if(min(r,c)<0|| r ==ROWS || c == COLS || grid[r][c]== 0) return;
        area++;
        grid[r][c] = 0;
        dfs(grid,r+1,c,area, ROWS, COLS);
        dfs(grid,r-1,c,area, ROWS, COLS);
        dfs(grid,r,c+1,area, ROWS, COLS);
        dfs(grid,r,c-1,area, ROWS, COLS);
    }
};
