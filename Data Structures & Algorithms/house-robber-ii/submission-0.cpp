class Solution {
public:
    int rob(vector<int>& nums) {
       if(nums.size() == 1) return nums[0];
       return max(helper(vector<int>(nums.begin() + 1, nums.end())), helper(vector<int>(nums.begin(), nums.end() - 1)));

    }
    int helper(vector<int> nums){
        if(nums.empty()) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2 ) return max(nums[0], nums[1]);
        int n = nums.size();
        int i = n - 3;
        int temp = 0;
        int maximum = 0;
        vector<int> money = {max(nums[n-2], nums[n - 1]), nums[n - 1]};
        while(i != -1){
            temp = money[0];
            maximum = max(nums[i] + money[1], money[0]);
            money[0] = maximum;
            money[1] = temp;
            i--;
        }
        return max(money[0], money[1]);
    }
};
