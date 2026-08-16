class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,int> rows;
        unordered_map<int,int> columns;
        unordered_map<int,int> grid;
        for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){continue;}
                rows[board[i][j]] ++;
                
                if(rows[board[i][j]]>1) return false;
            }
            rows.clear();
        }

          for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]== '.' ){continue;}
                columns[board[j][i]] ++;
                
                if(columns[board[j][i]]>1) return false;
            }
            columns.clear();
        }
        int i =0;
        
        int count=0;
        while(i<7){
            for(int j =0;j<9;j++){
                
                if(count%3 ==0){grid.clear();}
                count++;
                // if(board[i][j]=='.'||board[i+1][j]=='.'||board[i+2][j] == '.') {continue;}
                grid[board[i][j]]++;
                if(board[i][j]=='.'){grid[board[i][j]]--;}
                grid[board[i+1][j]]++;
                if(board[i+1][j]=='.'){grid[board[i+1][j]]--;}
                grid[board[i+2][j]]++;
                if(board[i+2][j]=='.'){grid[board[i+2][j]]--;}
                if(grid[board[i][j]]>1||grid[board[i+1][j]]>1||grid[board[i+2][j]]>1) {return false;}
                
                
            }
            i+=3;
        }
        return true;

    }
};