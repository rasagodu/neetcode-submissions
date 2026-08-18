class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<vector<int>>res;
       for(int i=0;i<nums.size()-2;i++){
        if(nums[i]>0) {break;}
        if(i>0 && nums[i]==nums[i-1]){continue;}
        int L=i+1;
        int R=nums.size()-1;
        int target = -nums[i];
        while( L<R){
            int sum = nums[L] + nums[R];
            if(sum==target){
                res.push_back({nums[i],nums[L],nums[R]});
                    L++;
                    R--;
                    while(L<R && nums[L]==nums[L-1]){L++;}  
                }
            else if(sum>target)R--;
            else L++; 
               


          }


       }





        return res;
    }
};