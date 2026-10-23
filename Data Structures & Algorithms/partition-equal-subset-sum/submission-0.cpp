class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(int num: nums) sum+=num;
        if(sum%2 !=0) return false;
        int target = sum/2;
        int n = nums.size();
        unordered_set<int> dp;
        dp.insert(0);
        for(int i = n-1;i>=0;i--){
            unordered_set<int>nextDP;
            for(int t: dp){
                if(t+nums[i]== target) return true;
                nextDP.insert(t);
                nextDP.insert(t + nums[i]);
            }
            dp = nextDP;
        }
        return false;
    }
};
