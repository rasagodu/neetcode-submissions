class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>subsets;
        vector<int> currset;
        helper(0, nums, subsets, currset);
        return subsets;
    }
private: 
    void helper(int i, vector<int>& nums, vector<vector<int>>&subsets, vector<int>& currset){
        if(i>= nums.size()){
            subsets.push_back(currset);
            return;
        }
        currset.push_back(nums[i]);
        helper(i+1, nums, subsets, currset);
        currset.pop_back();

        while(i+1<nums.size() && nums[i]== nums[i+1]) i++;
        helper(i+1, nums, subsets, currset);
    }
};
