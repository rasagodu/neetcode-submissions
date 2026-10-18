class Solution {
public:
    int climbStairs(int n) {
        if(n<2){
            return n;
        }
        int i = 2;
        vector<int> dp = {1, 1};
        int tmp = 0;
        while(i<=n){
            tmp = dp[1];
            dp[1]= dp[0] + dp[1];
            dp[0]= tmp;
            i++;
        }
        return dp[1];
    }
};
