class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset;
        vector<int> currset;
        helper(0,nums,subset,currset);
        return subset;
    }
private:
    void helper(int i, vector<int>& nums, vector<vector<int>>& subset, vector<int>& currset ){
        if(i>=nums.size()){
            subset.push_back(currset);
            return;
        }

        currset.push_back(nums[i]);
        helper(i+1, nums, subset, currset);

        currset.pop_back();
        helper(i+1, nums, subset, currset);
    }    
};
