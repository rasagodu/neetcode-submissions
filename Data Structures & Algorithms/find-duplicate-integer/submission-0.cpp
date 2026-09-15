class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int , int> freq;
        for(int value : nums){
            if(freq.count(value)>0) return value;
            else  freq[value] ++;
        }
        return 0;
    }
};
