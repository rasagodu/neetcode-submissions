class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> subsets;
        vector<int> currset;
        int sum =0;
        summation(0, candidates, subsets, currset, sum, target);
        return subsets;
    }
private:
    void summation(int i, vector<int>& candidates, vector<vector<int>>& subsets, vector<int>& currset, int& sum,int target ){
        if(sum == target){
            subsets.push_back(currset);
            return;
        }
        if(sum>target || i>=candidates.size()) return;

        currset.push_back(candidates[i]);
        sum+=candidates[i];
        summation(i+1,candidates, subsets, currset, sum, target);
        sum-= candidates[i];
        currset.pop_back();
        while(i+1<candidates.size() && candidates[i]== candidates[i+1]) i++;
        summation(i+1,candidates, subsets, currset, sum, target);
    }
};
