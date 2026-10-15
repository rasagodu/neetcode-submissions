class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        return helper(0, nums);
    }
private:
    vector<vector<int>> helper(int i, vector<int>& nums){
        if(i == nums.size()){
            return {{}};
        }
        vector<vector<int>>resperms;
        vector<vector<int>> perms = helper(i + 1, nums);
        for(vector<int>p : perms){
            for(int j = 0; j<= p.size();j++){
                vector<int> pCopy(p);
                pCopy.insert(pCopy.begin() + j, nums[i]);
                resperms.push_back(pCopy);
            }
        } 
        return resperms;
    }
};
