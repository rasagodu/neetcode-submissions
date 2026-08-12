class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         unordered_map<int,int> Count;
        for(auto it: nums){
            if(Count.count(it)==0){
                Count[it] =1;
            }
            else{return true;}
        }
        return false;
    }
};