class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        if(nums.size()==0) return {};
        vector<vector<int>> subsets;
        vector<int> currset;
        int sums =0;
        sum(0, nums, subsets, currset, target, sums);
        return subsets;
    }
private:
    void sum(int i, vector<int>& nums, vector<vector<int>>& subsets, vector<int>& currset, int target, int &sums){
        if(sums == target){
            subsets.push_back(currset);
            return;
        }
        if(sums>target || i>=nums.size()) return;

        currset.push_back(nums[i]);
        sums+=nums[i];
        sum(i,nums,subsets, currset,target, sums);
        sums-=nums[i];
        currset.pop_back();
        sum(i+1,nums, subsets, currset, target, sums);
    }
};
