class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> l= {0,0};
        vector<int> r={0,m-1};
        for(int i=0;i<n;i++){
            if(target>= matrix[l[0]][l[1]] && target<= matrix[r[0]][r[1]]){
                int l1 =l[1];
                int r1 = r[1];
                while(l1<=r1){
                    int mid = (l1 +r1)/2;
                    if(target>matrix[l[0]][mid]) l1 = mid+1;

                    else if(target<matrix[l[0]][mid]) r1 = mid-1;
                    else return true;
                }
            }
                
            else{
                l[0]++;
                r[0]++;
            }
            
        }
        return false;
    }
};
