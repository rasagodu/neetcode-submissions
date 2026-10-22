class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        int currMax = 1;
        int currMin =1;
        int temp = 1;
        for(int n : nums){
            temp = currMax*n;
            currMax = max(max(n,currMax*n), currMin*n);
            currMin = min(min(n,temp), currMin*n);
            res = max(res,currMax);
        }
        return res;
    }
};
