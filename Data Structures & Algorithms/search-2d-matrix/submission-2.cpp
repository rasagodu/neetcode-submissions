class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        // vector<int> l= {0,0};
        // vector<int> r={0,m-1};
        int top=0;
        int bot = n-1;
        int row=0;
        while(top<=bot){
            row = (top+bot)/2;
            if(target>matrix[row][m-1]) top = row+1;
            else if(target<matrix[row][0])bot = row-1;
            else break;

        }
        if (!(top<= bot)) return false;

        row = (top+bot)/2; ;
        int l1=0;
        int r1 = m-1;
        while(l1<=r1){
                int mid = (l1 +r1)/2;
                if(target>matrix[row][mid]) l1 = mid+1;

                else if(target<matrix[row][mid]) r1 = mid-1;
                else return true;         
        }
        return false;
    }
};
